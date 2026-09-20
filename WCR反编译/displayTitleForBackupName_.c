// displayTitleForBackupName: @ 00f0d478

/* Function Stack Size: 0x18 bytes */

ID WCRefineCloudBackupService::displayTitleForBackupName_(ID param_1,SEL param_2,ID param_3)

{
  undefined **ppuVar1;
  bool bVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  cfstringStruct *pcVar8;
  cfstringStruct *pcVar9;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  SEL local_f8;
  ID local_f0;
  cfstringStruct *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_100 = (cfstringStruct *)0x0;
  local_f8 = param_2;
  local_f0 = param_1;
  _objc_storeStrong(&local_100,param_3);
  pcVar3 = local_100;
  (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_lastPathComponent_026ca780);
  _objc_retainAutoreleasedReturnValue();
  local_108 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_stringByDeletingPathExtension_0269fd18);
  _objc_retainAutoreleasedReturnValue();
  local_110 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_hasPrefix__0269d320,&cf_WCRefineBackup_);
  if ((((ulong)pcVar3 & 1) != 0) &&
     (pcVar3 = local_110, (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_length_0269cca0),
     (cfstringStruct *)((long)&MACH_HEADER.reserved + 1) < pcVar3)) {
    pcVar4 = local_110;
    (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_substringFromIndex__0269d120,0xf);
    _objc_retainAutoreleasedReturnValue();
    local_118 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_length_0269cca0);
    pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    bVar2 = (cfstringStruct *)((long)&MACH_HEADER.filetype + 3) <= pcVar4;
    ppuVar1 = &pcVar4[-1].field2_0x10;
    if (bVar2) {
      local_38 = 0;
      local_40 = 4;
      local_30 = 0;
      local_28 = 4;
      pcVar4 = local_118;
      (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_substringWithRange__0269d138,0,4);
      _objc_retainAutoreleasedReturnValue();
      local_58 = 4;
      local_60 = 2;
      local_50 = 4;
      local_48 = 2;
      pcVar5 = local_118;
      (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_substringWithRange__0269d138,4,2);
      _objc_retainAutoreleasedReturnValue();
      local_78 = 6;
      local_80 = 2;
      local_70 = 6;
      local_68 = 2;
      pcVar6 = local_118;
      (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_substringWithRange__0269d138,6,2);
      _objc_retainAutoreleasedReturnValue();
      local_98 = 9;
      local_a0 = 2;
      local_90 = 9;
      local_88 = 2;
      pcVar7 = local_118;
      (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_substringWithRange__0269d138,9,2);
      _objc_retainAutoreleasedReturnValue();
      local_b8 = 0xb;
      local_c0 = 2;
      local_b0 = 0xb;
      local_a8 = 2;
      pcVar8 = local_118;
      (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_substringWithRange__0269d138,0xb,2);
      _objc_retainAutoreleasedReturnValue();
      local_d8 = 0xd;
      local_e0 = 2;
      local_d0 = 0xd;
      local_c8 = 2;
      pcVar9 = local_118;
      (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_substringWithRange__0269d138,0xd,2);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar3,PTR_s_stringWithFormat__0269cca8,&cf_________________);
      _objc_retainAutoreleasedReturnValue();
      local_e8 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar9);
      (*(code *)PTR__objc_release_02578630)(pcVar8);
      (*(code *)PTR__objc_release_02578630)(pcVar7);
      (*(code *)PTR__objc_release_02578630)(pcVar6);
      (*(code *)PTR__objc_release_02578630)(pcVar5);
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      ppuVar1 = (undefined **)&MACH_HEADER.magic;
    }
    _objc_storeStrong((undefined1 *)((long)ppuVar1 + 1),&local_118,0);
    if (bVar2) goto LAB_00f0d998;
  }
  pcVar3 = local_108;
  (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_lowercaseString_0269d9c0);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = local_108;
  if (((ulong)pcVar4 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_e8 = pcVar3;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_e8 = &::cf___;
  }
LAB_00f0d998:
  _objc_storeStrong(&local_110);
  _objc_storeStrong(&local_108,0);
  _objc_storeStrong(&local_100,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_e8;
}

