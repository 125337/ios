// onScheduledTaskCell: @ 0057d5a0

/* Function Stack Size: 0x18 bytes */

void WCRMomentsScheduledTaskListViewController::onScheduledTaskCell_
               (ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  char *pcVar5;
  ID IVar6;
  cfstringStruct *local_118;
  cfstringStruct *local_80;
  byte local_71;
  ulong local_70;
  char *local_68;
  char *local_60;
  ulong local_58;
  undefined4 local_50;
  ulong local_40;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  uVar2 = local_38;
  _objc_getAssociatedObject(local_38,&DAT_028cb5c1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_40 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  if ((uVar2 & 1) == 0) {
    local_50 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setActionTask__026a53c8,local_40);
    uVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_preview);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    FUN_0057a910();
    _objc_retainAutoreleasedReturnValue();
    local_58 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
    if (uVar2 == 0) {
      _objc_storeStrong(&local_58,&cf_gSWQ_);
    }
    pcVar5 = "WCUIActionSheet";
    _objc_getClass();
    local_60 = pcVar5;
    if (pcVar5 == (char *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf_elSb);
      local_50 = 1;
    }
    else {
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_initWithTitle__0269d2f8,local_58);
      uVar2 = local_40;
      local_68 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_state);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      FUN_0057a910();
      _objc_retainAutoreleasedReturnValue();
      local_70 = uVar4;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_enabled);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar2);
      local_71 = (byte)uVar4;
      uVar2 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_isEqualToString__0269ccc8,&cf_pending);
      if (((uVar2 & 1) != 0) ||
         (uVar2 = local_70,
         (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_isEqualToString__0269ccc8,&cf_failed),
         (uVar2 & 1) != 0)) {
        if ((local_71 & 1) == 0) {
          uVar2 = local_70;
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_isEqualToString__0269ccc8,&cf_failed)
          ;
          local_118 = &cf_e_;
          if ((uVar2 & 1) == 0) {
            local_118 = &cf___NR;
          }
        }
        else {
          local_118 = &cf_f_PNR;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_80 = local_118;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_68,PTR_s_addBtnTitle_target_sel__0269d278,local_118,local_28,
                   PTR_s_onToggleScheduledTask_026a53d0);
        _objc_storeStrong(&local_80,0);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_addBtnTitle_target_sel__0269d278,&cf_O9ee,local_28,
                 PTR_s_onRescheduleScheduledTask_026a53d8);
      pcVar5 = local_68;
      uVar2 = local_40;
      FUN_0057aaf8();
      pcVar1 = &cf_O9e_s;
      if ((uVar2 & 1) == 0) {
        pcVar1 = &cf__sS_;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar5,PTR_s_addBtnTitle_target_sel__0269d278,pcVar1,local_28,
                 PTR_s_onLoopScheduledTask_026a53e0);
      uVar2 = local_40;
      FUN_0057aaf8();
      if ((uVar2 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_68,PTR_s_addBtnTitle_target_sel__0269d278,&cf_Sm_s,local_28,
                   PTR_s_onLoopCancel_026a53e8);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_addDestructiveButtonTitle_target_0269f800,&cf_RdNR,local_28,
                 PTR_s_onDeleteScheduledTask_026a53f0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
      pcVar5 = local_68;
      IVar6 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_showInView__0269d310);
      (*(code *)PTR__objc_release_02578630)(IVar6);
      _objc_storeStrong(&local_70);
      _objc_storeStrong(&local_68,0);
      local_50 = 0;
    }
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

