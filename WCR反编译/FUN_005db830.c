// FUN_005db830 @ 005db830

undefined * FUN_005db830(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong local_110;
  undefined *local_108;
  long local_100;
  undefined *local_f8;
  undefined *local_f0;
  undefined *puStack_e8;
  undefined *local_d8;
  undefined *local_d0;
  undefined *puStack_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined4 local_b0;
  undefined *local_a0;
  undefined *local_98;
  ulong local_90;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined *local_58;
  long local_50;
  undefined *local_48;
  undefined *local_40;
  long local_38;
  undefined8 local_30;
  long *local_28;
  
  local_a0 = (undefined *)0x0;
  _objc_storeStrong(&local_a0,param_1);
  puVar2 = local_a0;
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_length_0269cca0);
  if (puVar2 == (undefined *)0x0) {
    local_98 = (undefined *)0x7fffffffffffffff;
    local_b0 = 1;
  }
  else {
    puVar2 = local_a0;
    puVar3 = PTR_s_rangeOfString_options__0269d118;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_a0,PTR_s_rangeOfString_options__0269d118,&cf_<appmsg,1);
    local_c0 = puVar2;
    local_b8 = puVar3;
    if (puVar2 == (undefined *)0x7fffffffffffffff) {
      local_98 = (undefined *)0x7fffffffffffffff;
      local_b0 = 1;
    }
    else {
      puVar2 = local_a0;
      puVar3 = PTR_s_rangeOfString_options__0269d118;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_a0,PTR_s_rangeOfString_options__0269d118,&cf_<_appmsg>,1);
      local_d0 = puVar2;
      puStack_c8 = puVar3;
      if (puVar2 == (undefined *)0x7fffffffffffffff) {
        local_98 = (undefined *)0x7fffffffffffffff;
        local_b0 = 1;
      }
      else {
        puVar1 = puVar2 + (long)puVar3;
        local_f0 = puVar2;
        puStack_e8 = puVar3;
        local_d8 = puVar1;
        local_80 = puVar2;
        local_78 = puVar3;
        if ((local_c0 < puVar1) &&
           (puVar2 = local_a0, (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_length_0269cca0)
           , puVar1 <= puVar2)) {
          local_100 = (long)local_d8 - (long)local_c0;
          local_48 = local_c0;
          local_40 = local_c0;
          local_108 = local_c0;
          puVar2 = local_a0;
          local_50 = local_100;
          local_38 = local_100;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_a0,PTR_s_substringWithRange__0269d138,local_c0,local_100);
          _objc_retainAutoreleasedReturnValue();
          local_28 = &DAT_028cb7e8;
          local_30 = 0;
          local_f8 = puVar2;
          _objc_storeStrong(&local_30,&PTR___NSConcreteGlobalBlock_0257e418);
          if (*local_28 + 1 != 0) {
            _dispatch_once(*local_28 + 1,local_28,local_30);
          }
          _objc_storeStrong(&local_30,0);
          puVar2 = local_f8;
          uVar4 = DAT_028cb7e0;
          puVar3 = local_f8;
          (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_length_0269cca0);
          local_68 = 0;
          local_60 = 0;
          local_70 = puVar3;
          local_58 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar4,PTR_s_firstMatchInString_options_range_0269ef48,puVar2,0,0,puVar3);
          _objc_retainAutoreleasedReturnValue();
          local_110 = uVar4;
          if ((uVar4 == 0) ||
             ((*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_numberOfRanges_0269ef18), uVar4 < 2)
             ) {
            local_98 = (undefined *)0x7fffffffffffffff;
          }
          else {
            uVar4 = local_110;
            puVar3 = PTR_s_rangeAtIndex__0269ef20;
            (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_rangeAtIndex__0269ef20,1);
            puVar2 = local_f8;
            local_90 = uVar4;
            local_88 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_length_0269cca0);
            if (puVar2 < puVar3 + uVar4) {
              local_98 = (undefined *)0x7fffffffffffffff;
            }
            else {
              puVar2 = local_f8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_f8,PTR_s_substringWithRange__0269d138,uVar4,puVar3);
              _objc_retainAutoreleasedReturnValue();
              puVar3 = puVar2;
              (*(code *)PTR__objc_msgSend_02578628)();
              local_98 = puVar3;
              (*(code *)PTR__objc_release_02578630)(puVar2);
            }
          }
          local_b0 = 1;
          _objc_storeStrong(&local_110);
          _objc_storeStrong(&local_f8,0);
        }
        else {
          local_98 = (undefined *)0x7fffffffffffffff;
          local_b0 = 1;
        }
      }
    }
  }
  _objc_storeStrong(&local_a0,0);
  return local_98;
}

