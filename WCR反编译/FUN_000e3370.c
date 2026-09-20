// FUN_000e3370 @ 000e3370

void FUN_000e3370(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong local_40 [3];
  undefined *local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  FUN_000d8808();
  uVar1 = local_18;
  _objc_getAssociatedObject(local_18,&DAT_028c8391);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_18;
  FUN_000db77c();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&cf_____d__d__d);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar3;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = local_18;
  _objc_getAssociatedObject(local_18,&DAT_028c8392);
  _objc_retainAutoreleasedReturnValue();
  local_40[0] = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isEqualToString__0269ccc8,local_28);
  if ((uVar1 & 1) == 0) {
    _objc_setAssociatedObject(local_18,&DAT_028c8392,local_28,3);
    FUN_000e13f8(local_18,local_20);
  }
  _objc_storeStrong(local_40);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

