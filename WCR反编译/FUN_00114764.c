// FUN_00114764 @ 00114764

void FUN_00114764(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  cfstringStruct *pcVar2;
  long lVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  undefined *puVar7;
  undefined8 in_x6;
  undefined8 in_x7;
  cfstringStruct *local_220;
  undefined *local_e8;
  cfstringStruct *local_e0;
  long local_d8;
  cfstringStruct *local_d0;
  undefined *local_c8;
  cfstringStruct *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined4 local_a8;
  long local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  long local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  long local_68;
  long local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  long local_48;
  long local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_90 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_90,param_1);
  local_98 = 0;
  _objc_storeStrong(&local_98,param_2);
  pcVar2 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0);
  if ((pcVar2 == (cfstringStruct *)0x0) ||
     (lVar3 = local_98, (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_length_0269cca0),
     lVar3 == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_88 = &cf___;
    local_a8 = 1;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    lVar3 = local_98;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_<__);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = local_90;
    puVar7 = PTR_s_rangeOfString__0269d838;
    local_b0 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_rangeOfString__0269d838,puVar4);
    pcVar2 = local_90;
    local_c0 = pcVar5;
    local_b8 = puVar7;
    if (pcVar5 == (cfstringStruct *)0x7fffffffffffffff) {
      (*(code *)PTR__objc_retain_02578638)();
      local_88 = &cf___;
      local_a8 = 1;
    }
    else {
      pcVar6 = local_90;
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0);
      local_d8 = (long)pcVar6 - (long)local_c0;
      puVar4 = PTR_s_rangeOfString_options_range__0269d130;
      local_e0 = pcVar5;
      local_40 = local_d8;
      local_38 = pcVar5;
      local_30 = pcVar5;
      local_28 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_rangeOfString_options_range__0269d130,&cf_>,0,pcVar5,local_d8,in_x6,
                 in_x7,lVar3);
      local_d0 = pcVar2;
      local_c8 = puVar4;
      if (pcVar2 == (cfstringStruct *)0x7fffffffffffffff) {
        (*(code *)PTR__objc_retain_02578638)();
        local_88 = &cf___;
        local_a8 = 1;
      }
      else {
        puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
        lVar3 = local_98;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_<___>);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_90;
        puVar1 = (undefined1 *)((long)&local_d0->field0_0x0 + 1);
        pcVar5 = local_90;
        local_e8 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0);
        local_60 = (long)pcVar5 + (-1 - (long)local_d0);
        local_58 = puVar1;
        local_50 = puVar1;
        local_48 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_rangeOfString_options_range__0269d130,puVar4,0,puVar1,local_60,in_x6
                   ,in_x7,lVar3);
        if (pcVar2 == (cfstringStruct *)0x7fffffffffffffff) {
          (*(code *)PTR__objc_retain_02578638)();
          local_88 = &cf___;
        }
        else {
          local_78 = (undefined1 *)((long)&local_d0->field0_0x0 + 1);
          local_80 = (long)pcVar2 - (long)((long)&local_d0->field0_0x0 + 1);
          pcVar2 = local_90;
          local_70 = local_78;
          local_68 = local_80;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_90,PTR_s_substringWithRange__0269d138,local_78,local_80);
          _objc_retainAutoreleasedReturnValue();
          local_220 = pcVar2;
          if (pcVar2 == (cfstringStruct *)0x0) {
            local_220 = &cf___;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_88 = local_220;
          (*(code *)PTR__objc_release_02578630)(pcVar2);
        }
        local_a8 = 1;
        _objc_storeStrong(&local_e8,0);
      }
    }
    _objc_storeStrong(&local_b0,0);
  }
  _objc_storeStrong(&local_98);
  _objc_storeStrong(&local_90,0);
  _objc_autoreleaseReturnValue(local_88);
  return;
}

