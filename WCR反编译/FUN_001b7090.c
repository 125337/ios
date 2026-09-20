// FUN_001b7090 @ 001b7090

ulong FUN_001b7090(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  cfstringStruct *local_58;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  undefined8 local_20;
  long *local_18;
  
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_1);
  local_18 = &DAT_028c8ac0;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257ac10);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_lowercaseString_0269d9c0);
  _objc_retainAutoreleasedReturnValue();
  local_58 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_58 = &cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_58;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  uVar2 = DAT_028c8ab8;
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028c8ab8,PTR_s_containsObject__0269cbb8,local_30);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return uVar2 & 0xffffffff;
}

