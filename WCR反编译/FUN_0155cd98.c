// FUN_0155cd98 @ 0155cd98

void FUN_0155cd98(undefined8 param_1,undefined *param_2,long param_3,undefined8 *param_4,
                 long *param_5)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_170;
  long local_160;
  long local_158;
  undefined *local_150;
  undefined *local_148;
  undefined *local_118;
  long local_110;
  undefined *local_108;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  undefined *local_e8;
  bool local_d9;
  cfstringStruct *local_d8;
  byte local_c9;
  undefined *local_c8;
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
  pcVar3 = local_28;
  local_54 = 0;
  local_64 = 10000;
  local_148 = param_2;
  if (10000 < (long)param_2) {
    local_148 = &DAT_00002710;
  }
  local_78 = local_148;
  local_60 = local_148;
  if ((long)local_148 < 1) {
    local_150 = (undefined *)0x0;
  }
  else {
    local_150 = local_148;
  }
  local_80 = local_150;
  local_50 = local_150;
  local_8c = 0;
  local_9c = 300;
  local_158 = param_3;
  if (300 < param_3) {
    local_158 = 300;
  }
  local_b0 = local_158;
  local_98 = local_158;
  if (local_158 < 1) {
    local_160 = 0;
  }
  else {
    local_160 = local_158;
  }
  local_b8 = local_160;
  local_88 = local_160;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_a8 = param_3;
  local_70 = param_2;
  local_48 = param_5;
  local_40 = param_4;
  local_38 = param_3;
  local_30 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  local_170 = local_28;
  local_c9 = 0;
  local_d9 = false;
  bVar1 = ((ulong)pcVar3 & 1) == 0;
  if (bVar1) {
    local_170 = &cf___;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    local_c9 = 1;
    local_c8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_stringByTrimmingCharactersInSet__0269d0c0)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_d8 = local_170;
  }
  local_d9 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_c0 = local_170;
  if ((local_d9 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_d8);
  }
  if ((local_c9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_c8);
  }
  pcVar3 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0);
  if (pcVar3 != (cfstringStruct *)0x0) {
    pcVar3 = local_c0;
    puVar2 = PTR_s_rangeOfString__0269d838;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_rangeOfString__0269d838,&cf__);
    local_f0 = pcVar3;
    local_e8 = puVar2;
    if (pcVar3 == (cfstringStruct *)0x7fffffffffffffff) {
      local_118 = (undefined *)0x0;
      pcVar3 = local_c0;
      FUN_0158c5f4(0,local_c0,&DAT_00002710,&local_118);
      if (((ulong)pcVar3 & 1) != 0) {
        local_50 = local_118;
      }
    }
    else {
      pcVar4 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_substringToIndex__0269d6c0,pcVar3);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_c0;
      local_f8 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c0,PTR_s_substringFromIndex__0269d120,
                 (undefined1 *)((long)&local_f0->field0_0x0 + 1));
      _objc_retainAutoreleasedReturnValue();
      local_108 = (undefined *)0x0;
      local_110 = 0;
      pcVar4 = local_f8;
      local_100 = pcVar3;
      FUN_0158c5f4(local_f8,&DAT_00002710,&local_108);
      if (((ulong)pcVar4 & 1) != 0) {
        local_50 = local_108;
      }
      pcVar3 = local_100;
      FUN_0158c5f4(local_100,300,&local_110);
      if (((ulong)pcVar3 & 1) != 0) {
        local_88 = local_110;
      }
      _objc_storeStrong(&local_100);
      _objc_storeStrong(&local_f8,0);
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

