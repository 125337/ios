// FUN_007ca748 @ 007ca748

byte FUN_007ca748(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  ulong local_40;
  uint local_38;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_superview_026cab50);
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar2;
  while (local_28 != 0) {
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_containsString__0269d0b0,&cf_NavigationBar);
    bVar1 = (uVar2 & 1) != 0;
    if (bVar1) {
      local_11 = 1;
    }
    local_38 = (uint)bVar1;
    _objc_storeStrong(&local_40,0);
    if (local_38 != 0) goto LAB_007ca8e4;
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_28;
    local_28 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  local_38 = 2;
LAB_007ca8e4:
  _objc_storeStrong(&local_28,0);
  iVar4 = local_38 - 2;
  if (iVar4 == 0) {
    iVar4 = 1;
    local_11 = 0;
    local_38 = 1;
  }
  _objc_storeStrong(iVar4,&local_20,0);
  return local_11 & 1;
}

