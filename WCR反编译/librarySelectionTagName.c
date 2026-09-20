// librarySelectionTagName @ 01840db4

/* Function Stack Size: 0x10 bytes */

ID WCRefineAvatarFrameSpecialUserDetailViewController::librarySelectionTagName
             (ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  ID IVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_d0;
  cfstringStruct *local_58;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  IVar1 = param_1;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_username_026a2238);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_displayNameForUsername__026ac938);
  _objc_retainAutoreleasedReturnValue();
  local_58 = (cfstringStruct *)param_1;
  if ((cfstringStruct *)param_1 == (cfstringStruct *)0x0) {
    local_58 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_58;
  (*(code *)PTR__objc_release_02578630)(param_1);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  puVar2 = PTR_WCRefineAvatarFramePageOverlayHelper_026cefb0;
  IVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_username_026a2238);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isReservedSpecialKey__026b6610);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if (((ulong)puVar2 & 1) != 0) {
    IVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_username_026a2238);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    if ((IVar3 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_bu;
      goto LAB_018411a8;
    }
    IVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_username_026a2238);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    if ((IVar3 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_6e_;
      goto LAB_018411a8;
    }
    IVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_username_026a2238);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    if ((IVar3 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_US;
      goto LAB_018411a8;
    }
  }
  pcVar4 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (pcVar4 < (cfstringStruct *)0x5) {
    pcVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_d0 = &cf_yrk;
    }
    else {
      local_d0 = local_30;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_d0;
  }
  else {
    pcVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_substringToIndex__0269d6c0,4);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_18 = pcVar5;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
  }
LAB_018411a8:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

