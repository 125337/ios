// FUN_002c17c4 @ 002c17c4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_002c17c4(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  ulong local_330;
  ulong local_2c8;
  undefined *local_1e0;
  ulong local_1d8;
  ulong local_1d0;
  ulong local_1c8;
  double local_1c0;
  double dStack_1b8;
  double local_1b0;
  double dStack_1a8;
  double local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  double local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  double local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  double local_140;
  double dStack_138;
  double local_130;
  double dStack_128;
  undefined *local_120;
  undefined *local_118;
  ulong local_110;
  ulong local_108;
  ulong local_100;
  ulong local_f8;
  ulong local_f0;
  undefined *local_e8;
  ulong local_e0;
  byte local_d3;
  byte local_d2;
  byte local_d1;
  double local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  double local_a8;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  undefined4 local_7c;
  ulong local_78;
  ulong local_70;
  ulong local_68 [3];
  ulong local_50;
  ulong local_48;
  double local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_48 = 0;
  local_40 = param_1;
  uStack_38 = param_2;
  local_30 = param_3;
  uStack_28 = param_4;
  _objc_storeStrong(&local_48,param_5);
  uVar1 = local_48;
  FUN_002ae960(local_48,&cf_MMTabBarItemView);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_48;
  local_50 = uVar1;
  FUN_002ae960(local_48,&cf_UITabBarButton);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_48;
  local_68[0] = uVar2;
  FUN_002ae1e8();
  _objc_retainAutoreleasedReturnValue();
  local_70 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_count_0269cfe0);
  local_78 = uVar1;
  if (uVar1 == 0) {
    local_7c = 1;
  }
  else {
    local_90 = 1;
    uVar1 = local_48;
    FUN_002adfd4();
    local_2c8 = uVar1;
    if (uVar1 <= local_90) {
      local_2c8 = local_90;
    }
    local_a0 = local_2c8;
    local_88 = local_2c8;
    uStack_c8 = uStack_38;
    local_d0 = local_40;
    uStack_b8 = uStack_28;
    local_c0 = local_30;
    dVar8 = local_40;
    local_98 = uVar1;
    _CGRectGetWidth(local_40,uStack_38,local_30,uStack_28);
    local_a8 = (double)NEON_ucvtf(local_88);
    local_a8 = dVar8 / local_a8;
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_d1 = (byte)puVar4;
    uVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0);
    local_d2 = uVar1 != 0;
    FUN_002ae49c();
    local_d3 = (byte)uVar1;
    uVar1 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_count_0269cfe0);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    local_e0 = uVar1 / 2;
    uVar1 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_dictionaryWithCapacity__026a1ad0,uVar1);
    _objc_retainAutoreleasedReturnValue();
    local_e8 = puVar3;
    for (local_f0 = 0; uVar1 = local_f0, uVar2 = local_70,
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_count_0269cfe0), uVar1 < uVar2;
        local_f0 = local_f0 + 1) {
      if (((local_d3 & 1) == 0) || (local_f0 < local_e0)) {
        local_330 = local_f0;
      }
      else {
        local_330 = local_f0 + 1;
      }
      local_f8 = local_330;
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,
                 local_330);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_e8;
      uVar1 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_70,PTR_s_objectAtIndexedSubscript__0269cc78,local_f0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_setObject_forKeyedSubscript__0269d248,puVar4);
      (*(code *)PTR__objc_release_02578630)(uVar1);
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
    for (local_100 = 0; uVar1 = local_100, uVar2 = local_50,
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0), uVar1 < uVar2;
        local_100 = local_100 + 1) {
      uVar1 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_objectAtIndexedSubscript__0269cc78,local_100);
      _objc_retainAutoreleasedReturnValue();
      local_108 = uVar1;
      FUN_002b2754(uVar1,local_100);
      local_110 = uVar1;
      FUN_002ae800();
      puVar3 = local_e8;
      if ((uVar1 & 1) == 0) {
        puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,
                   local_110);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_objectForKeyedSubscript__0269d098);
        _objc_retainAutoreleasedReturnValue();
        local_118 = puVar3;
        (*(code *)PTR__objc_release_02578630)(puVar4);
        if (local_118 == (undefined *)0x0) {
          local_7c = 7;
        }
        else {
          puVar3 = local_118;
          (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_unsignedIntegerValue_026cabb8);
          local_120 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_setHidden__026ca970,0);
          (*(code *)PTR__objc_msgSend_02578628)
                    (0x3ff0000000000000,local_108,PTR_s_setAlpha__026ca860);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_108,PTR_s_setUserInteractionEnabled__026caad8,0);
          uStack_158 = uStack_38;
          local_160 = local_40;
          uStack_148 = uStack_28;
          local_150 = local_30;
          dVar5 = local_40;
          _CGRectGetMinX(local_40,uStack_38,local_30,uStack_28);
          dVar8 = (double)NEON_ucvtf(local_120);
          dVar5 = dVar5 + dVar8 * local_a8;
          uStack_178 = uStack_38;
          local_180 = local_40;
          uStack_168 = uStack_28;
          local_170 = local_30;
          dVar6 = local_40;
          _CGRectGetMinY(local_40,uStack_38,local_30,uStack_28);
          dVar8 = local_a8;
          uStack_198 = uStack_38;
          local_1a0 = local_40;
          uStack_188 = uStack_28;
          local_190 = local_30;
          dVar7 = local_40;
          _CGRectGetHeight(local_40,uStack_38,local_30,uStack_28);
          FUN_002adf88();
          local_1c0 = dVar5;
          dStack_1b8 = dVar6;
          local_1b0 = dVar8;
          dStack_1a8 = dVar7;
          local_140 = dVar5;
          dStack_138 = dVar6;
          local_130 = dVar8;
          dStack_128 = dVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (dVar5,dVar6,dVar8,dVar7,local_108,PTR_s_setFrame__026ca960);
          FUN_002c76a4(local_108,local_d1 & 1);
          local_7c = 0;
        }
        _objc_storeStrong(&local_118,0);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_setHidden__026ca970,1);
        (*(code *)PTR__objc_msgSend_02578628)(0,local_108,PTR_s_setAlpha__026ca860);
        (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_setUserInteractionEnabled__026caad8,0)
        ;
        local_7c = 7;
      }
      _objc_storeStrong(&local_108,0);
    }
    for (local_1c8 = 0; uVar1 = local_1c8, uVar2 = local_68[0],
        (*(code *)PTR__objc_msgSend_02578628)(local_68[0],PTR_s_count_0269cfe0), uVar1 < uVar2;
        local_1c8 = local_1c8 + 1) {
      uVar1 = local_68[0];
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68[0],PTR_s_objectAtIndexedSubscript__0269cc78,local_1c8);
      _objc_retainAutoreleasedReturnValue();
      local_1d0 = uVar1;
      FUN_002b2754(uVar1,local_1c8);
      local_1d8 = uVar1;
      FUN_002ae800();
      puVar3 = local_e8;
      if ((uVar1 & 1) == 0) {
        puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,
                   local_1d8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_objectForKeyedSubscript__0269d098);
        _objc_retainAutoreleasedReturnValue();
        local_1e0 = puVar3;
        (*(code *)PTR__objc_release_02578630)(puVar4);
        if (local_1e0 == (undefined *)0x0) {
          local_7c = 10;
        }
        else {
          puVar3 = local_1e0;
          (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_unsignedIntegerValue_026cabb8);
          (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_setHidden__026ca970,0);
          (*(code *)PTR__objc_msgSend_02578628)
                    (0x3ff0000000000000,local_1d0,PTR_s_setAlpha__026ca860);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1d0,PTR_s_setUserInteractionEnabled__026caad8,1);
          dVar5 = local_40;
          _CGRectGetMinX(local_40,uStack_38,local_30,uStack_28);
          dVar8 = (double)NEON_ucvtf(puVar3);
          dVar5 = dVar5 + dVar8 * local_a8;
          dVar6 = local_40;
          _CGRectGetMinY(local_40,uStack_38,local_30,uStack_28);
          dVar8 = local_a8;
          dVar7 = local_40;
          _CGRectGetHeight(local_40,uStack_38,local_30,uStack_28);
          FUN_002adf88();
          (*(code *)PTR__objc_msgSend_02578628)
                    (dVar5,dVar6,dVar8,dVar7,local_1d0,PTR_s_setFrame__026ca960);
          FUN_002c76a4(local_1d0,local_d1 & 1);
          local_7c = 0;
        }
        _objc_storeStrong(&local_1e0,0);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_setHidden__026ca970,1);
        (*(code *)PTR__objc_msgSend_02578628)(0,local_1d0,PTR_s_setAlpha__026ca860);
        (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_setUserInteractionEnabled__026caad8,0)
        ;
        local_7c = 10;
      }
      _objc_storeStrong(&local_1d0,0);
    }
    FUN_002c7f90(local_68[0],local_d1 & 1,local_d2 & 1,0);
    _objc_storeStrong(&local_e8,0);
    local_7c = 0;
  }
  _objc_storeStrong(&local_70);
  _objc_storeStrong(local_68,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  return;
}

