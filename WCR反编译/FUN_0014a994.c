// FUN_0014a994 @ 0014a994

void FUN_0014a994(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong local_d0;
  ulong local_a8;
  bool local_59;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  uint local_3c;
  ulong local_38 [3];
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_toolPanelView_0269f450);
  if ((uVar2 & 1) != 0) {
    uVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_toolPanelView_0269f450);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
    local_38[0] = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    uVar2 = local_38[0];
    bVar1 = (uVar3 & 1) != 0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar2;
    }
    local_3c = (uint)bVar1;
    _objc_storeStrong(local_38,0);
    if (local_3c != 0) goto LAB_0014ac90;
  }
  uVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
  _class_getInstanceVariable(uVar2,"_toolPanelView");
  local_48 = uVar2;
  if (uVar2 == 0) {
    local_a8 = 0;
  }
  else {
    local_a8 = local_20;
    _object_getIvar(local_20,uVar2);
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_a8;
  }
  local_59 = uVar2 != 0;
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = local_a8;
  if (local_59) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  uVar2 = local_50;
  puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
  if ((uVar2 & 1) == 0) {
    local_d0 = 0;
  }
  else {
    local_d0 = local_50;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_d0;
  local_3c = 1;
  _objc_storeStrong(&local_50,0);
LAB_0014ac90:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

