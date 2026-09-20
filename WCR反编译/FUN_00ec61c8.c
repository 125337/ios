// FUN_00ec61c8 @ 00ec61c8

ulong FUN_00ec61c8(undefined8 param_1)

{
  ulong uVar1;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_hasPrefix__0269d320,&cf_wcr_attach_);
  _objc_storeStrong(&local_18,0);
  return uVar1 & 0xffffffff;
}

