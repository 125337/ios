// FUN_008f15f4 @ 008f15f4

undefined4 FUN_008f15f4(undefined8 param_1)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  double dVar6;
  undefined *local_58;
  long local_48;
  char *local_20;
  undefined4 local_14;
  
  local_20 = (char *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar4 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  pcVar5 = local_20;
  if (pcVar4 < (char *)((long)&MACH_HEADER.cpusubtype + 1)) {
    local_14 = 0;
  }
  else {
    _objc_retainAutorelease(pcVar4 + -9);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_bytes_026a9630);
    pcVar4 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
    bVar2 = false;
    if (((*pcVar5 == '\x02') && ((char *)((long)&MACH_HEADER.cpusubtype + 2) <= pcVar4)) &&
       (iVar3 = _memcmp(pcVar5 + 1,&DAT_02324380,9), iVar3 == 0)) {
      bVar2 = true;
      local_48 = 10;
    }
    else {
      iVar3 = _memcmp(pcVar5,&DAT_02324380,9);
      if (iVar3 != 0) {
        local_14 = 0;
        goto LAB_008f18b4;
      }
      local_48 = 9;
    }
    local_58 = (undefined *)0x0;
    while ((char *)(local_48 + 2U) <= pcVar4) {
      uVar1 = CONCAT11(pcVar5[local_48 + 1],pcVar5[local_48]);
      if (((!bVar2) && (uVar1 == 0xffff)) ||
         ((uVar1 == 0 || ((0x1000 < uVar1 || (pcVar4 < (char *)(local_48 + 2 + (ulong)uVar1)))))))
      break;
      local_48 = local_48 + 2 + (ulong)uVar1;
      local_58 = local_58 + 1;
      if (&DAT_000186a0 < local_58) break;
    }
    if (local_58 == (undefined *)0x0) {
      local_14 = 0;
    }
    else {
      dVar6 = (double)NEON_ucvtf(local_58);
      local_14 = (undefined4)(long)(dVar6 * 20.0);
    }
  }
LAB_008f18b4:
  _objc_storeStrong(&local_20,0);
  return local_14;
}

