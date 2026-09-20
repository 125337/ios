// FUN_00548284 @ 00548284

void FUN_00548284(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  char *pcVar4;
  char *local_80;
  char *local_78;
  undefined *local_70 [4];
  ulong local_50;
  undefined4 local_48;
  ulong local_38;
  undefined8 local_30;
  ulong local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  uVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20);
  uVar2 = local_38;
  if (uVar1 == 1) {
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    FUN_00558018();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if ((uVar2 & 1) == 0) {
      local_50 = 0;
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_valueForKey__0269d128,&cf_dataItem);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_50;
      local_50 = uVar1;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      if (local_50 == 0) {
        uVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_valueForKey__0269d128,&cf_m_dataItem);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_50;
        local_50 = uVar1;
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
      if (local_50 == 0) {
        uVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_valueForKey__0269d128,&cf__dataItem);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_50;
        local_50 = uVar1;
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
      if (local_50 == 0) {
        local_48 = 1;
      }
      else {
        puVar3 = PTR__OBJC_CLASS___UIImpactFeedbackGenerator_026cdff0;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_initWithStyle__026ca710,0);
        local_70[0] = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_impactOccurred_026ca6a0);
        _objc_storeStrong(local_70,0);
        _objc_setAssociatedObject(local_28,&DAT_028cb444,local_50,1);
        pcVar4 = "WCUIAlertView";
        _objc_getClass();
        local_78 = pcVar4;
        if (pcVar4 == (char *)0x0) {
          _WCRefineApplyManualFakeEngagementToDataItem(local_50,0xffffffffffffffff);
          DAT_028cb369 = 1;
          uVar2 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_initData_0269ec58);
          if ((uVar2 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_28,PTR_s_performSelector__026ca7b8,PTR_s_initData_0269ec58);
          }
          uVar2 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_initTableHeaderView_026a4fc0)
          ;
          if ((uVar2 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_28,PTR_s_performSelector__026ca7b8,PTR_s_initTableHeaderView_026a4fc0);
          }
          uVar2 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_reloadTableView_0269dcb0);
          if ((uVar2 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reloadTableView_0269dcb0);
          }
          DAT_028cb369 = 0;
          local_48 = 1;
        }
        else {
          _objc_alloc();
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar4,PTR_s_initWithTitle_message__0269d260,&cf_WCRefine,&cf_SUSrn_p_peNpe);
          local_80 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar4,PTR_s_addBtnTitle_target_sel__0269d278,&cf_Sm,local_28,
                     PTR_s_WCRefine_commentDetailCancelFake_026a4e50);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_80,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_28,
                     PTR_s_WCRefine_commentDetailConfirmFak_026a4e58);
          pcVar4 = local_80;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_80,PTR_s_respondsToSelector__026ca818,
                     PTR_s_showTextFieldWithMaxLen__0269e5e0);
          if (((ulong)pcVar4 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_80,PTR_s_showTextFieldWithMaxLen__0269e5e0,0x14);
          }
          pcVar4 = local_80;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_80,PTR_s_respondsToSelector__026ca818,
                     PTR_s_setTextFieldDefaultText__0269fd98);
          if (((ulong)pcVar4 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_80,PTR_s_setTextFieldDefaultText__0269fd98,&cf___);
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_show_0269d280);
          _objc_storeStrong(&local_80,0);
          local_48 = 0;
        }
      }
      _objc_storeStrong(&local_50,0);
    }
    else {
      local_48 = 1;
    }
  }
  else {
    local_48 = 1;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

