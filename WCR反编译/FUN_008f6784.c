// FUN_008f6784 @ 008f6784

void FUN_008f6784(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  cfstringStruct *local_170;
  cfstringStruct *local_d8;
  undefined *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  code *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined **local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined4 local_88;
  undefined1 *local_78;
  cfstringStruct *local_70;
  undefined *local_68;
  undefined1 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 *local_28;
  
  local_70 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_70,param_1);
  puVar1 = PTR__OBJC_CLASS___NSData_026ce1d0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile__0269e0b8,local_70);
  _objc_retainAutoreleasedReturnValue();
  local_78 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_length_0269cca0);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_88 = 1;
    local_68 = puVar1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
    local_90 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = &local_d0;
    local_d0 = PTR___NSConcreteStackBlock_02578660;
    local_c8 = 0xc2000000;
    local_c4 = 0;
    local_c0 = FUN_008f7b6c;
    local_b8 = &DAT_02580d80;
    local_98 = puVar2;
    (*(code *)PTR__objc_retain_02578638)();
    puVar1 = local_90;
    local_b0 = puVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_a8 = puVar1;
    _objc_retainBlock();
    pcVar4 = local_70;
    local_a0 = ppuVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_pathExtension_0269e090);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_170 = pcVar5;
    if (pcVar5 == (cfstringStruct *)0x0) {
      local_170 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_d8 = local_170;
    (*(code *)PTR__objc_release_02578630)(pcVar5);
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    pcVar4 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_isEqualToString__0269ccc8,&cf_aud);
    if ((((ulong)pcVar4 & 1) != 0) &&
       (puVar6 = local_78, (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0),
       puVar7 = local_78, ppuVar3 = local_a0, (undefined1 *)((long)&MACH_HEADER.magic + 1) < puVar6)
       ) {
      puVar6 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
      local_40 = puVar6 + -1;
      local_38 = 1;
      local_30 = 1;
      local_28 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_subdataWithRange__026a9e88,1,local_40);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)ppuVar3[2])();
      (*(code *)PTR__objc_release_02578630)(puVar7);
    }
    (*(code *)local_a0[2])(local_a0,local_78);
    puVar6 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
    puVar7 = local_78;
    ppuVar3 = local_a0;
    if ((undefined1 *)((long)&MACH_HEADER.magic + 1) < puVar6) {
      puVar6 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
      local_60 = puVar6 + -1;
      local_58 = 1;
      local_50 = 1;
      local_48 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_subdataWithRange__026a9e88,1,local_60);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)ppuVar3[2])();
      (*(code *)PTR__objc_release_02578630)(puVar7);
    }
    puVar1 = local_90;
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = puVar1;
    local_88 = 1;
    _objc_storeStrong(&local_d8);
    _objc_storeStrong(&local_a0,0);
    _objc_storeStrong(&local_a8,0);
    _objc_storeStrong(&local_b0,0);
    _objc_storeStrong(&local_98,0);
    _objc_storeStrong(&local_90,0);
  }
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_70,0);
  _objc_autoreleaseReturnValue(local_68);
  return;
}

