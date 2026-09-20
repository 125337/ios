// FUN_008caddc @ 008caddc

void FUN_008caddc(undefined8 param_1)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  char *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58 [3];
  cfstringStruct *local_40;
  uint local_34;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  if (local_30 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf___;
    local_34 = 1;
    goto LAB_008cb300;
  }
  pcVar2 = local_30;
  FUN_008ce760(local_30,"m_selectAttachmentViewController");
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = "SelectAttachmentViewController";
  local_40 = pcVar2;
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,pcVar3);
  if (((ulong)pcVar2 & 1) == 0) {
LAB_008caf7c:
    pcVar2 = local_30;
    FUN_008ceaa4(local_30,PTR_s_delegate_0269e808,"_delegate");
    _objc_retainAutoreleasedReturnValue();
    local_60 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_GetContact_0269d2c0);
    if (((ulong)pcVar2 & 1) == 0) {
LAB_008cb128:
      pcVar2 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_respondsToSelector__026ca818,PTR_s_m_contact_026a0b68);
      if (((ulong)pcVar2 & 1) != 0) {
        pcVar2 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_m_contact_026a0b68);
        _objc_retainAutoreleasedReturnValue();
        local_70 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsUsrName_0269d638);
        bVar1 = ((ulong)pcVar2 & 1) != 0;
        if (bVar1) {
          pcVar2 = local_70;
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_m_nsUsrName_0269d638);
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = pcVar2;
          FUN_008cb6a0();
          _objc_retainAutoreleasedReturnValue();
          local_28 = pcVar4;
          (*(code *)PTR__objc_release_02578630)(pcVar2);
        }
        local_34 = (uint)bVar1;
        _objc_storeStrong(&local_70,0);
        if (local_34 != 0) goto LAB_008cb2c0;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = &cf___;
      local_34 = 1;
    }
    else {
      pcVar2 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_GetContact_0269d2c0);
      _objc_retainAutoreleasedReturnValue();
      local_68 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsUsrName_0269d638);
      bVar1 = ((ulong)pcVar2 & 1) != 0;
      if (bVar1) {
        pcVar2 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_m_nsUsrName_0269d638);
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = pcVar2;
        FUN_008cb6a0();
        _objc_retainAutoreleasedReturnValue();
        local_28 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
      local_34 = (uint)bVar1;
      _objc_storeStrong(&local_68,0);
      if (local_34 == 0) goto LAB_008cb128;
    }
LAB_008cb2c0:
    _objc_storeStrong(&local_60,0);
  }
  else {
    pcVar4 = local_40;
    FUN_008ce8a8();
    _objc_retainAutoreleasedReturnValue();
    local_58[0] = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_length_0269cca0);
    pcVar2 = local_58[0];
    if (pcVar4 != (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar2;
    }
    local_34 = (uint)(pcVar4 != (cfstringStruct *)0x0);
    _objc_storeStrong(local_58,0);
    if (local_34 == 0) goto LAB_008caf7c;
  }
  _objc_storeStrong(&local_40,0);
LAB_008cb300:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

