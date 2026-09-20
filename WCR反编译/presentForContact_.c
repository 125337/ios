// presentForContact: @ 0112e1dc

/* Function Stack Size: 0x18 bytes */

void WCRefineQuickRemarkEditor::presentForContact_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  bool bVar2;
  ID IVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  code *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  code *local_a8;
  undefined *local_a0;
  ulong local_98;
  undefined *local_90;
  ulong local_88;
  ID local_80;
  byte local_71;
  undefined1 *local_70;
  byte local_49;
  ulong local_48;
  undefined4 local_3c;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEnabled_026a0ef0);
  if (((IVar3 & 1) == 0) ||
     (IVar3 = local_28,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_28,PTR_s_canEditRemarkForContact__026af258,local_38), (IVar3 & 1) == 0)) {
    local_3c = 1;
    goto LAB_0112e7d4;
  }
  uVar4 = local_38;
  FUN_0112bf98(local_38,&cf_m_nsUsrName);
  _objc_retainAutoreleasedReturnValue();
  local_48 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_length_0269cca0);
  if (uVar4 == 0) {
    uVar5 = local_38;
    FUN_0112bf98(local_38,&cf_m_nsUserName);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_48;
    local_48 = uVar5;
    (*(code *)PTR__objc_release_02578630)(uVar4);
  }
  uVar4 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_containsString__0269d0b0,&cf__chatroom);
  local_49 = (byte)uVar4;
  if (((uVar4 & 1) == 0) &&
     (uVar4 = local_38,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_isChatroom_0269e248),
     (uVar4 & 1) != 0)) {
    uVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isChatroom_0269e248);
    local_49 = (byte)uVar4;
  }
  local_71 = 0;
  bVar2 = false;
  if ((local_49 & 1) == 0) {
    puVar6 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_71 = 1;
    local_70 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar2 = puVar6 == (undefined1 *)((long)&MACH_HEADER.magic + 1);
  }
  if ((local_71 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_70);
  }
  if (bVar2) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_presentOfficialRemarkPageForCont_026af288,local_38);
    local_3c = 1;
  }
  else {
    IVar3 = local_28;
    _objc_getAssociatedObject(local_28,&DAT_028e3579);
    _objc_retainAutoreleasedReturnValue();
    local_80 = IVar3;
    if (IVar3 == 0) {
LAB_0112e4d4:
      uVar4 = local_38;
      (*(code *)PTR__objc_retain_02578638)();
      puVar6 = PTR_WCRefineHelper_026ce000;
      local_88 = uVar4;
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_editableTextForContact__026af290,local_38);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = local_88;
      local_b8 = PTR___NSConcreteStackBlock_02578660;
      local_b0 = 0xc2000000;
      local_ac = 0;
      local_a8 = FUN_0112e978;
      local_a0 = &DAT_025858a0;
      (*(code *)PTR__objc_retain_02578638)();
      local_98 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x4066800000000000,puVar6,PTR_s_presentPageSheetSingleLineInputW_026a46e0,&cf_O9eYl
                 ,&cf_WCRefine,IVar3,&local_b8);
      _objc_retainAutoreleasedReturnValue();
      local_90 = puVar6;
      (*(code *)PTR__objc_release_02578630)(IVar3);
      if (local_90 == (undefined *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_el>f_yJSO__);
        local_3c = 1;
      }
      else {
        _objc_setAssociatedObject(local_28,&DAT_028e3579,local_90,1);
        local_c0 = (undefined *)0x0;
        puVar6 = local_90;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_90,PTR_s_respondsToSelector__026ca818,PTR_s_didCloseBlock_026ab050);
        if (((ulong)puVar6 & 1) != 0) {
          puVar7 = local_90;
          (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_didCloseBlock_026ab050);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = local_c0;
          local_c0 = puVar7;
          (*(code *)PTR__objc_release_02578630)(puVar6);
        }
        puVar8 = local_90;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_90,PTR_s_respondsToSelector__026ca818,PTR_s_setDidCloseBlock__026aabf8);
        puVar1 = local_90;
        puVar7 = local_c0;
        puVar6 = PTR_s_setDidCloseBlock__026aabf8;
        if (((ulong)puVar8 & 1) != 0) {
          ppuVar9 = &local_e8;
          local_e8 = PTR___NSConcreteStackBlock_02578660;
          local_e0 = 0xc2000000;
          local_dc = 0;
          local_d8 = FUN_0112eb50;
          local_d0 = &DAT_025814c8;
          (*(code *)PTR__objc_retain_02578638)();
          local_c8 = puVar7;
          _objc_retainBlock();
          (*(code *)PTR__objc_msgSend_02578628)(puVar1,puVar6);
          (*(code *)PTR__objc_release_02578630)(ppuVar9);
          _objc_storeStrong(&local_c8,0);
        }
        _objc_storeStrong(&local_c0,0);
        local_3c = 0;
      }
      _objc_storeStrong(&local_90);
      _objc_storeStrong(&local_98,0);
      _objc_storeStrong(&local_88,0);
    }
    else {
      FUN_0112e7f8();
      if ((IVar3 & 1) == 0) {
        FUN_0112e938();
        goto LAB_0112e4d4;
      }
      local_3c = 1;
    }
    _objc_storeStrong(&local_80,0);
  }
  _objc_storeStrong(&local_48,0);
LAB_0112e7d4:
  _objc_storeStrong(&local_38,0);
  return;
}

