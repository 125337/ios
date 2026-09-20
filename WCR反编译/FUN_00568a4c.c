// FUN_00568a4c @ 00568a4c

void FUN_00568a4c(undefined8 param_1,undefined *param_2,long param_3,undefined8 *param_4,
                 long *param_5)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_1a8;
  long local_170;
  long local_168;
  undefined *local_160;
  undefined *local_158;
  undefined *local_128;
  long local_120;
  undefined *local_118;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  undefined *local_f8;
  byte local_e9;
  cfstringStruct *local_e8;
  byte local_d9;
  undefined *local_d8;
  cfstringStruct *local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  undefined4 local_9c;
  long local_98;
  undefined4 local_8c;
  long local_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined4 local_64;
  undefined *local_60;
  undefined4 local_54;
  undefined *local_50;
  long *local_48;
  undefined8 *local_40;
  long local_38;
  undefined *local_30;
  cfstringStruct *local_28;
  
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_1);
  pcVar2 = local_28;
  local_54 = 0;
  local_64 = 10000;
  local_158 = param_2;
  if (10000 < (long)param_2) {
    local_158 = &DAT_00002710;
  }
  local_78 = local_158;
  local_60 = local_158;
  if ((long)local_158 < 1) {
    local_160 = (undefined *)0x0;
  }
  else {
    local_160 = local_158;
  }
  local_80 = local_160;
  local_50 = local_160;
  local_8c = 0;
  local_9c = 300;
  local_168 = param_3;
  if (300 < param_3) {
    local_168 = 300;
  }
  local_b0 = local_168;
  local_98 = local_168;
  if (local_168 < 1) {
    local_170 = 0;
  }
  else {
    local_170 = local_168;
  }
  local_b8 = local_170;
  local_88 = local_170;
  local_d9 = 0;
  local_e9 = 0;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_a8 = param_3;
  local_70 = param_2;
  local_48 = param_5;
  local_40 = param_4;
  local_38 = param_3;
  local_30 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  local_1a8 = local_28;
  if (((ulong)pcVar2 & 1) == 0) {
    local_1a8 = &cf___;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    local_d9 = 1;
    local_d8 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_stringByTrimmingCharactersInSet__0269d0c0)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_e9 = 1;
    local_e8 = local_1a8;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_c0 = local_1a8;
  if ((local_e9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_e8);
  }
  if ((local_d9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_d8);
  }
  pcVar2 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0);
  if (pcVar2 != (cfstringStruct *)0x0) {
    pcVar2 = local_c0;
    puVar1 = PTR_s_rangeOfString__0269d838;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_rangeOfString__0269d838,&cf__);
    local_100 = pcVar2;
    local_f8 = puVar1;
    if (pcVar2 == (cfstringStruct *)0x7fffffffffffffff) {
      local_128 = (undefined *)0x0;
      pcVar2 = local_c0;
      FUN_0056900c(0,local_c0,&DAT_00002710,&local_128);
      if (((ulong)pcVar2 & 1) != 0) {
        local_50 = local_128;
      }
    }
    else {
      pcVar3 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_substringToIndex__0269d6c0,pcVar2);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_c0;
      local_108 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c0,PTR_s_substringFromIndex__0269d120,
                 (undefined1 *)((long)&local_100->field0_0x0 + 1));
      _objc_retainAutoreleasedReturnValue();
      local_118 = (undefined *)0x0;
      local_120 = 0;
      pcVar3 = local_108;
      local_110 = pcVar2;
      FUN_0056900c(local_108,&DAT_00002710,&local_118);
      if (((ulong)pcVar3 & 1) != 0) {
        local_50 = local_118;
      }
      pcVar2 = local_110;
      FUN_0056900c(local_110,300,&local_120);
      if (((ulong)pcVar2 & 1) != 0) {
        local_88 = local_120;
      }
      _objc_storeStrong(&local_110);
      _objc_storeStrong(&local_108,0);
    }
  }
  if (local_40 != (undefined8 *)0x0) {
    *local_40 = local_50;
  }
  if (local_48 != (long *)0x0) {
    *local_48 = local_88;
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_28,0);
  return;
}

