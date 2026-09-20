// FUN_008f6e04 @ 008f6e04

void FUN_008f6e04(undefined8 param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *local_20;
  cfstringStruct *local_18;
  
  local_20 = (undefined1 *)0x0;
  _objc_storeStrong(&local_20,param_1);
  puVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  puVar3 = local_20;
  if ((undefined1 *)((long)&MACH_HEADER.magic + 3) < puVar2) {
    _objc_retainAutorelease(puVar2 + -4);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_bytes_026a9630);
    iVar1 = _memcmp(puVar3,"RIFF",4);
    if (iVar1 == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_wav;
    }
    else {
      puVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
      if (((undefined1 *)((long)&MACH_HEADER.cputype + 3) < puVar2) &&
         (iVar1 = _memcmp(puVar3 + 4,"ftyp",4), iVar1 == 0)) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = &cf_m4a;
      }
      else {
        iVar1 = _memcmp(puVar3,"ID3",3);
        if (iVar1 == 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = &cf_mp3;
        }
        else {
          puVar2 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
          if (((undefined1 *)((long)&MACH_HEADER.cputype + 1) < puVar2) &&
             (iVar1 = _memcmp(puVar3,"#!AMR",5), iVar1 == 0)) {
            (*(code *)PTR__objc_retain_02578638)();
            local_18 = &cf_amr;
          }
          else {
            puVar2 = local_20;
            (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
            if ((&MACH_HEADER.cpusubtype < puVar2) &&
               (iVar1 = _memcmp(puVar3,"#!SILK",6), iVar1 == 0)) {
              (*(code *)PTR__objc_retain_02578638)();
              local_18 = &cf_silk;
            }
            else {
              iVar1 = _memcmp(puVar3,s__02410b54,2);
              if ((iVar1 == 0) || (iVar1 = _memcmp(puVar3,s__02410b57,2), iVar1 == 0)) {
                (*(code *)PTR__objc_retain_02578638)();
                local_18 = &cf_mp3;
              }
              else {
                (*(code *)PTR__objc_retain_02578638)();
                local_18 = &cf_m4a;
              }
            }
          }
        }
      }
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_m4a;
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

