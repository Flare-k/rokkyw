#pragma once
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#include "ItemType.h"


class ArrayList{

private:
    ItemType m_Array[MAXSIZE]; //레코드 배열, 객체를 배열의 형태로 만듬.
    int m_Length;       //리스트에 저장된 레코드 수
    int m_CurPointer;   //current pointer  -> iterator
    
public:
    ArrayList(){
        m_Length = 0;
        ResetList();        //생성자에 이게 왜 들어가야하는지 이해가 안됨 .
    }
    ~ArrayList(){}
    
    //비어있는지 확인하는 함수, 비어있음 = 배열의 길이 0
    void MakeEmpty();
    //길이를 리턴하는 함수
    int GetLength();
    //꽉 차 있는 확인하는 함수
    bool IsFull();
    
    bool IsEmpty();
    //추가하는 함수
    int Add(ItemType data);
    
    int Get(ItemType& data);// Primary key를 기준으로 데이터를 검색하고 해당 데이터를 가져옴
    

    // 레코드 포인터(current pointer) 초기화   current pointer를 0으로 초기화
    void ResetList();
    // current pointer를 하나 증가시키고 끝이 아니면 record index를 리턴 끝이면 -1을 리턴
    //이 부분 정확한 이해 필요
    int GetNextItem(ItemType& data);
    
    int Delete(ItemType data); // 기존 레코드 삭제
    
    
    int ReplaceItem(ItemType data); // 입력된 data와 Primary key와 동일한 기록을 찾아서 List의 해당 기록을 입력된 data로 치환한다.
    
    
    
};

