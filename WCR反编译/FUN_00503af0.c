// FUN_00503af0 @ 00503af0

void FUN_00503af0(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  long lVar5;
  undefined *local_210;
  undefined *local_208;
  undefined1 auStack_178 [8];
  long local_170;
  long *local_168;
  undefined8 local_138;
  cfstringStruct *local_130;
  cfstringStruct *local_128;
  cfstringStruct *local_120 [4];
  cfstringStruct *local_100;
  int local_f4;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_f0 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_f0,param_1);
  if (local_f0 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_e8 = &cf___;
    local_f4 = 1;
    goto LAB_005041c4;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_100 = &cf___;
  pcVar1 = local_f0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_f0,PTR_s_respondsToSelector__026ca818,PTR_s_getVoicePath_026a4578);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar3 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_getVoicePath_026a4578);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar3;
    FUN_004fe524();
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_100;
    local_100 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
  }
  pcVar3 = local_100;
  FUN_00504bac();
  _objc_retainAutoreleasedReturnValue();
  local_120[0] = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_length_0269cca0);
  pcVar1 = local_120[0];
  if (pcVar3 == (cfstringStruct *)0x0) {
    pcVar3 = local_100;
    (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_length_0269cca0);
    pcVar1 = local_100;
    if (pcVar3 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_e8 = &cf___;
      local_f4 = 1;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_128 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_hasPrefix__0269d320,&cf__);
      if (((ulong)pcVar1 & 1) == 0) {
        pcVar3 = (cfstringStruct *)0x9;
        _NSSearchPathForDirectoriesInDomains(9,1,1);
        _objc_retainAutoreleasedReturnValue();
        pcVar1 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_130 = pcVar1;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        pcVar1 = local_130;
        (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_length_0269cca0);
        if (pcVar1 != (cfstringStruct *)0x0) {
          pcVar3 = local_130;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_130,PTR_s_stringByAppendingPathComponent__026cab30,local_100);
          _objc_retainAutoreleasedReturnValue();
          pcVar1 = local_128;
          local_128 = pcVar3;
          (*(code *)PTR__objc_release_02578630)(pcVar1);
        }
        _objc_storeStrong(&local_130,0);
      }
      pcVar3 = local_128;
      FUN_00504bac();
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_120[0];
      local_120[0] = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      pcVar3 = local_120[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_120[0],PTR_s_length_0269cca0);
      pcVar1 = local_120[0];
      if (pcVar3 == (cfstringStruct *)0x0) {
        pcVar1 = local_128;
        (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_pathExtension_0269e090);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(pcVar1);
        if (pcVar3 == (cfstringStruct *)0x0) {
          _memset(auStack_178,0,0x40);
          local_e0 = &cf_aud;
          local_d8 = &cf_amr;
          local_d0 = &cf_silk;
          local_c8 = &cf_spx;
          local_c0 = &cf_opus;
          local_b8 = &cf_mp3;
          local_b0 = &cf_m4a;
          puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                     &local_e0,7);
          _objc_retainAutoreleasedReturnValue();
          local_208 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          if (local_208 != (undefined *)0x0) {
            lVar5 = *local_168;
            local_210 = (undefined *)0x0;
            do {
              do {
                if (*local_168 - lVar5 != 0) {
                  _objc_enumerationMutation(*local_168 - lVar5,puVar4);
                }
                local_138 = *(undefined8 *)(local_170 + (long)local_210 * 8);
                pcVar3 = local_128;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_128,PTR_s_stringByAppendingPathExtension__026a4580,local_138);
                _objc_retainAutoreleasedReturnValue();
                pcVar2 = pcVar3;
                FUN_00504bac();
                _objc_retainAutoreleasedReturnValue();
                pcVar1 = local_120[0];
                local_120[0] = pcVar2;
                (*(code *)PTR__objc_release_02578630)(pcVar1);
                (*(code *)PTR__objc_release_02578630)(pcVar3);
                pcVar3 = local_120[0];
                (*(code *)PTR__objc_msgSend_02578628)(local_120[0],PTR_s_length_0269cca0);
                pcVar1 = local_120[0];
                if (pcVar3 != (cfstringStruct *)0x0) {
                  (*(code *)PTR__objc_retain_02578638)();
                  local_e8 = pcVar1;
                  local_f4 = 1;
                  goto LAB_00504144;
                }
                local_210 = local_210 + 1;
              } while (local_210 < local_208);
              local_208 = puVar4;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_178,
                         auStack_a8,0x10);
              local_210 = (undefined *)0x0;
            } while (local_208 != (undefined *)0x0);
          }
          local_f4 = 0;
LAB_00504144:
          (*(code *)PTR__objc_release_02578630)(puVar4);
          if (local_f4 != 0) goto LAB_00504194;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_e8 = &cf___;
        local_f4 = 1;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_e8 = pcVar1;
        local_f4 = 1;
      }
LAB_00504194:
      _objc_storeStrong(&local_128,0);
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_e8 = pcVar1;
    local_f4 = 1;
  }
  _objc_storeStrong(local_120);
  _objc_storeStrong(&local_100,0);
LAB_005041c4:
  _objc_storeStrong(&local_f0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_e8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

