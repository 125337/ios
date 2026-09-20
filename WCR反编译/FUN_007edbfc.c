// FUN_007edbfc @ 007edbfc

uint FUN_007edbfc(undefined8 param_1)

{
  long lVar1;
  uint local_34;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_length_0269cca0);
  local_34 = 0;
  if (lVar1 != 0) {
    lVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_containsString__0269d0b0,&cf_RYQQbc_N);
    local_34 = (uint)lVar1;
  }
  _objc_storeStrong(&local_18,0);
  return local_34 & 1;
}

