// saveFloatingBackgroundImage:type: @ 019c6230

/* Function Stack Size: 0x20 bytes */

void WCRefineFloatingTabBarSettingsViewController::saveFloatingBackgroundImage_type_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ID IVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  ulong local_108;
  undefined *local_f0;
  cfstringStruct *local_d0;
  ulong local_a0;
  ulong local_98;
  ID local_90;
  byte local_81;
  undefined *local_80;
  byte local_71;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  cfstringStruct *local_58;
  ID local_50;
  undefined4 local_44;
  ulong local_40;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  uVar2 = local_38;
  puVar1 = PTR__OBJC_CLASS___UIImage_026cdfd0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_44 = 1;
  }
  else {
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentFloatingBackgroundFolderP_026bacc0);
    _objc_retainAutoreleasedReturnValue();
    local_50 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_deleteOldFloatingBackgroundMedia_026bad08,IVar3,local_40);
    pcVar4 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_d0 = pcVar5;
    if (pcVar5 == (cfstringStruct *)0x0) {
      local_d0 = &::cf__;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = local_d0;
    (*(code *)PTR__objc_release_02578630)(pcVar5);
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_floatingBackgroundLayoutFileKey_026bad10);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_stringWithFormat__0269cca8,&cf______);
    _objc_retainAutoreleasedReturnValue();
    local_60 = puVar1;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    uVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,&cf_night);
    local_71 = 0;
    local_81 = 0;
    local_f0 = PTR__OBJC_CLASS___NSString_026cdfe8;
    if ((uVar2 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf____png);
      _objc_retainAutoreleasedReturnValue();
      local_81 = 1;
      local_80 = local_f0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                 &cf____dark_png);
      _objc_retainAutoreleasedReturnValue();
      local_71 = 1;
      local_70 = local_f0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = local_f0;
    if ((local_81 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_80);
    }
    if ((local_71 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
    IVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_stringByAppendingPathComponent__026cab30,local_68);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_38;
    local_90 = IVar3;
    _UIImagePNGRepresentation();
    _objc_retainAutoreleasedReturnValue();
    local_108 = uVar2;
    if (uVar2 == 0) {
      local_a0 = local_38;
      _UIImageJPEGRepresentation(DAT_02323e70);
      _objc_retainAutoreleasedReturnValue();
      local_108 = local_a0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_98 = local_108;
    if (uVar2 == 0) {
      (*(code *)PTR__objc_release_02578630)(local_a0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_98;
    (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_length_0269cca0);
    if ((uVar2 == 0) ||
       (uVar2 = local_98,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_98,PTR_s_writeToFile_atomically__0269f928,local_90,1), (uVar2 & 1) == 0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_OX_1Y_);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_floatingNotifyInjected_026babd0);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reloadTableData_0269dca8);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_of_NO);
    }
    _objc_storeStrong(&local_98);
    _objc_storeStrong(&local_90,0);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
    local_44 = 0;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

