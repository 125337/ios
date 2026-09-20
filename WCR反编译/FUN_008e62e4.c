// FUN_008e62e4 @ 008e62e4

bool FUN_008e62e4(undefined8 param_1)

{
  long lVar1;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_rangeOfString__0269d838,&cf_AppVideo);
  _objc_storeStrong(&local_18,0);
  return lVar1 != 0x7fffffffffffffff;
}

