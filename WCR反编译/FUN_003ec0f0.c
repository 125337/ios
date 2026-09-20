// FUN_003ec0f0 @ 003ec0f0

undefined1  [16] FUN_003ec0f0(undefined8 param_1)

{
  undefined1 auVar1 [16];
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong local_168;
  ulong local_160;
  ulong local_158;
  undefined *local_150;
  long local_148;
  undefined *local_140;
  ulong local_138 [3];
  long local_120;
  undefined4 local_118;
  ulong local_108;
  long local_100;
  undefined *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  ulong local_90;
  undefined8 local_88;
  undefined8 local_80;
  ulong local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long *local_28;
  
  local_108 = 0;
  _objc_storeStrong(&local_108,param_1);
  uVar3 = local_108;
  (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_length_0269cca0);
  if (uVar3 == 0) {
    local_48 = 0x7fffffffffffffff;
    local_50 = 0;
    local_40 = 0x7fffffffffffffff;
    local_38 = 0;
    local_100 = 0x7fffffffffffffff;
    local_f8 = (undefined *)0x0;
    local_118 = 1;
  }
  else {
    local_28 = &DAT_028ca518;
    local_30 = 0;
    _objc_storeStrong(&local_30,&PTR___NSConcreteGlobalBlock_0257cfe8);
    if (*local_28 + 1 != 0) {
      _dispatch_once(*local_28 + 1,local_28,local_30);
    }
    _objc_storeStrong(&local_30,0);
    uVar3 = local_108;
    lVar5 = DAT_028ca510;
    if (DAT_028ca510 == 0) {
      local_68 = 0x7fffffffffffffff;
      local_70 = 0;
      local_60 = 0x7fffffffffffffff;
      local_58 = 0;
      local_100 = 0x7fffffffffffffff;
      local_f8 = (undefined *)0x0;
      local_118 = 1;
    }
    else {
      uVar4 = local_108;
      (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_length_0269cca0);
      local_88 = 0;
      local_80 = 0;
      local_138[1] = 0;
      local_138[2] = uVar4;
      local_90 = uVar4;
      local_78 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (lVar5,PTR_s_firstMatchInString_options_range_0269ef48,uVar3,0,0,uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_108;
      local_120 = lVar5;
      if (lVar5 == 0) {
        local_a8 = 0x7fffffffffffffff;
        local_b0 = 0;
        local_a0 = 0x7fffffffffffffff;
        local_98 = 0;
        local_100 = 0x7fffffffffffffff;
        local_f8 = (undefined *)0x0;
        local_118 = 1;
      }
      else {
        puVar6 = PTR_s_range_0269ef50;
        (*(code *)PTR__objc_msgSend_02578628)();
        puVar7 = PTR_s_substringToIndex__0269d6c0;
        local_148 = lVar5;
        local_140 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_substringToIndex__0269d6c0,lVar5);
        _objc_retainAutoreleasedReturnValue();
        local_138[0] = uVar3;
        FUN_003ee16c();
        local_158 = uVar3;
        local_150 = puVar7;
        if (uVar3 == 0x7fffffffffffffff) {
          local_c8 = 0x7fffffffffffffff;
          local_d0 = 0;
          local_c0 = 0x7fffffffffffffff;
          local_b8 = 0;
          local_100 = 0x7fffffffffffffff;
          local_f8 = (undefined *)0x0;
          local_118 = 1;
        }
        else {
          uVar4 = local_138[0];
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_138[0],PTR_s_substringFromIndex__0269d120,puVar7 + uVar3);
          _objc_retainAutoreleasedReturnValue();
          local_160 = uVar4;
          for (local_168 = 0; uVar3 = local_160,
              (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_length_0269cca0),
              local_168 < uVar3; local_168 = local_168 + 1) {
            uVar3 = local_160;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_160,PTR_s_characterAtIndex__0269fa18,local_168);
            uVar2 = (uint)uVar3;
            FUN_003ed084();
            if ((uVar2 & 1) == 0) {
              local_e8 = 0x7fffffffffffffff;
              local_f0 = 0;
              local_e0 = 0x7fffffffffffffff;
              local_d8 = 0;
              local_100 = 0x7fffffffffffffff;
              local_f8 = (undefined *)0x0;
              goto LAB_003ec5e4;
            }
          }
          lVar5 = local_120;
          puVar6 = PTR_s_range_0269ef50;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_100 = lVar5;
          local_f8 = puVar6;
LAB_003ec5e4:
          local_118 = 1;
          _objc_storeStrong(&local_160,0);
        }
        _objc_storeStrong(local_138,0);
      }
      _objc_storeStrong(&local_120,0);
    }
  }
  _objc_storeStrong(&local_108,0);
  auVar1._8_8_ = local_f8;
  auVar1._0_8_ = local_100;
  return auVar1;
}

