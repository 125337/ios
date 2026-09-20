// restoreWCRefineConfigFromImportedFileAtPath:errorMessage: @ 00fad5b4

/* Function Stack Size: 0x20 bytes */

bool WCRefineHelper::restoreWCRefineConfigFromImportedFileAtPath_errorMessage_
               (ID param_1,SEL param_2,ID param_3,ID *param_4)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  ID IVar4;
  cfstringStruct *local_98;
  cfstringStruct *local_68;
  undefined1 local_59;
  cfstringStruct *local_58;
  undefined *local_50;
  cfstringStruct *local_48;
  undefined4 local_3c;
  ID *local_38;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  pcVar1 = local_30;
  local_38 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    if (local_38 != (ID *)0x0) {
      _objc_retainAutorelease();
      *local_38 = (ID)&cf_YNeNNX__W;
    }
    local_11 = 0;
    local_3c = 1;
  }
  else {
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_pathExtension_0269e090);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_98 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_98 = &::cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_98;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_48;
    local_50 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isEqualToString__0269ccc8,&cf_zip);
    if (((ulong)pcVar1 & 1) == 0) {
      pcVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_lastPathComponent_026ca780);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = pcVar1;
      FUN_00fae07c();
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      if (((ulong)pcVar2 & 1) == 0) {
        if (local_38 != (ID *)0x0) {
          _objc_retainAutorelease();
          *local_38 = (ID)&::cf_b;
        }
        local_11 = 0;
        local_3c = 1;
      }
      else {
        IVar4 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_applyWCRefineConfigPlistAtPath_e_026acf78,local_30,local_38);
        local_11 = (byte)IVar4 & 1;
        local_3c = 1;
      }
    }
    else {
      _NSTemporaryDirectory();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      _arc4random_uniform(0xffffffff);
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_stringWithFormat__0269cca8,&cf_WCRefineConfigRestore__u);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_stringByAppendingPathComponent__026cab30);
      _objc_retainAutoreleasedReturnValue();
      local_58 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_removeItemAtPath_error__0269f910,local_58,0);
      pcVar1 = local_30;
      FUN_00fadab8(local_30,local_58);
      local_59 = SUB81(pcVar1,0);
      if (((ulong)pcVar1 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_removeItemAtPath_error__0269f910,local_58,0);
        if (local_38 != (ID *)0x0) {
          _objc_retainAutorelease();
          *local_38 = (ID)&cf_SeN1Y_;
        }
        local_11 = 0;
        local_3c = 1;
      }
      else {
        pcVar1 = local_58;
        FUN_00fadde8();
        _objc_retainAutoreleasedReturnValue();
        local_68 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
        if (pcVar1 == (cfstringStruct *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_50,PTR_s_removeItemAtPath_error__0269f910,local_58,0);
          if (local_38 != (ID *)0x0) {
            _objc_retainAutorelease();
            *local_38 = (ID)&cf_YNeN_N_g_b0R;
          }
          local_11 = 0;
        }
        else {
          IVar4 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_20,PTR_s_applyWCRefineConfigPlistAtPath_e_026acf78,local_68,local_38);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_50,PTR_s_removeItemAtPath_error__0269f910,local_58,0);
          local_11 = (byte)IVar4 & 1;
        }
        local_3c = 1;
        _objc_storeStrong(&local_68,0);
      }
      _objc_storeStrong(&local_58,0);
    }
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

