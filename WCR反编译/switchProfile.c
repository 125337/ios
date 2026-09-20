// switchProfile @ 01e19f90

/* Function Stack Size: 0x10 bytes */

void WCRefineSuperFloatProfilesViewController::switchProfile(ID param_1,SEL param_2)

{
  long lVar1;
  cfstringStruct *pcVar2;
  char *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  ID IVar6;
  cfstringStruct *local_80;
  undefined *local_58;
  cfstringStruct *local_50;
  long local_48;
  char *local_40;
  undefined4 local_34;
  char *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  pcVar2 = (cfstringStruct *)PTR_WCRSuperFloatProfileStore_026cee48;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_normalizedProfiles_026b1878);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = "WCUIActionSheet";
  local_28 = pcVar2;
  _objc_getClass();
  local_30 = pcVar3;
  if (pcVar3 == (char *)0x0) {
    local_34 = 1;
  }
  else {
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_40 = pcVar3;
    for (local_48 = 0; lVar1 = local_48, pcVar2 = local_28,
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_count_0269cfe0), lVar1 < (long)pcVar2;
        local_48 = local_48 + 1) {
      pcVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_objectAtIndexedSubscript__0269cc78,local_48);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_80 = pcVar4;
      if (pcVar4 == (cfstringStruct *)0x0) {
        local_80 = &cf__g_TT;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_50 = local_80;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                 &cf_wcr_sf_switch__ld);
      _objc_retainAutoreleasedReturnValue();
      local_58 = puVar5;
      _NSSelectorFromString();
      IVar6 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_respondsToSelector__026ca818,puVar5);
      if ((IVar6 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
        _class_addMethod();
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_addBtnTitle_target_sel__0269d278,local_50,local_18,puVar5);
      _objc_storeStrong(&local_58);
      _objc_storeStrong(&local_50,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
    pcVar3 = local_40;
    IVar6 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_showInView__0269d310);
    (*(code *)PTR__objc_release_02578630)(IVar6);
    _objc_storeStrong(&local_40,0);
    local_34 = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

