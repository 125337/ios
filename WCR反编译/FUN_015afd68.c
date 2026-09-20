// FUN_015afd68 @ 015afd68

double FUN_015afd68(undefined8 param_1)

{
  ushort uVar1;
  bool bVar2;
  bool bVar3;
  char *pcVar4;
  char *pcVar5;
  cfstringStruct *pcVar6;
  double local_110;
  uint local_ec;
  undefined *local_d8;
  char *local_b8;
  long local_98;
  cfstringStruct *local_90;
  char *local_88;
  char *local_80;
  undefined4 local_74;
  char *local_70;
  double local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_70 = (char *)0x0;
  _objc_storeStrong(&local_70,param_1);
  pcVar4 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
  pcVar5 = local_70;
  if (pcVar4 < (char *)((long)&MACH_HEADER.cpusubtype + 1)) {
    local_68 = 0.0;
    local_74 = 1;
    goto LAB_015b0168;
  }
  _objc_retainAutorelease(pcVar4 + -9);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_bytes_026a9630);
  pcVar4 = local_70;
  local_80 = pcVar5;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
  pcVar6 = &cf___SILK_V3;
  local_88 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)(&cf___SILK_V3,PTR_s_dataUsingEncoding__026a12e8,1);
  _objc_retainAutoreleasedReturnValue();
  bVar3 = false;
  bVar2 = false;
  local_ec = 0;
  local_90 = pcVar6;
  if ((*local_80 == '\x02') &&
     (local_ec = 0, (char *)((long)&MACH_HEADER.cpusubtype + 1) < local_88)) {
    local_38 = 1;
    local_40 = 9;
    local_30 = 1;
    local_28 = 9;
    local_b8 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_subdataWithRange__026a9e88,1,9);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = true;
    pcVar5 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_ec = (uint)pcVar5;
  }
  if (bVar2) {
    (*(code *)PTR__objc_release_02578630)(local_b8);
  }
  if ((local_ec & 1) == 0) {
    local_58 = 0;
    local_60 = 9;
    local_50 = 0;
    local_48 = 9;
    pcVar5 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_subdataWithRange__026a9e88,0,9);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar5);
    if (((ulong)pcVar4 & 1) != 0) {
      local_98 = 9;
      goto LAB_015b001c;
    }
    local_68 = 0.0;
  }
  else {
    bVar3 = true;
    local_98 = 10;
LAB_015b001c:
    local_d8 = (undefined *)0x0;
    while ((char *)(local_98 + 2U) <= local_88) {
      uVar1 = CONCAT11(local_80[local_98 + 1],local_80[local_98]);
      if ((((!bVar3) && (uVar1 == 0xffff)) || (uVar1 == 0)) ||
         ((0x1000 < uVar1 || (local_88 < (char *)(local_98 + 2 + (ulong)uVar1))))) break;
      local_98 = local_98 + 2 + (ulong)uVar1;
      local_d8 = local_d8 + 1;
      if (&DAT_000186a0 < local_d8) break;
    }
    if (local_d8 == (undefined *)0x0) {
      local_110 = 0.0;
    }
    else {
      local_110 = (double)NEON_ucvtf(local_d8);
      local_110 = local_110 * DAT_02323e38;
    }
    local_68 = local_110;
  }
  local_74 = 1;
  _objc_storeStrong(&local_90,0);
LAB_015b0168:
  _objc_storeStrong(&local_70,0);
  return local_68;
}

