// FUN_008da2c4 @ 008da2c4

void FUN_008da2c4(undefined8 param_1,ulong *param_2)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_120;
  cfstringStruct *local_d0;
  cfstringStruct *local_70 [2];
  cfstringStruct *local_60 [3];
  undefined *local_48;
  undefined4 local_3c;
  ulong *local_38;
  cfstringStruct *local_30;
  undefined *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = param_2;
  if (param_2 != (ulong *)0x0) {
    _objc_retainAutorelease();
    *local_38 = (ulong)&cf___;
  }
  if (local_30 == (cfstringStruct *)0x0) {
    local_28 = (undefined *)0x0;
    local_3c = 1;
  }
  else {
    local_48 = (undefined *)0x0;
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_m_dtVoice_026a9958);
    if (((ulong)pcVar1 & 1) != 0) {
      pcVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_m_dtVoice_026a9958);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSData_026ce1d0;
      local_60[0] = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
      if ((((ulong)pcVar1 & 1) != 0) &&
         (pcVar1 = local_60[0],
         (*(code *)PTR__objc_msgSend_02578628)(local_60[0],PTR_s_length_0269cca0),
         pcVar1 != (cfstringStruct *)0x0)) {
        _objc_storeStrong(pcVar1,&local_48,local_60[0]);
      }
      _objc_storeStrong(local_60,0);
    }
    local_d0 = local_30;
    FUN_008db4b4();
    _objc_retainAutoreleasedReturnValue();
    local_70[0] = local_d0;
    if (local_38 != (ulong *)0x0) {
      if (local_d0 == (cfstringStruct *)0x0) {
        local_d0 = &cf___;
      }
      _objc_retainAutorelease();
      *local_38 = (ulong)local_d0;
    }
    puVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
    puVar2 = local_48;
    if (puVar3 == (undefined *)0x0) {
      pcVar1 = local_70[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_70[0],PTR_s_length_0269cca0);
      if (pcVar1 == (cfstringStruct *)0x0) {
        local_28 = (undefined *)0x0;
      }
      else {
        puVar3 = PTR__OBJC_CLASS___NSData_026ce1d0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile_options_e_026a09f0
                   ,local_70[0],1,0);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = local_48;
        local_48 = puVar3;
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
        if (puVar2 == (undefined *)0x0) {
          puVar3 = PTR__OBJC_CLASS___NSData_026ce1d0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile__0269e0b8,
                     local_70[0]);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = local_48;
          local_48 = puVar3;
          (*(code *)PTR__objc_release_02578630)(puVar2);
        }
        puVar2 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
        if (puVar2 == (undefined *)0x0) {
          local_120 = (undefined *)0x0;
        }
        else {
          local_120 = local_48;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = local_120;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = puVar2;
    }
    local_3c = 1;
    _objc_storeStrong(local_70);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

