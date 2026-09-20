// FUN_008f2804 @ 008f2804

void FUN_008f2804(undefined8 param_1)

{
  long lVar1;
  char *pcVar2;
  undefined *puVar3;
  char *pcVar4;
  char *local_88;
  undefined1 local_79;
  char *local_78;
  undefined *local_70;
  undefined *local_68;
  char *local_58;
  undefined *local_50;
  char *local_48;
  int local_40;
  long local_30;
  char *local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  lVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_28 = (char *)0x0;
    local_40 = 1;
    goto LAB_008f2cf8;
  }
  pcVar2 = "MJSilkCodec";
  _objc_getClass();
  local_50 = PTR_s_encodeToSilkFromPCMData__026a9e40;
  local_48 = pcVar2;
  if ((pcVar2 != (char *)0x0) &&
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_encodeToSilkFromPCMData__026a9e40),
     ((ulong)pcVar2 & 1) != 0)) {
    pcVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,local_50,local_30);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSData_026ce1d0;
    local_58 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((((ulong)pcVar2 & 1) == 0) ||
       (pcVar2 = local_58, (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0),
       pcVar2 == (char *)0x0)) {
      local_40 = 0;
    }
    else {
      pcVar4 = local_58;
      FUN_008f18d8(pcVar2);
      _objc_retainAutoreleasedReturnValue();
      local_40 = 1;
      local_28 = pcVar4;
    }
    _objc_storeStrong(&local_58,0);
    if (local_40 != 0) goto LAB_008f2cf8;
  }
  local_68 = PTR_s_initEncoderWithSampleRate__026a9e48;
  local_70 = PTR_s_encodeFromPCMData__026a9e50;
  if (((local_48 != (char *)0x0) &&
      (pcVar2 = local_48,
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_instancesRespondToSelector__0269da90,
                 PTR_s_initEncoderWithSampleRate__026a9e48), ((ulong)pcVar2 & 1) != 0)) &&
     (pcVar2 = local_48,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_48,PTR_s_instancesRespondToSelector__0269da90,local_70),
     ((ulong)pcVar2 & 1) != 0)) {
    pcVar2 = local_48;
    _objc_alloc_init();
    local_78 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,local_68,&DAT_00003e80);
    local_79 = SUB81(pcVar2,0);
    if (((ulong)pcVar2 & 1) == 0) {
LAB_008f2c6c:
      local_40 = 0;
    }
    else {
      pcVar2 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,local_70,local_30);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSData_026ce1d0;
      local_88 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      if ((((ulong)pcVar2 & 1) == 0) ||
         (pcVar2 = local_88, (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0),
         pcVar2 == (char *)0x0)) {
        local_40 = 0;
      }
      else {
        pcVar4 = local_88;
        FUN_008f18d8(pcVar2);
        _objc_retainAutoreleasedReturnValue();
        local_40 = 1;
        local_28 = pcVar4;
      }
      _objc_storeStrong(&local_88,0);
      if (local_40 == 0) goto LAB_008f2c6c;
    }
    _objc_storeStrong(&local_78,0);
    if (local_40 != 0) goto LAB_008f2cf8;
  }
  local_28 = (char *)0x0;
  local_40 = 1;
LAB_008f2cf8:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

