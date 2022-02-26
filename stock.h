#ifndef STOCK_H
#define STCOK_H

#include "product.h"

// 날짜 입력 형식: YYYY-MM-DD

typedef struct stock_t {
    char inc_date[20]; // 입고 날짜
    char out_date[20]; // 출고 날짜
    char take_date[20]; // 고객 인수 날짜
    PRODUCT product; // 상품
} STOCK;

// 입고는 임의로 데이터를 삽입하고, 관리자가 추가한다고 가정하자
// 그렇다면 출고 날짜와 고객 인수 날짜는 어떻게 지정하나?
//   - 사용자가 구매를 한 날짜에서 오차 범위 안


#endif