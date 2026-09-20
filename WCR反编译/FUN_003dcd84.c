// FUN_003dcd84 @ 003dcd84

void FUN_003dcd84(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong local_28;
  undefined4 local_1c;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar2 = local_18;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_1c = 1;
  }
  else {
    FUN_003ca3d4(local_18,0);
    FUN_003ca9fc(local_18);
    uVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_viewWithTag__026cabe0,0x24f6e4);
    _objc_retainAutoreleasedReturnValue();
    local_28 = uVar2;
    if (uVar2 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_setHidden__026ca970,0);
    }
    _objc_storeStrong(&local_28,0);
    local_1c = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

