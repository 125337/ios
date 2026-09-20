// FUN_0001d3ec @ 0001d3ec

void FUN_0001d3ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong local_108;
  ulong local_d8;
  ulong local_98;
  undefined4 local_8c;
  ulong local_88;
  ulong local_80;
  byte local_71;
  ulong local_70;
  ulong local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulong local_40;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  local_71 = 0;
  uVar1 = local_30;
  local_50 = param_2;
  local_48 = param_1;
  local_40 = param_5;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_GetMessagesWrapArray_0269d218);
  if ((uVar1 & 1) == 0) {
    local_d8 = 0;
  }
  else {
    local_d8 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_GetMessagesWrapArray_0269d218);
    _objc_retainAutoreleasedReturnValue();
    local_71 = 1;
    local_70 = local_d8;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = local_d8;
  if ((local_71 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_70);
  }
  uVar1 = local_58;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar1 & 1) == 0) {
    _objc_storeStrong(&local_58,*(undefined8 *)PTR____NSArray0___02578280);
  }
  uVar1 = local_58;
  FUN_0001ea48(local_48,local_50,local_58,local_40);
  _objc_retainAutoreleasedReturnValue();
  if (local_40 == 0) {
    local_108 = 3000;
  }
  else {
    local_108 = local_40;
  }
  local_88 = local_108;
  lVar5 = 0;
  local_80 = uVar1;
  if (local_40 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_count_0269cfe0);
    uVar3 = local_80;
    lVar5 = uVar1 - local_88;
    if (local_88 <= uVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = uVar3;
      local_8c = 1;
      goto LAB_0001d78c;
    }
  }
  uVar3 = local_38;
  FUN_0001f174(lVar5,local_48,local_50,local_38,local_40);
  _objc_retainAutoreleasedReturnValue();
  local_98 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_count_0269cfe0);
  uVar4 = local_80;
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_count_0269cfe0);
  local_28 = local_80;
  uVar1 = local_98;
  if (uVar3 < uVar4) {
    (*(code *)PTR__objc_retain_02578638)();
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = uVar1;
  }
  local_8c = 1;
  _objc_storeStrong(&local_98,0);
LAB_0001d78c:
  _objc_storeStrong(&local_80);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

