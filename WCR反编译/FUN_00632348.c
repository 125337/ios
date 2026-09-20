// FUN_00632348 @ 00632348

void FUN_00632348(undefined *param_1,undefined8 param_2,byte param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  char *pcVar5;
  uint local_104;
  undefined *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined *local_a0;
  char *local_98;
  undefined *local_90;
  undefined4 local_84;
  undefined *local_80;
  byte local_71;
  undefined *local_70;
  byte local_61;
  undefined *local_58;
  undefined *local_50 [3];
  byte local_31;
  undefined8 local_30;
  undefined *local_28;
  
  local_31 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  (*DAT_028cb9f8)(param_1,param_2,param_3 & 1);
  puVar4 = local_28;
  puVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  FUN_00636798(puVar4,puVar3,&cf_chat_viewDidDisappear,0xffffffffffffffff);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar4 = &DAT_028cb9b0;
  _objc_loadWeakRetained();
  puVar2 = local_28;
  (*(code *)PTR__objc_release_02578630)();
  if (puVar4 == puVar2) {
    _objc_storeWeak(0,&DAT_028cb9b0,0);
  }
  puVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationItem_0269cf08);
  _objc_retainAutoreleasedReturnValue();
  local_50[0] = puVar4;
  if (puVar4 != (undefined *)0x0) {
    _objc_getAssociatedObject(puVar4,&DAT_0232420f);
    _objc_retainAutoreleasedReturnValue();
    local_58 = puVar4;
    if (puVar4 != (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_invalidate_026ca758);
      _objc_setAssociatedObject(local_50[0],&DAT_0232420f,0,1);
      _objc_setAssociatedObject(local_50[0],&DAT_02324210,0,1);
      _objc_setAssociatedObject(local_50[0],&DAT_02324211,0,1);
      _objc_setAssociatedObject(local_50[0],&DAT_02324212,0,1);
    }
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(local_50,0);
  puVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isMovingFromParentViewController_0269f458);
  uVar1 = (uint)puVar4;
  local_71 = 0;
  local_104 = 1;
  if (((ulong)puVar4 & 1) == 0) {
    puVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isBeingDismissed_0269f460);
    uVar1 = (uint)puVar4;
    local_104 = 1;
    if (((ulong)puVar4 & 1) == 0) {
      puVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      local_71 = 1;
      local_70 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      uVar1 = (uint)puVar4;
      local_104 = uVar1;
    }
  }
  if ((local_71 & 1) != 0) {
    puVar4 = local_70;
    (*(code *)PTR__objc_release_02578630)();
    uVar1 = (uint)puVar4;
  }
  local_61 = (byte)local_104 & 1;
  if (((local_104 & 1) != 0) && (FUN_006366c4(), (uVar1 & 1) != 0)) {
    puVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationItem_0269cf08);
    _objc_retainAutoreleasedReturnValue();
    local_80 = puVar4;
    if (puVar4 == (undefined *)0x0) {
      local_84 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_titleView_0269ea50);
      _objc_retainAutoreleasedReturnValue();
      local_90 = puVar4;
      if (puVar4 == (undefined *)0x0) {
        local_84 = 1;
      }
      else {
        if (DAT_028cba28 == (char *)0x0) {
          pcVar5 = "MMTitleView";
          _objc_getClass();
          DAT_028cba28 = pcVar5;
        }
        pcVar5 = DAT_028cba28;
        _objc_retainAutoreleaseReturnValue();
        local_98 = pcVar5;
        if ((pcVar5 == (char *)0x0) ||
           (puVar4 = local_90,
           (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_isKindOfClass__0269cd68,pcVar5),
           ((ulong)puVar4 & 1) == 0)) {
          local_84 = 1;
        }
        else {
          puVar4 = local_90;
          (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_viewWithTag__026cabe0,0x76b);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = local_90;
          local_a0 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_viewWithTag__026cabe0,0x769);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = local_90;
          local_a8 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_viewWithTag__026cabe0,0x768);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = local_90;
          local_b0 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_viewWithTag__026cabe0,0x767);
          _objc_retainAutoreleasedReturnValue();
          local_b8 = puVar2;
          if (local_a0 != (undefined *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setHidden__026ca970,1);
          }
          if (local_a8 != (undefined *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setHidden__026ca970,1);
          }
          if (local_b0 != (undefined *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setHidden__026ca970,1);
          }
          if (local_b8 != (undefined *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setHidden__026ca970,1);
          }
          _objc_storeStrong(&local_b8);
          _objc_storeStrong(&local_b0,0);
          _objc_storeStrong(&local_a8,0);
          _objc_storeStrong(&local_a0,0);
          local_84 = 0;
        }
      }
      _objc_storeStrong(&local_90,0);
    }
    _objc_storeStrong(&local_80,0);
  }
  return;
}

