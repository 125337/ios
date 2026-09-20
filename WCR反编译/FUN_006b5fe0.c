// FUN_006b5fe0 @ 006b5fe0

void FUN_006b5fe0(void)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_f8;
  uint local_c4;
  uint local_b4;
  cfstringStruct *local_80;
  cfstringStruct *local_60;
  byte local_51;
  cfstringStruct *local_50;
  cfstringStruct *local_48 [3];
  byte local_29;
  cfstringStruct *local_28;
  
  pcVar1 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_qrCodeBeautifyEnabled_026a68c0);
  local_29 = (byte)pcVar1;
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_qrCodeBeautifyImagePath_026a68c8);
  _objc_retainAutoreleasedReturnValue();
  local_80 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_80 = &cf___;
  }
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_80;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_48[0] = pcVar3;
  (*(code *)PTR__objc_release_02578630)(local_80);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)();
  local_51 = 0;
  local_b4 = 0;
  if ((local_29 & 1) != 0) {
    pcVar3 = local_48[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_length_0269cca0);
    local_c4 = 1;
    pcVar1 = (cfstringStruct *)0x0;
    if (pcVar3 != (cfstringStruct *)0x0) {
      pcVar1 = (cfstringStruct *)PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      local_51 = 1;
      local_50 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_c4 = (uint)pcVar1 ^ 1;
    }
    local_b4 = local_c4;
  }
  if ((local_51 & 1) != 0) {
    pcVar1 = local_50;
    (*(code *)PTR__objc_release_02578630)();
  }
  if ((local_b4 & 1) != 0) {
    FUN_006b8070();
    _objc_retainAutoreleasedReturnValue();
    local_60 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
    if (pcVar1 != (cfstringStruct *)0x0) {
      _objc_storeStrong(pcVar1,local_48,local_60);
    }
    _objc_storeStrong(&local_60,0);
  }
  DAT_028cc1a0 = local_29 & 1;
  _objc_storeStrong(&DAT_028cc158,local_48[0]);
  if (DAT_028cc168 == (cfstringStruct *)0x0) {
    local_f8 = &cf___;
  }
  else {
    local_f8 = DAT_028cc168;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_isEqualToString__0269ccc8,local_48[0]);
  if (((ulong)local_f8 & 1) == 0) {
    pcVar3 = local_48[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_copy_0269d150);
    pcVar1 = DAT_028cc168;
    DAT_028cc168 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    _objc_storeStrong(&DAT_028cc160,0);
  }
  _objc_storeStrong(local_48);
  _objc_storeStrong(&local_28,0);
  return;
}

