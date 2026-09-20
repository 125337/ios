// FUN_008de5dc @ 008de5dc

void FUN_008de5dc(double param_1,undefined8 param_2,int *param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  int local_19c;
  cfstringStruct *local_100;
  cfstringStruct *local_c0;
  int local_b4;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  double local_88;
  undefined *local_80;
  int local_78;
  undefined4 local_74;
  cfstringStruct *local_70 [3];
  cfstringStruct *local_58;
  int *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined8 local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_48 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_48,param_2);
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
  }
  pcVar1 = (cfstringStruct *)PTR__OBJC_CLASS___NSData_026ce1d0;
  local_50 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile__0269e0b8,local_48);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_48;
  local_58 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_pathExtension_0269e090);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_100 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_100 = &cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_70[0] = local_100;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar1 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_40 = (cfstringStruct *)0x0;
    local_74 = 1;
  }
  else {
    pcVar1 = local_70[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_70[0],PTR_s_isEqualToString__0269ccc8,&cf_aud);
    if (((((ulong)pcVar1 & 1) == 0) &&
        (pcVar1 = local_70[0],
        (*(code *)PTR__objc_msgSend_02578628)(local_70[0],PTR_s_isEqualToString__0269ccc8,&cf_silk),
        ((ulong)pcVar1 & 1) == 0)) &&
       (pcVar1 = local_70[0],
       (*(code *)PTR__objc_msgSend_02578628)(local_70[0],PTR_s_isEqualToString__0269ccc8,&cf_slk),
       ((ulong)pcVar1 & 1) == 0)) {
      pcVar1 = local_48;
      FUN_008f1bc8(local_48,local_50);
      _objc_retainAutoreleasedReturnValue();
      local_b0 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
      if (pcVar1 == (cfstringStruct *)0x0) {
        local_40 = (cfstringStruct *)0x0;
        local_74 = 1;
      }
      else {
        if (local_50 == (int *)0x0) {
          local_19c = 0;
        }
        else {
          local_19c = *local_50;
        }
        local_b4 = local_19c;
        pcVar1 = local_b0;
        FUN_008f2804();
        _objc_retainAutoreleasedReturnValue();
        local_c0 = pcVar1;
        (*(code *)PTR__objc_retain_02578638)();
        local_74 = 1;
        local_40 = pcVar1;
        _objc_storeStrong(&local_c0,0);
      }
      _objc_storeStrong(&local_b0,0);
    }
    else {
      pcVar1 = local_58;
      FUN_008f15f4();
      puVar6 = PTR__OBJC_CLASS___AVURLAsset_026ce330;
      local_78 = (int)pcVar1;
      if (local_78 == 0) {
        puVar3 = PTR__OBJC_CLASS___NSURL_026ce328;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_48);
        _objc_retainAutoreleasedReturnValue();
        local_38 = *(undefined8 *)PTR__AVURLAssetPreferPreciseDurationAndTimingKey_025785b8;
        puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_30 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_30,&local_38,1);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_URLAssetWithURL_options__026a1748,puVar3)
        ;
        _objc_retainAutoreleasedReturnValue();
        local_80 = puVar6;
        (*(code *)PTR__objc_release_02578630)(puVar5);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        if (local_80 == (undefined *)0x0) {
          local_a0 = 0;
          local_98 = 0;
          local_90 = 0;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(&local_a0,local_80,PTR_s_duration_0269dd70);
        }
        uVar7 = 0;
        _CMTimeGetSeconds();
        local_88 = param_1;
        FUN_00224fa4(param_1);
        if (((uVar7 & 1) != 0) && (0.0 < local_88)) {
          local_78 = (int)(long)(local_88 * 1000.0);
        }
        _objc_storeStrong(&local_80,0);
      }
      if (local_50 != (int *)0x0) {
        *local_50 = local_78;
      }
      pcVar1 = local_58;
      FUN_008f18d8();
      _objc_retainAutoreleasedReturnValue();
      local_a8 = pcVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_74 = 1;
      local_40 = pcVar1;
      _objc_storeStrong(&local_a8,0);
    }
  }
  _objc_storeStrong(local_70);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_48,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_40);
  return;
}

