// saveContactsSectionPackAvatarImage:dark: @ 01b57894

/* Function Stack Size: 0x1c bytes */

void WCRefineLayoutFunctionViewController::saveContactsSectionPackAvatarImage_dark_
               (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  cfstringStruct *pcVar1;
  ulong *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *local_78;
  ulong local_68;
  ulong *local_60;
  byte local_51;
  ulong *local_50;
  byte local_41;
  ulong *local_40;
  ulong *local_38;
  undefined4 local_30;
  byte local_29;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_78 = &local_28;
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(local_78,param_3);
  local_29 = (byte)param_4;
  if (local_28 == 0) {
    local_30 = 1;
  }
  else {
    local_41 = 0;
    local_51 = 0;
    if ((param_4 & 1) == 0) {
      FUN_01b571fc();
      _objc_retainAutoreleasedReturnValue();
      local_51 = 1;
      local_50 = local_78;
    }
    else {
      FUN_01b57344();
      _objc_retainAutoreleasedReturnValue();
      local_41 = 1;
      local_40 = local_78;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = local_78;
    if ((local_51 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    if ((local_41 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_40);
    }
    puVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_stringByDeletingLastPathComponen_0269fb90);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    local_60 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    uVar4 = local_28;
    _UIImagePNGRepresentation();
    _objc_retainAutoreleasedReturnValue();
    local_68 = uVar4;
    if (uVar4 == 0) {
      uVar5 = local_28;
      _UIImageJPEGRepresentation(0x3fee666666666666);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = local_68;
      local_68 = uVar5;
      (*(code *)PTR__objc_release_02578630)(uVar4);
    }
    uVar4 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_68,PTR_s_writeToFile_atomically__0269f928,local_38,1);
    if ((uVar4 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_4YPOX_1Y_);
      local_30 = 1;
    }
    else {
      puVar3 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sendSettingsChangedNotification_026b61d8)
      ;
      pcVar1 = &cf_Y6e_4YP_fe;
      if ((local_29 & 1) == 0) {
        pcVar1 = &cf_6e_4YP_fe;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar1);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
      local_30 = 0;
    }
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

