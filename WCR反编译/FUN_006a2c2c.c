// FUN_006a2c2c @ 006a2c2c

void FUN_006a2c2c(long param_1)

{
  u_int32_t uVar1;
  long lVar2;
  long lVar3;
  long local_18;
  
  if ((DAT_028cbe19 & 1) != 0) {
    FUN_006a2d64();
    _objc_retainAutoreleasedReturnValue();
    local_18 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_count_0269cfe0);
    if (param_1 != 0) {
      lVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_count_0269cfe0);
      uVar1 = _arc4random_uniform((u_int32_t)lVar2);
      lVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_objectAtIndexedSubscript__0269cc78,uVar1)
      ;
      _objc_retainAutoreleasedReturnValue();
      lVar2 = DAT_028cbde8;
      DAT_028cbde8 = lVar3;
      (*(code *)PTR__objc_release_02578630)(lVar2);
    }
    _objc_storeStrong(&local_18,0);
  }
  return;
}

