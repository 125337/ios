// _WCRAvatarExternalOverlayForContainer @ 0093b150

void _WCRAvatarExternalOverlayForContainer(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_30;
  undefined4 local_24;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = 0;
    local_24 = 1;
    goto LAB_0093b288;
  }
  uVar1 = local_20;
  _objc_getAssociatedObject(local_20,DAT_026f4c40);
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar1;
  if (uVar1 == 0) {
LAB_0093b268:
    local_18 = 0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar1 & 1) == 0) goto LAB_0093b268;
    uVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    uVar1 = local_30;
    if (uVar3 == 0) {
      _WCRAvatarClearExternalOverlayForContainer(local_20);
      goto LAB_0093b268;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar1;
  }
  local_24 = 1;
  _objc_storeStrong(&local_30,0);
LAB_0093b288:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

