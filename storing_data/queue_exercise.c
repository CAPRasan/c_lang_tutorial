//リングバッファ（輪構造）を用いたキューデータ構造
//出典（https://momo-chienoki.com/C/Algorithm/C_Algorithm_Queue/）。大丈夫か…？

#include <stdio.h>

#define QUEUE_SIZE 7
#define QUEUE_NEXT(n) ((n + 1) % QUEUE_SIZE)

//キューの構造体（順序int、head、tail）
typedef struct Queue_data{
    int queue[QUEUE_SIZE];
    int head;
    int tail;
} Queue_data;

//Queueの初期化
static void que_init(Queue_data *q)
{
    q->head = 0;
    q->tail = 0;
}

//Queueが空かどうか調べる
int que_isempty(const Queue_data *q)
{
    return (q->head == q->tail);
}

int que_push(Queue_data *q, int data)
{
    //キューが満杯である場合の処理
    if(QUEUE_NEXT(q->tail) == q->head) return 1;

    //キューの末尾にデータを挿入する
    q->queue[q->tail] = data;
    //キューの次回挿入位置を決定する
    q->tail = QUEUE_NEXT(q->tail);

    return 0;
}

int que_pop(Queue_data *q, int *data)
{
    //キューに取り出すデータがない場合の処理
    if (q->head == q->tail) return 1;

    //キューからデータを取得する
    *data = q->queue[q->head];
    //次のデータ取得位置を決定
    q->head = QUEUE_NEXT(q->head);

    return 0;
}

//配列要素idの位置が待ち行列の範囲内であるか確認
static int is_use_range(const Queue_data *q, int id)
{
    if (id < q->tail && id >= q->head) return 1;
    if (id > q->tail && id >= q->head && q->head > q->tail) return 1;
    if (id < q->tail && id < q->head && q->head > q->tail) return 1;
    
    return 0;
}

//キューの要素を一覧表示する
static void que_print(Queue_data *q)
{
    printf("queue [");
    for (int cnt = 0; cnt < QUEUE_SIZE; cnt++) {
        if (is_use_range(q, cnt)) {
            //待ち行列の範囲内
            printf("%2d", q->queue[cnt]);
        } else {
            //待ち行列の範囲外
            printf("%2c", '.');
        }
    }
    printf("]\n");
}

int main(void)
{
    Queue_data q;
    int data = 0;
    int cnt;

    que_init(&q);

    //キューにデータを入力
    for (cnt = 1; cnt < 5; cnt++) {
        printf("enqueue %d: ", cnt);
        if (que_push(&q, cnt) != 0) {
            printf("Queue is full.\n");
        } else {
            que_print(&q);
        }
    }

    //キューからデータを取得する
    for (cnt = 1; cnt < 4; cnt++) {
        if (que_pop(&q, &data) != 0) {
            printf("Queue is empty. \n");
        } else {
            printf("dequeue %d: ", data);
            que_print(&q);
        }
    }

    //キューにデータを入力する
    for (cnt = 5; cnt < 10; cnt++) {
        printf("enqueue %d: ", cnt);
        if (que_push(&q, cnt) != 0) {
            printf("Queue is full.\n");
        } else {
            que_print(&q);
        }
    }

    //キューからデータを取得する
    for (cnt = 1; cnt < 4; cnt++) {
        if (que_pop(&q, &data) != 0) {
            printf("Queue is empty.\n");
        } else {
            printf("dequeue %d: ", data);
            que_print(&q);
        }
    }

    return 0;
}