// FUN_009421f4 @ 009421f4

uint FUN_009421f4(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  uint local_bc;
  undefined1 *local_60;
  undefined1 *local_58;
  long local_50;
  uint local_44;
  long local_40;
  uint local_34;
  long local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_40 = 0;
  _objc_storeStrong(&local_40,param_1);
  lVar1 = local_40;
  FUN_0093e2b0(local_40,&cf_m_uiVoiceTime);
  local_44 = (uint)lVar1;
  if (local_44 == 0) {
    lVar1 = local_40;
    FUN_00941344(local_40,&cf_m_nsContent);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    FUN_009407ac();
    _objc_retainAutoreleasedReturnValue();
    local_50 = lVar2;
    (*(code *)PTR__objc_release_02578630)(lVar1);
    lVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
    if (lVar1 != 0) {
      puVar3 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
                 PTR_s_regularExpressionWithPattern_opt_0269ef10,&cf_voicelength_s___s_____d___,1,0)
      ;
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_50;
      lVar2 = local_50;
      local_58 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
      local_28 = 0;
      local_20 = 0;
      local_30 = lVar2;
      local_18 = lVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_firstMatchInString_options_range_0269ef48,lVar1,0,0,lVar2);
      _objc_retainAutoreleasedReturnValue();
      local_60 = puVar3;
      if ((puVar3 != (undefined1 *)0x0) &&
         ((*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_numberOfRanges_0269ef18),
         lVar1 = local_50, (undefined1 *)((long)&MACH_HEADER.magic + 1) < puVar3)) {
        puVar4 = local_60;
        puVar3 = PTR_s_rangeAtIndex__0269ef20;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_rangeAtIndex__0269ef20,1);
        (*(code *)PTR__objc_msgSend_02578628)
                  (lVar1,PTR_s_substringWithRange__0269d138,puVar4,puVar3);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_44 = (uint)lVar2;
        (*(code *)PTR__objc_release_02578630)(lVar1);
      }
      _objc_storeStrong(&local_60);
      _objc_storeStrong(&local_58,0);
    }
    _objc_storeStrong(&local_50,0);
  }
  if (local_44 == 0) {
    local_34 = 0;
  }
  else {
    if (local_44 < 1000) {
      local_bc = local_44;
    }
    else {
      local_bc = (local_44 + 500) / 1000;
    }
    local_34 = local_bc;
  }
  _objc_storeStrong(&local_40,0);
  return local_34;
}

