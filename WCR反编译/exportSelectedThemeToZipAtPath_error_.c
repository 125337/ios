// exportSelectedThemeToZipAtPath:error: @ 015d1a60

/* Function Stack Size: 0x20 bytes */

bool WCRefineWechatThemeStore::exportSelectedThemeToZipAtPath_error_
               (ID param_1,SEL param_2,ID param_3,ID *param_4)

{
  ID IVar1;
  undefined *puVar2;
  char *pcVar3;
  cfstringStruct *pcVar4;
  char *pcVar5;
  uint local_74;
  ID local_40;
  ID *local_38;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  IVar1 = local_20;
  local_38 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_configuredThemePath_026b0fa8);
  _objc_retainAutoreleasedReturnValue();
  local_40 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_length_0269cca0);
  if (IVar1 == 0) {
    if (local_38 != (ID *)0x0) {
      IVar1 = 4;
      FUN_015d140c(4,&cf_HQb);
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *local_38 = IVar1;
    }
    local_11 = 0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    pcVar3 = "WCRefineFrameZipCreator";
    _objc_getClass();
    pcVar4 = &cf_createZipFileAtPath_withContentsOfDirectory_;
    _NSSelectorFromString();
    local_74 = 0;
    if (pcVar3 != (char *)0x0) {
      pcVar5 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_respondsToSelector__026ca818,pcVar4);
      local_74 = 0;
      if (((ulong)pcVar5 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,pcVar4,local_30,local_40);
        local_74 = (uint)pcVar3;
      }
    }
    local_11 = (byte)local_74 & 1;
    if (((local_74 & 1) == 0) && (local_38 != (ID *)0x0)) {
      IVar1 = 5;
      FUN_015d140c(5,&cf_R__N);
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *local_38 = IVar1;
    }
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

