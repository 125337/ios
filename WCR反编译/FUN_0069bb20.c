// FUN_0069bb20 @ 0069bb20

void FUN_0069bb20(undefined8 param_1)

{
  undefined *puVar1;
  char *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  char *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  char *local_38;
  undefined8 local_30;
  cfstringStruct *local_28;
  undefined *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  pcVar2 = "WCTableViewCellManager";
  _objc_getClass();
  local_38 = pcVar2;
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "WCTableViewNormalCellManager";
    _objc_getClass();
    local_38 = pcVar2;
  }
  pcVar3 = &cf_more_plugin_hub;
  _WCRPluginIconResolvedTitle(&cf_more_plugin_hub,&cf_cN);
  _objc_retainAutoreleasedReturnValue();
  local_40 = pcVar3;
  FUN_0069cce0();
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = &cf_WCRefine_openBuiltInPluginHub;
  local_48 = pcVar3;
  _NSSelectorFromString();
  local_58 = (char *)0x0;
  pcVar3 = &cf_normalCellForSel_target_leftImage_title_WithDisclosureIndicator_;
  local_50 = pcVar4;
  _NSSelectorFromString();
  pcVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_respondsToSelector__026ca818,pcVar3);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar5 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,pcVar3,local_50,local_30,local_48,local_40,1);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_58;
    local_58 = pcVar5;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  if (local_58 == (char *)0x0) {
    pcVar3 = &cf_normalCellForSel_target_leftImage_title_badge_;
    _NSSelectorFromString();
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_respondsToSelector__026ca818,pcVar3);
    if (((ulong)pcVar2 & 1) != 0) {
      pcVar5 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,pcVar3,local_50,local_30,local_48,local_40,0);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_58;
      local_58 = pcVar5;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
  }
  if (local_58 == (char *)0x0) {
    pcVar3 = &cf_normalCellForSel_target_leftImage_title_pathKey_;
    _NSSelectorFromString();
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_respondsToSelector__026ca818,pcVar3);
    if (((ulong)pcVar2 & 1) != 0) {
      pcVar5 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,pcVar3,local_50,local_30,local_48,local_40,0);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_58;
      local_58 = pcVar5;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
  }
  if (local_58 == (char *)0x0) {
    pcVar3 = &cf_normalCellForSel_target_title_rightValue_;
    _NSSelectorFromString();
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_respondsToSelector__026ca818,pcVar3);
    if (((ulong)pcVar2 & 1) != 0) {
      pcVar5 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,pcVar3,local_50,local_30,local_40,0);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_58;
      local_58 = pcVar5;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
  }
  if ((local_58 != (char *)0x0) &&
     (pcVar5 = local_58,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_setUserInfo__026a17c8),
     pcVar2 = local_58, puVar1 = PTR_s_setUserInfo__026a17c8, ((ulong)pcVar5 & 1) != 0)) {
    local_28 = &cf_WCRefineBuiltInPluginHub;
    puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_20 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_20,&local_28,1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,puVar1);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(puVar6);
  }
  pcVar2 = local_58;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_18) {
    _objc_autoreleaseReturnValue(0,pcVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

