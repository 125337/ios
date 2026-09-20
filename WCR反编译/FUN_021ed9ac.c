// FUN_021ed9ac @ 021ed9ac

double FUN_021ed9ac(double param_1,double param_2,double param_3,double param_4,undefined8 param_5)

{
  double dVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 unaff_x20;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double local_3a8;
  double local_380;
  double local_378;
  double local_368;
  double local_358;
  double local_350;
  double local_340;
  undefined8 local_238;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  char local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  double local_118;
  double local_110;
  undefined1 local_108 [16];
  double local_f8;
  double local_f0;
  double local_e8;
  undefined1 local_e0 [16];
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  
  dVar1 = DAT_02323db0;
  local_b0 = 0.0;
  local_110 = 0.0;
  local_118 = 0.0;
  local_128 = 0;
  local_120 = 0;
  local_148 = 0.0;
  local_150 = 0.0;
  local_158 = 0.0;
  local_160 = 0.0;
  local_188 = 0.0;
  local_1a8 = 0.0;
  dVar5 = param_1;
  dVar6 = param_2;
  dVar7 = param_3;
  dVar8 = param_4;
  (*(code *)PTR__objc_retain_02578638)();
  FUN_02222060(unaff_x20,local_238);
  local_78 = dVar5;
  local_70 = dVar6;
  local_68 = dVar7;
  local_60 = dVar8;
  (*(code *)PTR__objc_release_02578630)(unaff_x20);
  FUN_021b0958();
  puVar2 = PTR__OBJC_CLASS___UIScreen_026cdf70;
  local_80 = dVar5;
  _objc_opt_self();
  FUN_02222a00();
  _objc_retainAutoreleasedReturnValue();
  FUN_02222060();
  local_a0 = dVar5;
  local_98 = dVar6;
  local_90 = dVar7;
  local_88 = dVar8;
  (*(code *)PTR__objc_release_02578630)();
  FUN_021b0958();
  local_a8 = dVar5;
  FUN_021c8058();
  puVar4 = PTR___s12CoreGraphics7CGFloatVN_02578ba0;
  __ss3maxyxx_xtSLRzlF(&local_58,&local_80,&local_a8);
  local_b0 = local_58;
  dVar5 = local_58;
  (*(code *)PTR__objc_retain_02578638)(unaff_x20);
  FUN_02222060(unaff_x20,local_238);
  local_d0 = dVar6;
  local_c8 = dVar7;
  local_c0 = dVar8;
  (*(code *)PTR__objc_release_02578630)(unaff_x20);
  FUN_021b0994();
  puVar3 = PTR__OBJC_CLASS___UIScreen_026cdf70;
  _objc_opt_self();
  FUN_02222a00();
  _objc_retainAutoreleasedReturnValue();
  FUN_02222060();
  local_f8 = dVar6;
  local_f0 = dVar7;
  local_e8 = dVar8;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  FUN_021b0994(dVar5,dVar6,dVar7,dVar8);
  __ss3maxyxx_xtSLRzlF(&local_b8,local_e0,local_108,puVar4,puVar2);
  local_110 = local_b8;
  local_118 = 1.7976931348623157e+308;
  _swift_bridgeObjectRetain(param_5);
  puVar4 = &DAT_028c71d0;
  local_130 = param_5;
  FUN_021c77d4(&DAT_028c71d0,&DAT_0233b198);
  puVar3 = puVar4;
  FUN_021fb23c();
  __sSlss16IndexingIteratorVyxG0B0RtzrlE04makeB0ACyF(&local_128,puVar4,puVar3);
  local_1c8 = 1.7976931348623157e+308;
  while( true ) {
    puVar4 = &DAT_028c71e0;
    FUN_021c77d4(&DAT_028c71e0,&DAT_0233b1a0);
    __ss16IndexingIteratorV4next7ElementQzSgyF(&local_140);
    if (local_138 == '\x01') break;
    local_148 = local_140;
    local_368 = ((param_3 + local_140) * DAT_02323cb0) / 180.0;
    local_340 = local_368;
    local_150 = local_368;
    _cos();
    local_158 = local_340;
    _sin();
    local_170 = local_340;
    local_160 = local_368;
    FUN_021c9b6c();
    __ss3absyxxSLRzs13SignedNumericRzlF
              (&local_168,&local_170,PTR___s12CoreGraphics7CGFloatVN_02578ba0,puVar2);
    if (local_168 <= dVar1) {
      local_358 = local_1c8;
    }
    else {
      dVar5 = param_4;
      if (0.0 < local_340) {
        dVar5 = local_58 - param_4;
      }
      local_340 = (dVar5 - param_1) / local_340;
      local_1a8 = local_340;
      if (local_340 <= 0.0) {
        local_350 = local_1c8;
      }
      else {
        local_1b8 = local_1c8;
        local_1c0 = local_340;
        __ss3minyxx_xtSLRzlF
                  (&local_1b0,&local_1b8,&local_1c0,PTR___s12CoreGraphics7CGFloatVN_02578ba0,puVar2)
        ;
        local_118 = local_1b0;
        local_350 = local_1b0;
      }
      local_358 = local_350;
    }
    local_180 = local_368;
    __ss3absyxxSLRzs13SignedNumericRzlF
              (&local_178,&local_180,PTR___s12CoreGraphics7CGFloatVN_02578ba0,puVar2,puVar4);
    if (local_178 <= dVar1) {
      local_380 = local_358;
    }
    else {
      dVar5 = param_4;
      if (0.0 < local_368) {
        dVar5 = local_b8 - param_4;
      }
      local_368 = (dVar5 - param_2) / local_368;
      local_188 = local_368;
      if (local_368 <= 0.0) {
        local_378 = local_358;
      }
      else {
        local_198 = local_358;
        local_1a0 = local_368;
        __ss3minyxx_xtSLRzlF
                  (&local_190,&local_198,&local_1a0,PTR___s12CoreGraphics7CGFloatVN_02578ba0,puVar2)
        ;
        local_118 = local_190;
        local_378 = local_190;
      }
      local_380 = local_378;
    }
    local_1c8 = local_380;
  }
  FUN_021fb2b0(0,&local_128);
  if (local_1c8 != 1.7976931348623157e+308 && 36.0 <= local_1c8) {
    local_3a8 = local_1c8;
  }
  else {
    local_3a8 = 36.0;
  }
  return local_3a8;
}

