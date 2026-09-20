// FUN_015c1e10 @ 015c1e10

int FUN_015c1e10(undefined8 param_1)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  double dVar6;
  undefined *local_60;
  long local_50;
  char *local_20;
  int local_14;
  
  local_20 = (char *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar4 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (&MACH_HEADER.cpusubtype < pcVar4) {
    pcVar5 = "AudioUtil";
    _objc_getClass(pcVar4 + -9);
    if ((pcVar5 != (char *)0x0) &&
       (pcVar4 = pcVar5,
       (*(code *)PTR__objc_msgSend_02578628)
                 (pcVar5,PTR_s_respondsToSelector__026ca818,PTR_s_calcSilkVoiceTime__026b0db8),
       ((ulong)pcVar4 & 1) != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_calcSilkVoiceTime__026b0db8,local_20);
      local_14 = (int)pcVar5;
      if (local_14 != 0) goto LAB_015c20fc;
    }
    pcVar4 = local_20;
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_bytes_026a9630);
    pcVar5 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
    bVar2 = false;
    if (((*pcVar4 == '\x02') && ((char *)((long)&MACH_HEADER.cpusubtype + 2) <= pcVar5)) &&
       (iVar3 = _memcmp(pcVar4 + 1,"#!SILK_V3",9), iVar3 == 0)) {
      bVar2 = true;
      local_50 = 10;
    }
    else {
      iVar3 = _memcmp(pcVar4,"#!SILK_V3",9);
      if (iVar3 != 0) {
        local_14 = 0;
        goto LAB_015c20fc;
      }
      local_50 = 9;
    }
    local_60 = (undefined *)0x0;
    while ((char *)(local_50 + 2U) <= pcVar5) {
      uVar1 = CONCAT11(pcVar4[local_50 + 1],pcVar4[local_50]);
      if (((!bVar2) && (uVar1 == 0xffff)) ||
         ((uVar1 == 0 || ((0x1000 < uVar1 || (pcVar5 < (char *)(local_50 + 2 + (ulong)uVar1)))))))
      break;
      local_50 = local_50 + 2 + (ulong)uVar1;
      local_60 = local_60 + 1;
      if (&DAT_000186a0 < local_60) break;
    }
    if (local_60 == (undefined *)0x0) {
      local_14 = 0;
    }
    else {
      dVar6 = (double)NEON_ucvtf(local_60);
      local_14 = (int)(long)(dVar6 * 20.0);
    }
  }
  else {
    local_14 = 0;
  }
LAB_015c20fc:
  _objc_storeStrong(&local_20,0);
  return local_14;
}

