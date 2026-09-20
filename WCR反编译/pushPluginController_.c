// pushPluginController: @ 017906c4

/* Function Stack Size: 0x18 bytes */

void WCPluginsViewControllerBehavior::pushPluginController_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *local_110;
  cfstringStruct *local_f0;
  cfstringStruct *local_d8;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68 [4];
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  pcVar1 = local_38;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = pcVar1;
  pcVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_valueForKey__0269d128,&cf_userInfo);
  _objc_retainAutoreleasedReturnValue();
  local_48 = pcVar1;
  if (pcVar1 != (cfstringStruct *)0x0) {
    _objc_storeStrong(&local_40,pcVar1);
  }
  _objc_storeStrong(&local_48,0);
  (*(code *)PTR__objc_retain_02578638)();
  local_68[0] = &::cf___;
  (*(code *)PTR__objc_retain_02578638)();
  local_70 = &::cf___;
  (*(code *)PTR__objc_retain_02578638)();
  local_78 = &::cf___;
  pcVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_valueForKey__0269d128,&cf_controller);
  _objc_retainAutoreleasedReturnValue();
  local_d8 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_d8 = &::cf___;
  }
  _objc_storeStrong(local_68,local_d8);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_valueForKey__0269d128,&cf_title);
  _objc_retainAutoreleasedReturnValue();
  local_f0 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_f0 = &::cf___;
  }
  _objc_storeStrong(&local_70,local_f0);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_identifier_026a4a88);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_valueForKey__0269d128,&cf_identifier);
    _objc_retainAutoreleasedReturnValue();
    local_110 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_110 = &::cf___;
    }
    _objc_storeStrong(&local_78,local_110);
    (*(code *)PTR__objc_release_02578630)(pcVar1);
  }
  pcVar2 = local_68[0];
  _NSClassFromString();
  local_90 = (cfstringStruct *)0x0;
  local_88 = pcVar2;
  _objc_alloc();
  local_98 = pcVar2;
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_init_026ca6a8);
  pcVar1 = local_90;
  local_90 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  _objc_storeStrong(&local_98,0);
  pcVar1 = local_90;
  puVar3 = PTR__OBJC_CLASS___UIViewController_026cdf80;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
  if (((ulong)pcVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_cNn_uNX__W);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pushController__026b46d8,local_90);
  }
  _objc_storeStrong(&local_90);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(local_68,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

