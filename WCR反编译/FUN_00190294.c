// FUN_00190294 @ 00190294

ulong FUN_00190294(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  local_20 = param_2;
  FUN_0018a2dc(local_18,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_28 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_20);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_containsObject__0269cbb8);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  return uVar1 & 0xffffffff;
}

