// handleCreateMenuImageFolder: @ 01b85f88

/* Function Stack Size: 0x18 bytes */

void WCRefineMenuBeautifyViewController::handleCreateMenuImageFolder_
               (ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  char *pcVar5;
  cfstringStruct *local_c0;
  bool local_79;
  cfstringStruct *local_78;
  char *local_70;
  char *local_68;
  undefined8 local_60;
  cfstringStruct *local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_text_0269ce68);
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar1;
  if ((lVar1 != 0) &&
     ((*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0), lVar1 != 0)) {
    uVar2 = 9;
    _NSSearchPathForDirectoriesInDomains(9,1,1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_stringByAppendingPathComponent__026cab30,&::cf_W);
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR_s_stringByAppendingPathComponent__026cab30,local_30);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    local_48 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_58 = (cfstringStruct *)0x0;
    local_60 = 0;
    local_50 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_createDirectoryAtPath_withInterm_0269e230,local_48,1,0,&local_60);
    _objc_storeStrong(&local_58,local_60);
    if (((ulong)puVar4 & 1) == 0) {
      pcVar5 = "WCUIAlertView";
      _objc_getClass();
      local_68 = pcVar5;
      if (pcVar5 != (char *)0x0) {
        _objc_alloc();
        local_79 = local_58 == (cfstringStruct *)0x0;
        if (local_79) {
          local_c0 = &cf__gw;
        }
        else {
          local_c0 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_localizedDescription_0269ced0);
          _objc_retainAutoreleasedReturnValue();
          local_78 = local_c0;
        }
        local_79 = !local_79;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar5,PTR_s_initWithTitle_message__0269d260,&cf_R_1Y_,local_c0);
        local_70 = pcVar5;
        if (local_79) {
          (*(code *)PTR__objc_release_02578630)(local_78);
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_70,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_18);
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_show_0269d280);
        _objc_storeStrong(&local_70,0);
      }
    }
    else {
      puVar4 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sendSettingsChangedNotification_026b61d8)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
    }
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_40,0);
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

