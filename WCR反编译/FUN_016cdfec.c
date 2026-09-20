// FUN_016cdfec @ 016cdfec

void FUN_016cdfec(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *local_168;
  undefined *local_140;
  bool local_b1;
  undefined *local_b0;
  undefined *local_a8;
  long local_a0;
  undefined1 *local_98;
  undefined *local_90;
  long local_88;
  undefined8 local_80;
  long local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined4 local_60;
  long local_50;
  undefined *local_48;
  long local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  local_50 = 0;
  _objc_storeStrong(&local_50,param_1);
  lVar1 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    puVar2 = *(undefined **)PTR____NSDictionary0___02578288;
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = 1;
    local_48 = puVar2;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
               PTR_s_regularExpressionWithPattern_opt_0269ef10,
               &
               cf_var_s_s_s___s______s_S_______s___s____try_s____s_Object__keys_if_s____s_window____wcrApplyStorageSnapshot_
               ,0,0);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_50;
    lVar3 = local_50;
    local_68 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
    local_38 = 0;
    local_30 = 0;
    local_80 = 0;
    local_78 = lVar3;
    local_40 = lVar3;
    local_28 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_firstMatchInString_options_range_0269ef48,lVar1,0,0,lVar3);
    _objc_retainAutoreleasedReturnValue();
    local_70 = puVar2;
    if ((puVar2 == (undefined1 *)0x0) ||
       ((*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberOfRanges_0269ef18),
       lVar1 = local_50, puVar2 < (undefined1 *)((long)&MACH_HEADER.magic + 2))) {
      puVar2 = *(undefined **)PTR____NSDictionary0___02578288;
      (*(code *)PTR__objc_retain_02578638)();
      local_60 = 1;
      local_48 = puVar2;
    }
    else {
      puVar4 = local_70;
      puVar2 = PTR_s_rangeAtIndex__0269ef20;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_rangeAtIndex__0269ef20,1);
      local_98 = puVar4;
      local_90 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_substringWithRange__0269d138,puVar4,puVar2);
      _objc_retainAutoreleasedReturnValue();
      local_88 = lVar1;
      (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_dataUsingEncoding__026a12e8,4);
      _objc_retainAutoreleasedReturnValue();
      local_a0 = lVar1;
      if (lVar1 == 0) {
        local_140 = (undefined *)0x0;
      }
      else {
        local_140 = PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSJSONSerialization_026ce458,
                   PTR_s_JSONObjectWithData_options_error_026ca480,lVar1,0,0);
        _objc_retainAutoreleasedReturnValue();
        local_b0 = local_140;
      }
      local_b1 = lVar1 != 0;
      (*(code *)PTR__objc_retain_02578638)();
      local_a8 = local_140;
      if (local_b1) {
        (*(code *)PTR__objc_release_02578630)(local_b0);
      }
      puVar2 = local_a8;
      puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar5);
      if (((ulong)puVar2 & 1) == 0) {
        local_168 = *(undefined **)PTR____NSDictionary0___02578288;
      }
      else {
        local_168 = local_a8;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_48 = local_168;
      local_60 = 1;
      _objc_storeStrong(&local_a8);
      _objc_storeStrong(&local_a0,0);
      _objc_storeStrong(&local_88,0);
    }
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_50,0);
  _objc_autoreleaseReturnValue(local_48);
  return;
}

