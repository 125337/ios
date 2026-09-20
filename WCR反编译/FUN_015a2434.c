// FUN_015a2434 @ 015a2434

void FUN_015a2434(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *local_20;
  cfstringStruct *local_18;
  
  local_20 = (undefined1 *)0x0;
  _objc_storeStrong(&local_20,param_1);
  puVar6 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  puVar7 = local_20;
  if ((undefined1 *)((long)&MACH_HEADER.magic + 2) < puVar6) {
    _objc_retainAutorelease(puVar6 + -3);
    (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_bytes_026a9630);
    puVar6 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
    if (((puVar6 < &MACH_HEADER.filetype) || (iVar5 = _memcmp(puVar7,"RIFF",4), iVar5 != 0)) ||
       (iVar5 = _memcmp(puVar7 + 8,"WAVE",4), iVar5 != 0)) {
      puVar6 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
      puVar8 = puVar7;
      FUN_015a8f64(puVar7,puVar6,0);
      if (((ulong)puVar8 & 1) == 0) {
        puVar6 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
        if (((((undefined1 *)((long)&MACH_HEADER.cpusubtype + 1) < puVar6) &&
             (iVar5 = _memcmp(puVar7,"ID3",3), iVar5 == 0)) &&
            ((-1 < (char)puVar7[6] && ((-1 < (char)puVar7[7] && (-1 < (char)puVar7[8])))))) &&
           (-1 < (char)puVar7[9])) {
          bVar1 = puVar7[6];
          bVar2 = puVar7[7];
          bVar3 = puVar7[8];
          bVar4 = puVar7[9];
          puVar6 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
          FUN_015a8f64(puVar7,puVar6,
                       ((ulong)bVar2 << 0xe | (ulong)bVar1 << 0x15 | (ulong)bVar3 << 7 |
                       (ulong)bVar4) + 10);
          if (((ulong)puVar7 & 1) != 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_18 = &cf_mp3;
            goto LAB_015a26d0;
          }
        }
        local_18 = (cfstringStruct *)0x0;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = &cf_mp3;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_wav;
    }
  }
  else {
    local_18 = (cfstringStruct *)0x0;
  }
LAB_015a26d0:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

