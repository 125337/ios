// wcr_presentScheduledActionsForTask: @ 01bf6318

/* Function Stack Size: 0x18 bytes */

void WCRefineMomentsDraftListViewController::wcr_presentScheduledActionsForTask_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  char *pcVar5;
  ID IVar6;
  cfstringStruct *local_d8;
  cfstringStruct *local_b8;
  cfstringStruct *local_a0;
  cfstringStruct *local_88;
  byte local_7a;
  bool local_79;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  char *local_68;
  char *local_60;
  bool local_51;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined4 local_3c;
  cfstringStruct *local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  pcVar3 = local_38;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)pcVar3 & 1) == 0) {
    local_3c = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setActionTask__026a53c8,local_38);
    pcVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_preview);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    local_51 = false;
    bVar1 = ((ulong)pcVar4 & 1) == 0;
    if (bVar1) {
      local_a0 = &::cf___;
    }
    else {
      local_a0 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_preview);
      _objc_retainAutoreleasedReturnValue();
      local_50 = local_a0;
    }
    local_51 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_a0;
    if ((local_51 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
    if (pcVar3 == (cfstringStruct *)0x0) {
      _objc_storeStrong(&local_48,&cf_gSWQ_);
    }
    pcVar5 = "WCUIActionSheet";
    _objc_getClass();
    local_60 = pcVar5;
    if (pcVar5 == (char *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf_elSb);
      local_3c = 1;
    }
    else {
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      pcVar3 = local_38;
      local_68 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_state);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      pcVar4 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
      local_79 = false;
      bVar1 = ((ulong)pcVar4 & 1) == 0;
      if (bVar1) {
        local_b8 = &::cf___;
      }
      else {
        local_b8 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_state);
        _objc_retainAutoreleasedReturnValue();
        local_78 = local_b8;
      }
      local_79 = !bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_70 = local_b8;
      if ((local_79 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_78);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      pcVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_enabled);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      local_7a = (byte)pcVar4;
      pcVar3 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_isEqualToString__0269ccc8,&cf_pending);
      if ((((ulong)pcVar3 & 1) != 0) ||
         (pcVar3 = local_70,
         (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_isEqualToString__0269ccc8,&cf_failed),
         ((ulong)pcVar3 & 1) != 0)) {
        if ((local_7a & 1) == 0) {
          pcVar3 = local_70;
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_isEqualToString__0269ccc8,&cf_failed)
          ;
          local_d8 = &cf_e_;
          if (((ulong)pcVar3 & 1) == 0) {
            local_d8 = &cf___NR;
          }
        }
        else {
          local_d8 = &cf_f_PNR;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_88 = local_d8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_68,PTR_s_addBtnTitle_target_sel__0269d278,local_d8,local_28,
                   PTR_s_wcr_onToggleScheduledTask_026c0b58);
        _objc_storeStrong(&local_88,0);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_addBtnTitle_target_sel__0269d278,&cf_O9ee,local_28,
                 PTR_s_wcr_onRescheduleScheduledTask_026c0b60);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_addDestructiveButtonTitle_target_0269f800,&cf_RdNR,local_28,
                 PTR_s_wcr_onDeleteScheduledTask_026c0b68);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
      pcVar5 = local_68;
      IVar6 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_showInView__0269d310);
      (*(code *)PTR__objc_release_02578630)(IVar6);
      _objc_storeStrong(&local_70,0);
      _objc_storeStrong(&local_68,0);
      local_3c = 0;
    }
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

