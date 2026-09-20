// FUN_008b6dec @ 008b6dec

void FUN_008b6dec(undefined8 param_1,undefined8 *param_2)

{
  byte bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  char *pcVar5;
  char *pcVar6;
  cfstringStruct *local_270;
  cfstringStruct *local_228;
  undefined8 local_e0;
  long local_d8 [2];
  byte local_c1;
  undefined *local_c0;
  byte local_b1;
  char *local_b0;
  char *local_a8;
  undefined4 local_9c;
  cfstringStruct *local_98;
  undefined *local_90;
  undefined *local_88;
  char *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  undefined4 local_5c;
  cfstringStruct *local_58 [3];
  cfstringStruct *local_40;
  undefined8 *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = param_2;
  if (param_2 != (undefined8 *)0x0) {
    _objc_retainAutorelease();
    *local_38 = &cf___;
  }
  pcVar2 = local_30;
  _objc_getAssociatedObject(local_30,&DAT_028ce010);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_30;
  local_40 = pcVar2;
  _objc_getAssociatedObject(local_30,&DAT_028ce011);
  _objc_retainAutoreleasedReturnValue();
  local_58[0] = pcVar3;
  if ((local_38 != (undefined8 *)0x0) &&
     ((*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_length_0269cca0), pcVar2 = local_58[0],
     pcVar3 != (cfstringStruct *)0x0)) {
    _objc_retainAutorelease(pcVar3);
    *local_38 = pcVar2;
  }
  pcVar2 = local_40;
  puVar4 = PTR__OBJC_CLASS___NSData_026ce1d0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
  if ((((ulong)pcVar2 & 1) == 0) ||
     (pcVar2 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
     local_28 = local_40, pcVar2 == (cfstringStruct *)0x0)) {
    pcVar3 = local_30;
    local_68 = (cfstringStruct *)0x0;
    pcVar2 = &cf_m_dtVoice;
    _NSSelectorFromString();
    FUN_008b5ddc(pcVar3,pcVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSData_026ce1d0;
    local_70 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    if ((((ulong)pcVar3 & 1) != 0) &&
       (pcVar2 = local_70, (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0),
       pcVar2 != (cfstringStruct *)0x0)) {
      _objc_storeStrong(pcVar2,&local_68,local_70);
    }
    pcVar2 = local_30;
    FUN_008b792c();
    _objc_retainAutoreleasedReturnValue();
    local_78 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
    if (((pcVar2 == (cfstringStruct *)0x0) &&
        (pcVar2 = local_30,
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_GetChatName_0269da58),
        ((ulong)pcVar2 & 1) != 0)) &&
       (pcVar2 = local_30,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_m_uiMesLocalID_0269d238),
       ((ulong)pcVar2 & 1) != 0)) {
      pcVar5 = "CUtility";
      _objc_getClass();
      local_88 = PTR_s_GetPathOfMesAudio_LocalID_DocPat_026a9ad0;
      local_90 = PTR_s_GetDocPath_026a9ad8;
      local_80 = pcVar5;
      if (((pcVar5 != (char *)0x0) &&
          ((*(code *)PTR__objc_msgSend_02578628)
                     (pcVar5,PTR_s_respondsToSelector__026ca818,
                      PTR_s_GetPathOfMesAudio_LocalID_DocPat_026a9ad0), ((ulong)pcVar5 & 1) != 0))
         && (pcVar5 = local_80,
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_80,PTR_s_respondsToSelector__026ca818,local_90),
            ((ulong)pcVar5 & 1) != 0)) {
        pcVar2 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_GetChatName_0269da58);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = pcVar2;
        FUN_008b7d64();
        _objc_retainAutoreleasedReturnValue();
        local_98 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        pcVar2 = local_30;
        FUN_008b7f4c(local_30,PTR_s_m_uiMesLocalID_0269d238);
        local_9c = SUB84(pcVar2,0);
        pcVar2 = local_98;
        (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_length_0269cca0);
        if (pcVar2 != (cfstringStruct *)0x0) {
          pcVar5 = local_80;
          (*(code *)PTR__objc_msgSend_02578628)(local_80,local_90);
          _objc_retainAutoreleasedReturnValue();
          pcVar6 = local_80;
          local_a8 = pcVar5;
          (*(code *)PTR__objc_msgSend_02578628)(local_80,local_88,local_98,local_9c,pcVar5);
          _objc_retainAutoreleasedReturnValue();
          pcVar5 = pcVar6;
          FUN_008b7d64();
          _objc_retainAutoreleasedReturnValue();
          local_b0 = pcVar5;
          (*(code *)PTR__objc_release_02578630)(pcVar6);
          local_b1 = 0;
          local_c1 = 0;
          pcVar5 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_length_0269cca0);
          bVar1 = 0;
          if (pcVar5 != (char *)0x0) {
            puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
            _objc_retainAutoreleasedReturnValue();
            local_c1 = 1;
            local_c0 = puVar4;
            (*(code *)PTR__objc_msgSend_02578628)();
            bVar1 = 0;
            if (((ulong)puVar4 & 1) != 0) {
              bVar1 = local_b1 ^ 1;
            }
          }
          if ((local_c1 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_c0);
          }
          if ((bVar1 & 1) != 0) {
            _objc_storeStrong(&local_78,local_b0);
          }
          _objc_storeStrong(&local_b0);
          _objc_storeStrong(&local_a8,0);
        }
        _objc_storeStrong(&local_98,0);
      }
    }
    if (local_38 != (undefined8 *)0x0) {
      if (local_78 == (cfstringStruct *)0x0) {
        local_228 = &cf___;
      }
      else {
        local_228 = local_78;
      }
      _objc_retainAutorelease();
      *local_38 = local_228;
    }
    pcVar3 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
    pcVar2 = local_68;
    if (pcVar3 == (cfstringStruct *)0x0) {
      pcVar2 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_28 = (cfstringStruct *)0x0;
        local_5c = 1;
      }
      else {
        local_d8[0] = 0;
        local_e0 = 0;
        pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSData_026ce1d0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile_options_e_026a09f0
                   ,local_78,1,&local_e0);
        _objc_retainAutoreleasedReturnValue();
        _objc_storeStrong(local_d8,local_e0);
        pcVar2 = local_68;
        local_68 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        if ((local_68 == (cfstringStruct *)0x0) && (local_d8[0] != 0)) {
          pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSData_026ce1d0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile__0269e0b8,
                     local_78);
          _objc_retainAutoreleasedReturnValue();
          pcVar2 = local_68;
          local_68 = pcVar3;
          (*(code *)PTR__objc_release_02578630)(pcVar2);
        }
        pcVar2 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
        if (pcVar2 == (cfstringStruct *)0x0) {
          local_270 = (cfstringStruct *)0x0;
        }
        else {
          local_270 = local_68;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = local_270;
        local_5c = 1;
        _objc_storeStrong(local_d8,0);
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar2;
      local_5c = 1;
    }
    _objc_storeStrong(&local_78);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_68,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_5c = 1;
  }
  _objc_storeStrong(local_58);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

