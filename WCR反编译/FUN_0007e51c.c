// FUN_0007e51c @ 0007e51c

void FUN_0007e51c(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong local_30;
  undefined4 local_24;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = 0;
    local_24 = 1;
    goto LAB_0007e684;
  }
  uVar2 = local_20;
  _WCRAvatarExternalOverlayForContainer();
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar2;
  if (uVar2 == 0) {
LAB_0007e630:
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_viewWithTag__026cabe0,0x24f6e4);
    _objc_retainAutoreleasedReturnValue();
    local_18 = uVar2;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    uVar1 = local_30;
    if ((uVar2 & 1) == 0) goto LAB_0007e630;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar1;
  }
  local_24 = 1;
  _objc_storeStrong(&local_30,0);
LAB_0007e684:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

