// wcr_computeDurationSecondsSyncForPath: @ 015af724

/* WARNING: Removing unreachable block (ram,0x015afbf4) */
/* WARNING: Removing unreachable block (ram,0x015afc08) */
/* WARNING: Removing unreachable block (ram,0x015afc0c) */
/* WARNING: Removing unreachable block (ram,0x015afc14) */
/* WARNING: Removing unreachable block (ram,0x015afc28) */
/* WARNING: Removing unreachable block (ram,0x015afc2c) */
/* WARNING: Removing unreachable block (ram,0x015afc38) */
/* WARNING: Removing unreachable block (ram,0x015afc4c) */
/* WARNING: Removing unreachable block (ram,0x015afb28) */
/* WARNING: Removing unreachable block (ram,0x015afb44) */
/* WARNING: Removing unreachable block (ram,0x015afb48) */
/* WARNING: Removing unreachable block (ram,0x015afb50) */
/* WARNING: Removing unreachable block (ram,0x015afb64) */
/* WARNING: Removing unreachable block (ram,0x015afb68) */
/* WARNING: Removing unreachable block (ram,0x015afb74) */
/* WARNING: Removing unreachable block (ram,0x015afb88) */
/* Function Stack Size: 0x18 bytes */

double WCRefineVoicePackStore::wcr_computeDurationSecondsSyncForPath_
                 (ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  double dVar7;
  uint local_f4;
  cfstringStruct *local_f0;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  double local_b8;
  undefined *local_a0;
  undefined *local_98;
  byte local_89;
  cfstringStruct *local_88;
  double local_80;
  undefined4 local_74;
  cfstringStruct *local_70;
  SEL local_68;
  ID local_60;
  double local_58;
  double local_48;
  undefined8 local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_70 = (cfstringStruct *)0x0;
  local_68 = param_2;
  local_60 = param_1;
  _objc_storeStrong(&local_70,param_3);
  pcVar1 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_58 = 0.0;
    local_74 = 1;
  }
  else {
    dVar7 = 0.0;
    local_80 = 0.0;
    pcVar1 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_pathExtension_0269e090);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_f0 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_f0 = &::cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_88 = local_f0;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar1 = local_88;
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_isEqualToString__0269ccc8,&cf_silk);
    local_f4 = 1;
    if (((ulong)pcVar1 & 1) == 0) {
      pcVar1 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_isEqualToString__0269ccc8,&cf_slk);
      local_f4 = 1;
      if (((ulong)pcVar1 & 1) == 0) {
        pcVar1 = local_88;
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_isEqualToString__0269ccc8,&cf_aud);
        local_f4 = 1;
        if (((ulong)pcVar1 & 1) == 0) {
          pcVar1 = local_88;
          (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_isEqualToString__0269ccc8,&cf_amr);
          local_f4 = (uint)pcVar1;
        }
      }
    }
    local_89 = (byte)local_f4 & 1;
    if ((local_f4 & 1) != 0) {
      puVar3 = PTR__OBJC_CLASS___NSData_026ce1d0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile_options_e_026a09f0,
                 local_70,1);
      _objc_retainAutoreleasedReturnValue();
      local_98 = puVar3;
      FUN_015afd68(puVar3);
      local_80 = dVar7;
      _objc_storeStrong(&local_98,0);
    }
    puVar3 = PTR__OBJC_CLASS___AVURLAsset_026ce330;
    if (local_80 < 0.5) {
      puVar4 = PTR__OBJC_CLASS___NSURL_026ce328;
      dVar7 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_70);
      _objc_retainAutoreleasedReturnValue();
      local_38 = *(undefined8 *)PTR__AVURLAssetPreferPreciseDurationAndTimingKey_025785b8;
      puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_30 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_30,&local_38,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_URLAssetWithURL_options__026a1748,puVar4);
      _objc_retainAutoreleasedReturnValue();
      local_a0 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      if (local_a0 == (undefined *)0x0) {
        local_d0 = 0;
        local_c8 = 0;
        local_c0 = 0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(&local_d0,local_a0,PTR_s_duration_0269dd70);
      }
      _CMTimeGetSeconds(&local_d0);
      if ((ABS(dVar7) != INFINITY) && (0.5 <= dVar7)) {
        local_80 = dVar7;
      }
      local_b8 = dVar7;
      local_48 = dVar7;
      _objc_storeStrong(&local_a0,0);
    }
    if (local_80 < 0.5) {
      local_80 = 0.0;
    }
    local_58 = local_80;
    local_74 = 1;
    _objc_storeStrong(&local_88,0);
  }
  _objc_storeStrong(&local_70,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_58;
}

