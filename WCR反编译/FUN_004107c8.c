// FUN_004107c8 @ 004107c8

void FUN_004107c8(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *local_98;
  undefined8 local_90;
  undefined1 *local_88;
  long local_80;
  undefined4 local_74;
  long local_70;
  undefined *local_68;
  long local_50;
  long local_48;
  long local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  local_50 = 0;
  _objc_storeStrong(&local_50,param_1);
  lVar2 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  bVar1 = true;
  if (lVar2 != 0) {
    lVar2 = local_50;
    puVar3 = PTR_s_rangeOfString_options__0269d118;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_rangeOfString_options__0269d118,&cf_<pushcontent,1);
    bVar1 = lVar2 == 0x7fffffffffffffff;
    local_70 = lVar2;
    local_68 = puVar3;
  }
  if (bVar1) {
    local_48 = 0;
    local_74 = 1;
  }
  else {
    local_80 = 0;
    local_90 = 0;
    puVar3 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
               PTR_s_regularExpressionWithPattern_opt_0269ef10,&cf_body_s___s__________,1,&local_90)
    ;
    _objc_retainAutoreleasedReturnValue();
    _objc_storeStrong(&local_80,local_90);
    lVar2 = local_50;
    local_88 = puVar3;
    if ((local_80 == 0) && (puVar3 != (undefined1 *)0x0)) {
      lVar4 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
      local_38 = 0;
      local_30 = 0;
      local_40 = lVar4;
      local_28 = lVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_firstMatchInString_options_range_0269ef48,lVar2,0,0,lVar4);
      _objc_retainAutoreleasedReturnValue();
      local_98 = puVar3;
      if ((puVar3 == (undefined1 *)0x0) ||
         ((*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_numberOfRanges_0269ef18),
         puVar3 < (undefined1 *)((long)&MACH_HEADER.magic + 2))) {
        local_48 = 0;
      }
      else {
        puVar5 = local_98;
        puVar3 = PTR_s_rangeAtIndex__0269ef20;
        (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_rangeAtIndex__0269ef20,1);
        if (puVar5 == (undefined1 *)0x7fffffffffffffff) {
          local_48 = 0;
        }
        else {
          lVar2 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_50,PTR_s_substringWithRange__0269d138,puVar5,puVar3);
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar2;
          FUN_0040494c();
          _objc_retainAutoreleasedReturnValue();
          local_48 = lVar4;
          (*(code *)PTR__objc_release_02578630)(lVar2);
        }
      }
      local_74 = 1;
      _objc_storeStrong(&local_98,0);
    }
    else {
      local_48 = 0;
      local_74 = 1;
    }
    _objc_storeStrong(&local_88);
    _objc_storeStrong(&local_80,0);
  }
  _objc_storeStrong(&local_50,0);
  _objc_autoreleaseReturnValue(local_48);
  return;
}

