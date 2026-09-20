// FUN_000a2cd4 @ 000a2cd4

void FUN_000a2cd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long local_138;
  long local_a0;
  long local_90;
  long local_80;
  long local_70;
  long local_68;
  uint local_60;
  byte local_59;
  long local_58;
  byte local_49;
  long local_48;
  byte local_39;
  long local_38;
  undefined1 *local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_5);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_39 = 0;
  local_49 = 0;
  local_59 = 0;
  bVar1 = true;
  local_30 = puVar3;
  if (0 < (long)puVar3) {
    lVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    local_39 = 1;
    local_38 = lVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_49 = 1;
    bVar1 = true;
    local_48 = lVar4;
    if (lVar4 != 0) {
      lVar4 = local_28;
      FUN_000a38b4();
      _objc_retainAutoreleasedReturnValue();
      local_59 = 1;
      bVar1 = lVar4 != 0;
      local_58 = lVar4;
    }
  }
  if ((local_59 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  if ((local_49 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  if ((local_39 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  if (bVar1) {
    local_60 = 1;
  }
  else {
    bVar1 = local_30 != (undefined1 *)((long)&MACH_HEADER.magic + 1);
    if (bVar1) {
      local_90 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      local_138 = local_90;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_a0 = local_138;
    }
    else {
      local_70 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      local_138 = local_70;
      FUN_000a3988();
      _objc_retainAutoreleasedReturnValue();
      local_80 = local_138;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = local_138;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_a0);
      (*(code *)PTR__objc_release_02578630)(local_90);
    }
    else {
      (*(code *)PTR__objc_release_02578630)(local_80);
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
    bVar1 = local_68 != 0;
    if (bVar1) {
      lVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      lVar6 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_convertRect_toView__0269ded8);
      (*(code *)PTR__objc_msgSend_02578628)
                (param_1,param_2,param_3,param_4,local_68,PTR_s_setFrame__026ca960);
      (*(code *)PTR__objc_release_02578630)(lVar7);
      (*(code *)PTR__objc_release_02578630)(lVar6);
      (*(code *)PTR__objc_release_02578630)(lVar5);
      (*(code *)PTR__objc_release_02578630)(lVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setUserInteractionEnabled__026caad8,0);
      lVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(lVar5);
      (*(code *)PTR__objc_release_02578630)(lVar4);
      FUN_000a4284(local_28,local_68);
    }
    local_60 = (uint)!bVar1;
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

