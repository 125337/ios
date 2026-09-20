// FUN_00526e1c @ 00526e1c

void FUN_00526e1c(ulong param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  bool bVar1;
  uint uVar2;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  uint local_f0;
  uint local_8c;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  byte local_59;
  ulong local_58;
  byte local_39;
  ulong local_38;
  undefined8 local_30;
  ulong local_28;
  ulong *puVar3;
  
  puVar3 = &local_38;
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(puVar3,param_3);
  uVar2 = (uint)puVar3;
  local_59 = 0;
  local_39 = param_4;
  FUN_0052b2cc();
  local_8c = 0;
  if ((uVar2 & 1) != 0) {
    uVar4 = local_38;
    _objc_getAssociatedObject(local_38,DAT_026f4330);
    _objc_retainAutoreleasedReturnValue();
    local_59 = 1;
    local_58 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_8c = (uint)uVar4;
  }
  uVar2 = local_8c;
  if ((local_59 & 1) != 0) {
    uVar4 = local_58;
    (*(code *)PTR__objc_release_02578630)();
    uVar2 = (uint)uVar4;
  }
  if ((local_8c & 1) != 0) {
    uVar4 = local_38;
    FUN_0052b368();
    _objc_retainAutoreleasedReturnValue();
    local_68 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_length_0269cca0);
    if (uVar4 == 0) {
      uVar5 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_username_026a2238);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = local_68;
      local_68 = uVar5;
      (*(code *)PTR__objc_release_02578630)(uVar4);
    }
    uVar4 = local_38;
    FUN_00529d10();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = local_68;
    local_70 = uVar4;
    FUN_0052b6cc();
    if (((uVar5 & 1) != 0) &&
       (uVar4 = local_70, (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0),
       uVar4 != 0)) {
      puVar6 = PTR_WCRefineMomentsMonitor_026ce718;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineMomentsMonitor_026ce718,PTR_s_sharedInstance_0269cd30);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar6);
    }
    _objc_storeStrong(&local_70);
    puVar3 = &local_68;
    _objc_storeStrong(puVar3,0);
    uVar2 = (uint)puVar3;
  }
  bVar1 = false;
  FUN_0052b2cc();
  local_f0 = 0;
  if ((uVar2 & 1) != 0) {
    local_78 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_username_026a2238);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = true;
    uVar4 = local_78;
    FUN_0052b6cc();
    local_f0 = 0;
    if ((uVar4 & 1) != 0) {
      puVar6 = PTR_WCRefineMomentsMonitor_026ce718;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineMomentsMonitor_026ce718,PTR_s_isDataItemFromCache__026a4718,local_38);
      local_f0 = (uint)puVar6;
    }
  }
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_78);
  }
  if ((local_f0 & 1) == 0) {
    (*DAT_028cb1b0)(local_28,local_30,local_38,local_39 & 1);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

