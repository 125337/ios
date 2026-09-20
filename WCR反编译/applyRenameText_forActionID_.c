// applyRenameText:forActionID: @ 01cca66c

/* Function Stack Size: 0x20 bytes */

void WCRefineProfileCardActionConfigViewController::applyRenameText_forActionID_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  long lVar2;
  ID IVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_80;
  cfstringStruct *local_60;
  undefined *local_50;
  cfstringStruct *local_48;
  ID local_40;
  undefined4 local_34;
  long local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  lVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    local_34 = 1;
  }
  else {
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_defaultTitleForActionID__026c3610,local_30)
    ;
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = local_28;
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_40 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
    local_80 = local_28;
    bVar1 = ((ulong)pcVar5 & 1) == 0;
    if (bVar1) {
      local_80 = &::cf___;
    }
    else {
      local_50 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                 PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_80,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
      _objc_retainAutoreleasedReturnValue();
      local_60 = local_80;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_80;
    if (!bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_60);
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    pcVar5 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
    if ((pcVar5 == (cfstringStruct *)0x0) ||
       (pcVar5 = local_48,
       (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isEqualToString__0269ccc8,local_40),
       ((ulong)pcVar5 & 1) != 0)) {
      IVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_customTitleMap_026c35b0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_persistActionConfig_026c35f8);
      IVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_tableView_0269e378);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__b_YTy);
      local_34 = 1;
    }
    else {
      IVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_customTitleMap_026c35b0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_persistActionConfig_026c35f8);
      IVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_tableView_0269e378);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf___TT);
      local_34 = 0;
    }
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

