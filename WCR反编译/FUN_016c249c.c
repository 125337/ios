// FUN_016c249c @ 016c249c

void FUN_016c249c(undefined8 param_1,ulong *param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_128;
  cfstringStruct *local_e0;
  undefined8 local_78;
  long local_70;
  undefined4 local_64;
  cfstringStruct *local_60 [3];
  cfstringStruct *local_48;
  undefined *local_40;
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
  pcVar2 = local_30;
  local_40 = (undefined *)0x0;
  pcVar1 = &cf_m_dtVoice;
  _NSSelectorFromString();
  FUN_016c2914(pcVar2,pcVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSData_026ce1d0;
  local_48 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  if ((((ulong)pcVar2 & 1) != 0) &&
     (pcVar1 = local_48, (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0),
     pcVar1 != (cfstringStruct *)0x0)) {
    _objc_storeStrong(pcVar1,&local_40,local_48);
  }
  local_e0 = local_30;
  FUN_016c2a78();
  _objc_retainAutoreleasedReturnValue();
  local_60[0] = local_e0;
  if (local_38 != (ulong *)0x0) {
    if (local_e0 == (cfstringStruct *)0x0) {
      local_e0 = &cf___;
    }
    _objc_retainAutorelease();
    *local_38 = (ulong)local_e0;
  }
  puVar4 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  puVar3 = local_40;
  if (puVar4 == (undefined *)0x0) {
    pcVar1 = local_60[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_60[0],PTR_s_length_0269cca0);
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_28 = (undefined *)0x0;
      local_64 = 1;
    }
    else {
      local_70 = 0;
      local_78 = 0;
      puVar4 = PTR__OBJC_CLASS___NSData_026ce1d0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile_options_e_026a09f0,
                 local_60[0],1,&local_78);
      _objc_retainAutoreleasedReturnValue();
      _objc_storeStrong(&local_70,local_78);
      puVar3 = local_40;
      local_40 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      if ((local_40 == (undefined *)0x0) && (local_70 != 0)) {
        puVar4 = PTR__OBJC_CLASS___NSData_026ce1d0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile__0269e0b8,
                   local_60[0]);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = local_40;
        local_40 = puVar4;
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
      puVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
      if (puVar3 == (undefined *)0x0) {
        local_128 = (undefined *)0x0;
      }
      else {
        local_128 = local_40;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = local_128;
      local_64 = 1;
      _objc_storeStrong(&local_70,0);
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = puVar3;
    local_64 = 1;
  }
  _objc_storeStrong(local_60);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

