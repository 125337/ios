// FUN_0027fa38 @ 0027fa38

void FUN_0027fa38(char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  cfstringStruct *pcVar2;
  char *pcVar3;
  char *local_128;
  char *local_e8;
  char *local_90;
  undefined *local_88;
  undefined4 local_7c;
  char *local_78;
  char *local_70;
  cfstringStruct *local_68;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  char *local_30;
  char *local_28;
  
  local_38 = 0;
  local_30 = param_1;
  _objc_storeStrong(&local_38);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  uVar1 = local_40;
  FUN_002800d4();
  local_4c = (undefined4)uVar1;
  pcVar2 = &cf_mediaWrapWithMediaInfo_scene_codingFormatType_fileFormat_;
  _NSSelectorFromString();
  pcVar3 = local_30;
  local_68 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_respondsToSelector__026ca818,pcVar2);
  if (((ulong)pcVar3 & 1) == 0) {
    local_88 = PTR_s_mediaWrapWithMediaInfo_scene_cod_026a16c0;
    pcVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_respondsToSelector__026ca818,
               PTR_s_mediaWrapWithMediaInfo_scene_cod_026a16c0);
    if (((ulong)pcVar3 & 1) == 0) {
      local_28 = (char *)0x0;
      local_7c = 1;
    }
    else {
      pcVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_methodSignatureForSelector__0269e190,local_88);
      _objc_retainAutoreleasedReturnValue();
      local_90 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_numberOfArguments_0269f8b8);
      local_128 = local_90;
      if (pcVar3 < &MACH_HEADER.cputype || pcVar3 + -4 == (char *)0x0) {
        local_128 = "";
      }
      else {
        _objc_retainAutorelease(pcVar3 + -4);
        (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_getArgumentTypeAtIndex__026a16b8,4);
      }
      if (*local_128 == '@') {
        pcVar3 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,local_88,local_38,0,local_40);
        _objc_retainAutoreleasedReturnValue();
        local_28 = pcVar3;
      }
      else {
        pcVar3 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,local_88,local_38,0,local_4c);
        _objc_retainAutoreleasedReturnValue();
        local_28 = pcVar3;
      }
      local_7c = 1;
      _objc_storeStrong(&local_90,0);
    }
  }
  else {
    pcVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_methodSignatureForSelector__0269e190,local_68);
    _objc_retainAutoreleasedReturnValue();
    local_70 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_numberOfArguments_0269f8b8);
    local_e8 = local_70;
    if (pcVar3 < &MACH_HEADER.cputype || pcVar3 + -4 == (char *)0x0) {
      local_e8 = "";
    }
    else {
      _objc_retainAutorelease(pcVar3 + -4);
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_getArgumentTypeAtIndex__026a16b8,4);
    }
    local_78 = local_e8;
    if (*local_e8 == '@') {
      pcVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,local_68,local_38,0,local_40,local_48);
      _objc_retainAutoreleasedReturnValue();
      local_28 = pcVar3;
    }
    else {
      pcVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,local_68,local_38,0,local_4c,local_48);
      _objc_retainAutoreleasedReturnValue();
      local_28 = pcVar3;
    }
    local_7c = 1;
    _objc_storeStrong(&local_70,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

