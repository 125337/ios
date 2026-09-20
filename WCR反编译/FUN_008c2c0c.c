// FUN_008c2c0c @ 008c2c0c

undefined4 FUN_008c2c0c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined4 local_68;
  long local_58;
  long local_50;
  undefined4 local_44;
  long local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  local_50 = 0;
  _objc_storeStrong(&local_50,param_1);
  lVar1 = local_50;
  FUN_008b5ddc(local_50,PTR_s_m_nsContent_0269d0a0);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  FUN_008b7d64();
  _objc_retainAutoreleasedReturnValue();
  local_58 = lVar2;
  (*(code *)PTR__objc_release_02578630)(lVar1);
  lVar1 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_44 = 0;
    local_68 = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
               PTR_s_regularExpressionWithPattern_opt_0269ef10,&cf_voicelength_s___s_____d___,1,0);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_58;
    local_70 = puVar3;
    if (puVar3 == (undefined1 *)0x0) {
      local_44 = 0;
      local_68 = 1;
    }
    else {
      lVar2 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
      local_38 = 0;
      local_30 = 0;
      local_40 = lVar2;
      local_28 = lVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_firstMatchInString_options_range_0269ef48,lVar1,0,0,lVar2);
      _objc_retainAutoreleasedReturnValue();
      local_78 = puVar3;
      if ((puVar3 == (undefined1 *)0x0) ||
         ((*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_numberOfRanges_0269ef18),
         lVar1 = local_58, puVar3 < (undefined1 *)((long)&MACH_HEADER.magic + 2))) {
        local_44 = 0;
      }
      else {
        puVar4 = local_78;
        puVar3 = PTR_s_rangeAtIndex__0269ef20;
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_rangeAtIndex__0269ef20,1);
        (*(code *)PTR__objc_msgSend_02578628)
                  (lVar1,PTR_s_substringWithRange__0269d138,puVar4,puVar3);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_44 = (undefined4)lVar2;
        (*(code *)PTR__objc_release_02578630)(lVar1);
      }
      local_68 = 1;
      _objc_storeStrong(&local_78,0);
    }
    _objc_storeStrong(&local_70,0);
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  return local_44;
}

