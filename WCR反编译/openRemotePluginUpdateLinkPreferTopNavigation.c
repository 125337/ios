// openRemotePluginUpdateLinkPreferTopNavigation @ 00fbf470

/* Function Stack Size: 0x10 bytes */

void WCRefineHelper::openRemotePluginUpdateLinkPreferTopNavigation(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  char *pcVar5;
  char *local_68;
  char *local_60;
  ID local_58;
  ID local_50;
  byte local_41;
  undefined *local_40;
  undefined *local_38;
  uint local_2c;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar2 = PTR_WCRefineRemoteUpdateManager_026ce600;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineRemoteUpdateManager_026ce600,PTR_s_sharedManager_0269db78);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (puVar2 == (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_showModernToast__0269ce78,&cf_fec_gMn_);
    local_2c = 1;
    goto LAB_00fbf860;
  }
  puVar2 = PTR__OBJC_CLASS___NSURL_026ce328;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_URLWithString__026a16d8,local_28);
  _objc_retainAutoreleasedReturnValue();
  local_41 = 0;
  bVar1 = true;
  local_38 = puVar2;
  if (puVar2 != (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_scheme_026a1dd8);
    _objc_retainAutoreleasedReturnValue();
    local_41 = 1;
    local_40 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = puVar2 == (undefined *)0x0;
  }
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_showModernToast__0269ce78,&::cf_elSb);
    local_2c = 1;
  }
  else {
    IVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_findTopVC_0269d290);
    _objc_retainAutoreleasedReturnValue();
    local_50 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = "MMWebViewController";
    local_58 = IVar4;
    _objc_getClass();
    local_60 = pcVar5;
    if ((local_58 == 0) || (pcVar5 == (char *)0x0)) {
LAB_00fbf73c:
      puVar2 = PTR__OBJC_CLASS___UIApplication_026ce010;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if (((ulong)puVar3 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_showModernToast__0269ce78,&::cf_elSb);
      }
      else {
        puVar2 = PTR__OBJC_CLASS___UIApplication_026ce010;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
      local_2c = 0;
    }
    else {
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_68 = pcVar5;
      if (pcVar5 != (char *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_PushViewController_animated__0269cd40,pcVar5,1);
      }
      local_2c = (uint)(pcVar5 != (char *)0x0);
      _objc_storeStrong(&local_68,0);
      if (local_2c == 0) goto LAB_00fbf73c;
    }
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38,0);
LAB_00fbf860:
  _objc_storeStrong(&local_28,0);
  return;
}

