// FUN_016b5c94 @ 016b5c94

void FUN_016b5c94(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___UIButton_026cdfc8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_18 = 0;
  }
  else {
    uVar2 = local_20;
    _objc_getAssociatedObject(local_20,&DAT_028e3eb9);
    _objc_retainAutoreleasedReturnValue();
    local_18 = uVar2;
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

