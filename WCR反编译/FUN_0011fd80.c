// FUN_0011fd80 @ 0011fd80

byte FUN_0011fd80(undefined8 param_1,ulong *param_2,ulong *param_3)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  undefined1 *puVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *local_130;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  undefined8 local_98;
  cfstringStruct *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined4 local_78;
  cfstringStruct *local_68;
  ulong *local_60;
  ulong *local_58;
  cfstringStruct *local_50;
  byte local_41;
  cfstringStruct *local_40;
  undefined8 local_38;
  undefined8 local_30;
  cfstringStruct *local_28;
  
  local_50 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_50,param_1);
  if (local_50 == (cfstringStruct *)0x0) {
    local_130 = &cf___;
  }
  else {
    local_130 = local_50;
  }
  local_60 = param_3;
  local_58 = param_2;
  (*(code *)PTR__objc_retain_02578638)();
  local_68 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_length_0269cca0);
  pcVar5 = local_68;
  if (local_130 < (cfstringStruct *)0x6) {
    if (local_58 != (ulong *)0x0) {
      _objc_retainAutorelease();
      *local_58 = (ulong)pcVar5;
    }
    if (local_60 != (ulong *)0x0) {
      _objc_retainAutorelease();
      *local_60 = (ulong)&cf___;
    }
    local_41 = 0;
    local_78 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
               PTR_s_regularExpressionWithPattern_opt_0269ef10,
               &
               cf__________s_____0_9A_Fa_f__6___0_9A_Fa_f__8___________s_____0_9A_Fa_f__6___0_9A_Fa_f__8____s__
               ,0,0);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = local_68;
    pcVar3 = local_68;
    local_80 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
    local_38 = 0;
    local_30 = 0;
    local_98 = 0;
    local_90 = pcVar3;
    local_40 = pcVar3;
    local_28 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_firstMatchInString_options_range_0269ef48,pcVar5,0,0,pcVar3);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = local_68;
    local_88 = puVar2;
    if (puVar2 == (undefined1 *)0x0) {
      if (local_58 != (ulong *)0x0) {
        _objc_retainAutorelease();
        *local_58 = (ulong)pcVar5;
      }
      if (local_60 != (ulong *)0x0) {
        _objc_retainAutorelease();
        *local_60 = (ulong)&cf___;
      }
      local_41 = 0;
      local_78 = 1;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_a0 = &cf___;
      (*(code *)PTR__objc_retain_02578638)();
      local_a8 = &cf___;
      puVar4 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_numberOfRanges_0269ef18);
      bVar1 = false;
      if ((undefined1 *)((long)&MACH_HEADER.magic + 2) < puVar4) {
        puVar4 = local_88;
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_rangeAtIndex__0269ef20,1);
        bVar1 = puVar4 != (undefined1 *)0x7fffffffffffffff;
      }
      pcVar5 = local_68;
      if (bVar1) {
        puVar4 = local_88;
        puVar2 = PTR_s_rangeAtIndex__0269ef20;
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_rangeAtIndex__0269ef20,1);
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar5,PTR_s_substringWithRange__0269d138,puVar4,puVar2);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = local_a0;
        local_a0 = pcVar5;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        pcVar3 = local_68;
        puVar4 = local_88;
        puVar2 = PTR_s_rangeAtIndex__0269ef20;
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_rangeAtIndex__0269ef20,2);
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar3,PTR_s_substringWithRange__0269d138,puVar4,puVar2);
        _objc_retainAutoreleasedReturnValue();
        pcVar6 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        pcVar5 = local_a8;
        local_a8 = pcVar6;
        (*(code *)PTR__objc_release_02578630)(pcVar5);
        (*(code *)PTR__objc_release_02578630)(pcVar3);
      }
      else {
        puVar4 = local_88;
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_numberOfRanges_0269ef18);
        bVar1 = false;
        if (&MACH_HEADER.cputype < puVar4) {
          puVar4 = local_88;
          (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_rangeAtIndex__0269ef20,3);
          bVar1 = puVar4 != (undefined1 *)0x7fffffffffffffff;
        }
        pcVar5 = local_68;
        if (bVar1) {
          puVar4 = local_88;
          puVar2 = PTR_s_rangeAtIndex__0269ef20;
          (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_rangeAtIndex__0269ef20,3);
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar5,PTR_s_substringWithRange__0269d138,puVar4,puVar2);
          _objc_retainAutoreleasedReturnValue();
          pcVar3 = local_a0;
          local_a0 = pcVar5;
          (*(code *)PTR__objc_release_02578630)(pcVar3);
          pcVar3 = local_68;
          puVar4 = local_88;
          puVar2 = PTR_s_rangeAtIndex__0269ef20;
          (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_rangeAtIndex__0269ef20,4);
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar3,PTR_s_substringWithRange__0269d138,puVar4,puVar2);
          _objc_retainAutoreleasedReturnValue();
          pcVar6 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          pcVar5 = local_a8;
          local_a8 = pcVar6;
          (*(code *)PTR__objc_release_02578630)(pcVar5);
          (*(code *)PTR__objc_release_02578630)(pcVar3);
        }
      }
      pcVar5 = local_a0;
      FUN_0010ee50();
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = true;
      if (pcVar3 != (cfstringStruct *)0x0) {
        pcVar3 = local_a8;
        (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_length_0269cca0);
        bVar1 = pcVar3 == (cfstringStruct *)0x0;
      }
      (*(code *)PTR__objc_release_02578630)(pcVar5);
      pcVar3 = local_68;
      pcVar5 = local_a0;
      if (bVar1) {
        if (local_58 != (ulong *)0x0) {
          _objc_retainAutorelease();
          *local_58 = (ulong)pcVar3;
        }
        if (local_60 != (ulong *)0x0) {
          _objc_retainAutorelease();
          *local_60 = (ulong)&cf___;
        }
        local_41 = 0;
      }
      else {
        if (local_58 != (ulong *)0x0) {
          _objc_retainAutorelease();
          *local_58 = (ulong)pcVar5;
        }
        pcVar5 = local_a8;
        if (local_60 != (ulong *)0x0) {
          _objc_retainAutorelease();
          *local_60 = (ulong)pcVar5;
        }
        local_41 = 1;
      }
      local_78 = 1;
      _objc_storeStrong(&local_a8);
      _objc_storeStrong(&local_a0,0);
    }
    _objc_storeStrong(&local_88);
    _objc_storeStrong(&local_80,0);
  }
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_50,0);
  return local_41 & 1;
}

