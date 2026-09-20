// FUN_0018ad9c @ 0018ad9c

ulong FUN_0018ad9c(undefined8 param_1)

{
  ulong uVar1;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  _objc_getAssociatedObject(local_18,&DAT_028c897a);
  _objc_retainAutoreleasedReturnValue();
  local_20 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_boolValue_026ca540);
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return uVar1 & 0xffffffff;
}

