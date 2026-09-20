// FUN_008b9684 @ 008b9684

void FUN_008b9684(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  long lVar5;
  undefined *local_1d8;
  undefined *local_1d0;
  cfstringStruct *local_180;
  undefined1 auStack_178 [8];
  long local_170;
  long *local_168;
  undefined8 local_138;
  cfstringStruct *local_130 [3];
  cfstringStruct *local_118;
  ulong local_110;
  uint local_104;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  undefined1 auStack_d0 [128];
  undefined *local_50 [5];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_100 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_100,param_1);
  if (local_100 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_f8 = &cf___;
    local_104 = 1;
  }
  else {
    local_50[0] = PTR_s_GetDataPathForFav_026a13f8;
    local_50[1] = PTR_s_GetDataPath_026a1400;
    local_50[2] = PTR_s_dataPathForDisplay_026a1408;
    local_50[3] = PTR_s_sourceDataPath_026a1418;
    local_50[4] = PTR_s_Get3rdAppFileDataTempPath_026a1410;
    for (local_110 = 0; local_110 < 5; local_110 = local_110 + 1) {
      pcVar4 = local_100;
      FUN_008b5ddc(local_100,local_50[local_110]);
      _objc_retainAutoreleasedReturnValue();
      local_118 = pcVar4;
      FUN_008b9bdc();
      _objc_retainAutoreleasedReturnValue();
      local_130[0] = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_length_0269cca0);
      pcVar3 = local_130[0];
      bVar1 = pcVar4 != (cfstringStruct *)0x0;
      if (bVar1) {
        (*(code *)PTR__objc_retain_02578638)();
        local_f8 = pcVar3;
      }
      local_104 = (uint)bVar1;
      _objc_storeStrong(bVar1,local_130);
      _objc_storeStrong(&local_118,0);
      if (local_104 != 0) goto LAB_008b9b7c;
    }
    _memset(auStack_178,0,0x40);
    local_f0 = &cf_m_nsAudioPath;
    local_e8 = &cf__m_nsAudioPath;
    local_e0 = &cf_sourceDataPath;
    local_d8 = &cf_dataPath;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_f0,4
              );
    _objc_retainAutoreleasedReturnValue();
    local_1d0 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_1d0 != (undefined *)0x0) {
      lVar5 = *local_168;
      local_1d8 = (undefined *)0x0;
      do {
        do {
          if (*local_168 - lVar5 != 0) {
            _objc_enumerationMutation(*local_168 - lVar5,puVar2);
          }
          local_138 = *(undefined8 *)(local_170 + (long)local_1d8 * 8);
          pcVar3 = local_100;
          FUN_008ba2e0(local_100,local_138);
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = pcVar3;
          FUN_008b9bdc();
          _objc_retainAutoreleasedReturnValue();
          local_180 = pcVar4;
          (*(code *)PTR__objc_release_02578630)(pcVar3);
          pcVar4 = local_180;
          (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_length_0269cca0);
          pcVar3 = local_180;
          bVar1 = pcVar4 != (cfstringStruct *)0x0;
          if (bVar1) {
            (*(code *)PTR__objc_retain_02578638)();
            local_f8 = pcVar3;
          }
          local_104 = (uint)bVar1;
          _objc_storeStrong(bVar1,&local_180,0);
          if (local_104 != 0) goto LAB_008b9b1c;
          local_1d8 = local_1d8 + 1;
        } while (local_1d8 < local_1d0);
        local_1d0 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_178,auStack_d0,
                   0x10);
        local_1d8 = (undefined *)0x0;
      } while (local_1d0 != (undefined *)0x0);
    }
    local_104 = 0;
LAB_008b9b1c:
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (local_104 == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_f8 = &cf___;
      local_104 = 1;
    }
  }
LAB_008b9b7c:
  _objc_storeStrong(&local_100,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_f8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

