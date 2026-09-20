// FUN_008eb9ec @ 008eb9ec

undefined * FUN_008eb9ec(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *local_f8;
  undefined1 *local_f0;
  undefined *local_e8;
  long local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined *puStack_c8;
  undefined *local_b8;
  undefined *local_b0;
  undefined *puStack_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined4 local_90;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined *local_48;
  long local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_80 = (undefined *)0x0;
  _objc_storeStrong(&local_80,param_1);
  puVar2 = local_80;
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0);
  if (puVar2 == (undefined *)0x0) {
    local_78 = (undefined *)0x7fffffffffffffff;
    local_90 = 1;
  }
  else {
    puVar2 = local_80;
    puVar3 = PTR_s_rangeOfString_options__0269d118;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_80,PTR_s_rangeOfString_options__0269d118,&cf_<appmsg,1);
    local_a0 = puVar2;
    local_98 = puVar3;
    if (puVar2 == (undefined *)0x7fffffffffffffff) {
      local_78 = (undefined *)0x7fffffffffffffff;
      local_90 = 1;
    }
    else {
      puVar2 = local_80;
      puVar3 = PTR_s_rangeOfString_options__0269d118;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_80,PTR_s_rangeOfString_options__0269d118,&cf_<_appmsg>,1);
      local_b0 = puVar2;
      puStack_a8 = puVar3;
      if (puVar2 == (undefined *)0x7fffffffffffffff) {
        local_78 = (undefined *)0x7fffffffffffffff;
        local_90 = 1;
      }
      else {
        puVar4 = puVar2 + (long)puVar3;
        local_d0 = puVar2;
        puStack_c8 = puVar3;
        local_b8 = puVar4;
        local_70 = puVar2;
        local_68 = puVar3;
        if ((local_a0 < puVar4) &&
           (puVar2 = local_80, (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0)
           , puVar4 <= puVar2)) {
          local_e0 = (long)local_b8 - (long)local_a0;
          local_38 = local_a0;
          local_30 = local_a0;
          local_e8 = local_a0;
          puVar2 = local_80;
          local_40 = local_e0;
          local_28 = local_e0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_80,PTR_s_substringWithRange__0269d138,local_a0,local_e0);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
          local_d8 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
                     PTR_s_regularExpressionWithPattern_opt_0269ef10,&cf_<type>_s___d___s_<_type>,1,
                     0);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = local_d8;
          puVar4 = local_d8;
          local_f0 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0);
          local_58 = 0;
          local_50 = 0;
          local_60 = puVar4;
          local_48 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_firstMatchInString_options_range_0269ef48,puVar2,0,0,puVar4);
          _objc_retainAutoreleasedReturnValue();
          bVar1 = true;
          local_f8 = puVar3;
          if (puVar3 != (undefined1 *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_numberOfRanges_0269ef18);
            bVar1 = true;
            if ((undefined1 *)((long)&MACH_HEADER.magic + 1) < puVar3) {
              puVar5 = local_f8;
              (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_rangeAtIndex__0269ef20,1);
              bVar1 = puVar5 == (undefined1 *)0x7fffffffffffffff;
            }
          }
          puVar2 = local_d8;
          if (bVar1) {
            local_78 = (undefined *)0x7fffffffffffffff;
          }
          else {
            puVar5 = local_f8;
            puVar3 = PTR_s_rangeAtIndex__0269ef20;
            (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_rangeAtIndex__0269ef20,1);
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar2,PTR_s_substringWithRange__0269d138,puVar5,puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_78 = puVar3;
            (*(code *)PTR__objc_release_02578630)(puVar2);
          }
          local_90 = 1;
          _objc_storeStrong(&local_f8);
          _objc_storeStrong(&local_f0,0);
          _objc_storeStrong(&local_d8,0);
        }
        else {
          local_78 = (undefined *)0x7fffffffffffffff;
          local_90 = 1;
        }
      }
    }
  }
  _objc_storeStrong(&local_80,0);
  return local_78;
}

