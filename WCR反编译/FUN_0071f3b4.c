// FUN_0071f3b4 @ 0071f3b4

void FUN_0071f3b4(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong local_a0;
  ulong local_48;
  ulong local_40 [3];
  uint local_24;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = 0;
    local_24 = 1;
  }
  else {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_sendCaptrueView_026a77e8);
    if ((uVar2 & 1) != 0) {
      uVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_sendCaptrueView_026a77e8);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___UIButton_026cdfc8;
      local_40[0] = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
      uVar2 = local_40[0];
      bVar1 = (uVar3 & 1) != 0;
      if (bVar1) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = uVar2;
      }
      local_24 = (uint)bVar1;
      _objc_storeStrong(local_40,0);
      if (local_24 != 0) goto LAB_0071f610;
    }
    uVar2 = local_20;
    FUN_0071fcb4(local_20,"_sendCaptrueView");
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIButton_026cdfc8;
    local_48 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
    if ((uVar2 & 1) == 0) {
      local_a0 = 0;
    }
    else {
      local_a0 = local_48;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_a0;
    local_24 = 1;
    _objc_storeStrong(&local_48,0);
  }
LAB_0071f610:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

