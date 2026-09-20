// FUN_008aab60 @ 008aab60

byte FUN_008aab60(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong local_50;
  ulong local_48;
  ulong local_40 [3];
  uint local_24;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 0;
    local_24 = 1;
    goto LAB_008aaf38;
  }
  uVar4 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_m_dtVoice_026a9958);
  if ((uVar4 & 1) != 0) {
    uVar2 = local_20;
    FUN_008ab668(local_20,PTR_s_m_dtVoice_026a9958);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSData_026ce1d0;
    local_40[0] = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    uVar4 = uVar2 & 0xffffffff;
    if ((uVar2 & 1) == 0) {
LAB_008aacd0:
      local_24 = 0;
    }
    else {
      uVar2 = local_40[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_length_0269cca0);
      uVar4 = 0;
      if (uVar2 == 0) goto LAB_008aacd0;
      uVar4 = 1;
      local_11 = 1;
      local_24 = 1;
    }
    _objc_storeStrong(uVar4,local_40,0);
    if (local_24 != 0) goto LAB_008aaf38;
  }
  uVar4 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_getVoicePath_026a4578);
  if ((uVar4 & 1) != 0) {
    uVar2 = local_20;
    FUN_008ab668(local_20,PTR_s_getVoicePath_026a4578);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_48 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    uVar4 = local_48;
    if ((uVar2 & 1) == 0) {
LAB_008aaeec:
      local_24 = 0;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                 PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
      _objc_retainAutoreleasedReturnValue();
      local_50 = uVar4;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      uVar4 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
      bVar1 = uVar4 != 0;
      if (bVar1) {
        local_11 = 1;
      }
      local_24 = (uint)bVar1;
      _objc_storeStrong(bVar1,&local_50,0);
      if (local_24 == 0) goto LAB_008aaeec;
    }
    _objc_storeStrong(&local_48,0);
    if (local_24 != 0) goto LAB_008aaf38;
  }
  local_11 = 1;
  local_24 = 1;
LAB_008aaf38:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

