// wcRefineSearchNavigationCellWithTitle:vcClass:sectionTitle:keyword: @ 014cbac4

/* Function Stack Size: 0x30 bytes */

ID WCRefineSearchManager::wcRefineSearchNavigationCellWithTitle_vcClass_sectionTitle_keyword_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6)

{
  char *pcVar1;
  long lVar2;
  char *pcVar3;
  undefined *puVar4;
  cfstringStruct *local_e0;
  char *local_a8;
  undefined4 local_9c;
  char *local_98;
  undefined8 local_90;
  cfstringStruct *local_88;
  long local_80;
  long local_78;
  SEL local_70;
  ID local_68;
  char *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  long local_40;
  long local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_78 = 0;
  local_70 = param_2;
  local_68 = param_1;
  _objc_storeStrong(&local_78,param_3);
  local_80 = 0;
  _objc_storeStrong(&local_80,param_4);
  local_88 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_88,param_5);
  local_90 = 0;
  _objc_storeStrong(&local_90,param_6);
  pcVar1 = "WCTableViewNormalCellManager";
  _objc_getClass();
  local_98 = pcVar1;
  if (((pcVar1 == (char *)0x0) ||
      (lVar2 = local_78, (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0),
      lVar2 == 0)) ||
     (lVar2 = local_80, (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0),
     lVar2 == 0)) {
    local_60 = (char *)0x0;
    local_9c = 1;
  }
  else {
    pcVar1 = local_98;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_98,PTR_s_normalCellForSel_target_title_ri_026acde8,
               PTR_s_handleCustomUIPluginCellTap__026af6a8,local_68,local_78,&cf_eQn_,1);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_98;
    local_a8 = pcVar1;
    FUN_014cbe50(local_98,"WCRSearchResultCellManager");
    if (((local_a8 != (char *)0x0) && (pcVar3 != (char *)0x0)) &&
       (pcVar1 = local_a8, _object_getClass(), pcVar1 == local_98)) {
      _object_setClass(0,local_a8,pcVar3);
    }
    _objc_setAssociatedObject(local_a8,&DAT_028e3690,local_90,3);
    pcVar3 = local_a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_a8,PTR_s_respondsToSelector__026ca818,PTR_s_setUserInfo__026a17c8);
    pcVar1 = local_a8;
    if (((ulong)pcVar3 & 1) != 0) {
      local_58 = &cf_vcClass;
      local_40 = local_80;
      local_50 = &cf_targetTitle;
      local_38 = local_78;
      local_48 = &cf_sectionTitle;
      if (local_88 == (cfstringStruct *)0x0) {
        local_e0 = &::cf___;
      }
      else {
        local_e0 = local_88;
      }
      local_30 = local_e0;
      puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_40,&local_58,3);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_setValue_forKey__0269d300,puVar4,&cf_userInfo);
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
    _objc_setAssociatedObject(local_a8,"vcClass",local_80);
    _objc_setAssociatedObject(local_a8,"targetTitle",local_78,3);
    _objc_setAssociatedObject(local_a8,"sectionTitle",local_88,3);
    pcVar1 = local_a8;
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = pcVar1;
    local_9c = 1;
    _objc_storeStrong(&local_a8,0);
  }
  _objc_storeStrong(&local_90);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_78,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_60;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

