// FUN_0188124c @ 0188124c

void FUN_0188124c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  ulong uVar5;
  undefined *local_a8;
  cfstringStruct *local_98;
  long local_78;
  undefined8 local_70;
  byte local_61;
  undefined *local_60;
  byte local_51;
  undefined *local_50;
  undefined *local_48;
  cfstringStruct *local_40;
  undefined8 local_38;
  undefined4 local_2c;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = param_1;
  local_18 = param_1;
  if (*(long *)(param_1 + 0x20) == 0) {
    lVar1 = *(long *)(param_1 + 0x38);
    (*(code *)PTR__objc_msgSend_02578628)
              (lVar1,PTR_s_objectForKeyedSubscript__0269d098,
               *(undefined8 *)PTR__UIImagePickerControllerOriginalImage_02578188);
    _objc_retainAutoreleasedReturnValue();
    local_28 = lVar1;
    if (lVar1 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_VGrS1Y_);
      local_2c = 1;
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_currentFolderPathEnsureExists_026b6ea8);
      _objc_retainAutoreleasedReturnValue();
      local_38 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x28),PTR_s_deleteOldMediaInFolder_forType__026b6f78,
                 uVar2,*(undefined8 *)(param_1 + 0x30));
      pcVar3 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_98 = pcVar4;
      if (pcVar4 == (cfstringStruct *)0x0) {
        local_98 = &cf__;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_40 = local_98;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      uVar5 = *(ulong *)(param_1 + 0x30);
      (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isEqualToString__0269ccc8,&cf_night);
      local_51 = 0;
      local_61 = 0;
      local_a8 = PTR__OBJC_CLASS___NSString_026cdfe8;
      if ((uVar5 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf____png);
        _objc_retainAutoreleasedReturnValue();
        local_61 = 1;
        local_60 = local_a8;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                   &cf____dark_png);
        _objc_retainAutoreleasedReturnValue();
        local_51 = 1;
        local_50 = local_a8;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_48 = local_a8;
      if ((local_61 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_60);
      }
      if ((local_51 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_50);
      }
      uVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_stringByAppendingPathComponent__026cab30,local_48);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_28;
      local_70 = uVar2;
      _UIImagePNGRepresentation();
      _objc_retainAutoreleasedReturnValue();
      local_78 = lVar1;
      (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
      if (lVar1 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_78,PTR_s_writeToFile_atomically__0269f928,local_70,1);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x28),PTR_s_sendSettingsChangedNotification_026b61d8);
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x28),PTR_s_reloadTableData_0269dca8);
      _objc_storeStrong(&local_78);
      _objc_storeStrong(&local_70,0);
      _objc_storeStrong(&local_48,0);
      _objc_storeStrong(&local_40,0);
      _objc_storeStrong(&local_38,0);
      local_2c = 0;
    }
    _objc_storeStrong(&local_28,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x28),PTR_s_copyPickedURL_type__026b6f80,
               *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x30));
  }
  return;
}

