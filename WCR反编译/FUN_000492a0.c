// FUN_000492a0 @ 000492a0

void FUN_000492a0(long param_1)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong local_1c8;
  cfstringStruct *local_138;
  cfstringStruct *local_120;
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  code *local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined *local_a8;
  byte local_99;
  ulong local_98;
  byte local_89;
  ulong local_88;
  ulong local_80;
  byte local_71;
  long local_70;
  long local_68;
  undefined8 local_60;
  undefined *local_58;
  cfstringStruct *local_50 [3];
  cfstringStruct *local_38;
  long local_30;
  long local_28;
  
  pcVar2 = *(cfstringStruct **)(param_1 + 0x20);
  local_30 = param_1;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar2,PTR_s_objectForKeyedSubscript__0269d098,&cf_payerName);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  FUN_0003102c();
  _objc_retainAutoreleasedReturnValue();
  local_38 = pcVar3;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = *(cfstringStruct **)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_objectForKeyedSubscript__0269d098,&cf_amount);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  FUN_0003102c();
  _objc_retainAutoreleasedReturnValue();
  local_50[0] = pcVar3;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  pcVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_120 = &cf__e;
  }
  else {
    local_120 = local_38;
  }
  pcVar3 = local_50[0];
  (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_length_0269cca0);
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_138 = &cf__gw;
  }
  else {
    local_138 = local_50[0];
  }
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_stringWithFormat__0269cca8,&cf___N_Oc6e);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(param_1 + 0x28);
  local_58 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_autoAcceptTransferNotifyType_0269d8c8);
  puVar1 = local_58;
  puVar4 = PTR_WCRefineHelper_026ce000;
  if (lVar5 == 1) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_objectForKeyedSubscript__0269d098,&cf_session)
    ;
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar6;
    FUN_0003102c();
    _objc_retainAutoreleasedReturnValue();
    local_60 = uVar11;
    (*(code *)PTR__objc_release_02578630)(uVar6);
    lVar7 = *(long *)(param_1 + 0x28);
    (*(code *)PTR__objc_msgSend_02578628)(lVar7,PTR_s_autoAcceptTransferNotificationSe_0269d8d0);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar7;
    FUN_000370d0();
    _objc_retainAutoreleasedReturnValue();
    local_68 = lVar5;
    (*(code *)PTR__objc_release_02578630)(lVar7);
    lVar5 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
    if (lVar5 == 0) {
      _objc_storeStrong(&local_68,&cf_filehelper);
    }
    lVar7 = *(long *)(param_1 + 0x28);
    (*(code *)PTR__objc_msgSend_02578628)(lVar7,PTR_s_autoAcceptTransferNotificationJu_0269d8d8);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar7;
    FUN_000370d0();
    _objc_retainAutoreleasedReturnValue();
    local_70 = lVar5;
    (*(code *)PTR__objc_release_02578630)(lVar7);
    lVar5 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
    if (lVar5 == 0) {
      _objc_storeStrong(&local_70,&cf_pQll_O);
    }
    local_71 = 0;
    puVar4 = PTR__OBJC_CLASS___UITraitCollection_026ce138;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UITraitCollection_026ce138,PTR_s_currentTraitCollection_026ca5d8);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_71 = puVar8 == (undefined1 *)((long)&MACH_HEADER.magic + 2);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    local_89 = 0;
    local_99 = 0;
    if ((local_71 & 1) == 0) {
      local_1c8 = *(ulong *)(param_1 + 0x28);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1c8,PTR_s_autoAcceptTransferNotificationJu_0269d8e8);
      _objc_retainAutoreleasedReturnValue();
      local_99 = 1;
      local_98 = local_1c8;
    }
    else {
      local_1c8 = *(ulong *)(param_1 + 0x28);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1c8,PTR_s_autoAcceptTransferNotificationJu_0269d8e0);
      _objc_retainAutoreleasedReturnValue();
      local_89 = 1;
      local_88 = local_1c8;
    }
    FUN_000370d0();
    _objc_retainAutoreleasedReturnValue();
    local_80 = local_1c8;
    if ((local_99 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_98);
    }
    if ((local_89 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_88);
    }
    uVar9 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_hasPrefix__0269d320,&cf__);
    if ((uVar9 & 1) != 0) {
      uVar10 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_substringFromIndex__0269d120,1);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = local_80;
      local_80 = uVar10;
      (*(code *)PTR__objc_release_02578630)(uVar9);
    }
    uVar9 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0);
    if (uVar9 == 0) {
      _objc_storeStrong(&local_80,&cf_800080);
    }
    puVar4 = local_58;
    lVar5 = local_70;
    uVar9 = local_80;
    uVar11 = local_60;
    FUN_00049d44();
    _objc_retainAutoreleasedReturnValue();
    _WCRefineRenderSystemTipMessage(puVar4,lVar5,uVar9);
    _objc_retainAutoreleasedReturnValue();
    local_a8 = puVar4;
    (*(code *)PTR__objc_release_02578630)(uVar11);
    _WCRefineInsertLocalSystemTip(local_68,local_a8);
    local_ac = 1;
    _objc_storeStrong(&local_a8);
    _objc_storeStrong(&local_80,0);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_60,0);
  }
  else {
    local_d8 = PTR___NSConcreteStackBlock_02578660;
    local_d0 = 0xc2000000;
    local_cc = 0;
    local_c8 = FUN_00049ff4;
    local_c0 = &DAT_025794e0;
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_retain_02578638)();
    local_b8 = uVar11;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_showAlertWithTitle_message_btnTi_0269d8f0,&cf_WCRefine,puVar1,&cf_bwSN,0
               ,&cf_MRSgw,&local_d8,local_120,local_138);
    _objc_unsafeClaimAutoreleasedReturnValue(puVar4);
    _objc_storeStrong(&local_b8,0);
    local_ac = 0;
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(local_50,0);
  _objc_storeStrong(&local_38,0);
  return;
}

