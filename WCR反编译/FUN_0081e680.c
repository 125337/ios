// FUN_0081e680 @ 0081e680

void FUN_0081e680(void)

{
  u_int32_t uVar1;
  long lVar2;
  undefined8 local_18;
  
  local_18 = DAT_028ccfe8;
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028ccfe8,PTR_s_count_0269cfe0);
  if (local_18 == 0) {
    FUN_0081e734(0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar2 = DAT_028ccfe8;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028ccfe8,PTR_s_count_0269cfe0);
    uVar1 = _arc4random_uniform((u_int32_t)lVar2);
    local_18 = DAT_028ccfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028ccfe8,PTR_s_objectAtIndexedSubscript__0269cc78,uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

