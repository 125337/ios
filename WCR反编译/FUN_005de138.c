// FUN_005de138 @ 005de138

undefined1 * FUN_005de138(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined1 *local_a0;
  long lStack_98;
  undefined1 *local_88;
  undefined4 local_80;
  undefined1 *local_70;
  long lStack_68;
  undefined *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  undefined *local_28;
  
  local_60 = (undefined1 *)0x0;
  _objc_storeStrong(&local_60);
  puVar1 = local_60;
  FUN_005de5b0();
  local_70 = puVar1;
  lStack_68 = param_1;
  if ((puVar1 == (undefined1 *)0x7fffffffffffffff) || (param_1 == 0)) {
    local_58 = (undefined1 *)0x7fffffffffffffff;
    local_80 = 1;
  }
  else {
    puVar2 = local_60;
    local_a0 = puVar1;
    lStack_98 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_substringWithRange__0269d138,puVar1,param_1);
    _objc_retainAutoreleasedReturnValue();
    local_88 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_length_0269cca0);
    if (puVar2 == (undefined1 *)0x0) {
      local_58 = (undefined1 *)0x7fffffffffffffff;
      local_80 = 1;
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
                 PTR_s_regularExpressionWithPattern_opt_0269ef10,&cf_<type>_s___d___s_<_type>,1,0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = local_88;
      puVar3 = local_88;
      local_a8 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
      local_48 = 0;
      local_40 = 0;
      local_50 = puVar3;
      local_38 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_firstMatchInString_options_range_0269ef48,puVar4,0,0,puVar3);
      _objc_retainAutoreleasedReturnValue();
      local_b0 = puVar1;
      if ((puVar1 == (undefined1 *)0x0) ||
         ((*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_numberOfRanges_0269ef18),
         puVar1 < (undefined1 *)((long)&MACH_HEADER.magic + 2))) {
        local_58 = (undefined1 *)0x7fffffffffffffff;
      }
      else {
        puVar4 = local_b0;
        puVar1 = PTR_s_rangeAtIndex__0269ef20;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_rangeAtIndex__0269ef20,1);
        if ((puVar4 == (undefined1 *)0x7fffffffffffffff) ||
           (puVar3 = local_88, local_30 = puVar4, local_28 = puVar1,
           (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0),
           puVar3 < puVar4 + (long)puVar1)) {
          local_58 = (undefined1 *)0x7fffffffffffffff;
        }
        else {
          puVar3 = local_88;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_88,PTR_s_substringWithRange__0269d138,puVar4,puVar1);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_58 = puVar4;
          (*(code *)PTR__objc_release_02578630)(puVar3);
        }
      }
      local_80 = 1;
      _objc_storeStrong(&local_b0);
      _objc_storeStrong(&local_a8,0);
    }
    _objc_storeStrong(&local_88,0);
  }
  _objc_storeStrong(&local_60,0);
  return local_58;
}

