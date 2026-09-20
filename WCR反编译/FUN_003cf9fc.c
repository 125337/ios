// FUN_003cf9fc @ 003cf9fc

bool FUN_003cf9fc(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_length_0269cca0);
  bVar1 = false;
  if (lVar2 != 0) {
    lVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_rangeOfString__0269d838,&cf_Rd);
    bVar1 = true;
    if (lVar2 == 0x7fffffffffffffff) {
      lVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_rangeOfString__0269d838,&cf_nzzU_);
      bVar1 = lVar2 != 0x7fffffffffffffff;
    }
  }
  _objc_storeStrong(&local_18,0);
  return bVar1;
}

