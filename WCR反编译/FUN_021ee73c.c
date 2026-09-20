// FUN_021ee73c @ 021ee73c

/* WARNING: Removing unreachable block (ram,0x021ee8bc) */
/* WARNING: Removing unreachable block (ram,0x021eebd4) */
/* WARNING: Type propagation algorithm not settling */

undefined1  [16] FUN_021ee73c(long param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  long local_240;
  long local_238;
  long local_230;
  ulong local_200;
  long local_170;
  long local_168;
  long local_160;
  long local_140;
  long local_138;
  long local_e0 [3];
  long local_c8;
  ulong local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  char local_80;
  undefined8 local_78;
  long local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50;
  long local_48;
  long local_40;
  long local_38;
  
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_c8 = 0;
  if (param_1 < 1) {
    local_140 = 0;
    local_138 = 0;
  }
  else if (param_1 == 1) {
    local_140 = 1;
    local_138 = 1;
  }
  else if (param_1 < 9) {
    local_e0[1] = 4;
    local_e0[0] = param_1;
    __ss3minyxx_xtSLRzlF
              (local_e0 + 2,local_e0 + 1,local_e0,PTR___sSiN_025789d8,PTR___sSiSLsWP_025789e8);
    dVar8 = (double)param_1 / (double)local_e0[2];
    _ceil();
    if (0x7fe < ((ulong)dVar8 >> 0x34 & 0x7ff)) {
      __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_A2HSus6UInt32VtF
                ("Fatal error",0xb,2,
                 "Double value cannot be converted to Int because it is either infinite or NaN",0x4c
                 ,2,"Swift/arm64e-apple-ios.swiftinterface",0x25,2);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x21ee954);
      (*pcVar3)();
    }
    if (dVar8 <= -9.223372036854778e+18) {
      __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_A2HSus6UInt32VtF
                ("Fatal error",0xb,2,
                 "Double value cannot be converted to Int because the result would be less than Int.min"
                 ,0x55,2,"Swift/arm64e-apple-ios.swiftinterface",0x25,2);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x21ee9bc);
      (*pcVar3)();
    }
    if (9.223372036854776e+18 <= dVar8) {
      __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_A2HSus6UInt32VtF
                ("Fatal error",0xb,2,
                 "Double value cannot be converted to Int because the result would be greater than Int.max"
                 ,0x58,2,"Swift/arm64e-apple-ios.swiftinterface",0x25,2);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x21eea20);
      (*pcVar3)();
    }
    local_140 = (long)dVar8;
    local_138 = local_e0[2];
  }
  else {
    local_38 = 1;
    local_48 = 0x7fffffffffffffff;
    local_40 = param_1;
    if (param_1 < 1) {
      __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_A2HSus6UInt32VtF
                ("Fatal error",0xb,2,"Range requires lowerBound <= upperBound",0x27,2,
                 "Swift/arm64e-apple-ios.swiftinterface",0x25,2);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x21eeab4);
      (*pcVar3)();
    }
    local_78 = 1;
    puVar4 = &DAT_028c71e8;
    local_70 = param_1;
    FUN_021c77d4(&DAT_028c71e8,&DAT_0233bde0);
    puVar5 = puVar4;
    FUN_021fb2d8();
    __sSlss16IndexingIteratorVyxG0B0RtzrlE04makeB0ACyF(&local_68,puVar4,puVar5);
    local_168 = 1;
    local_160 = 0x7fffffffffffffff;
    local_170 = param_1;
    while( true ) {
      FUN_021c77d4(&DAT_028c71f8,&DAT_0233b1b0);
      __ss16IndexingIteratorV4next7ElementQzSgyF(&local_88);
      local_238 = local_88;
      if (local_80 == '\x01') break;
      local_90 = local_88;
      dVar8 = (double)param_1 / (double)local_88;
      _ceil();
      if (0x7fe < ((ulong)dVar8 >> 0x34 & 0x7ff)) {
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_A2HSus6UInt32VtF
                  ("Fatal error",0xb,2,
                   "Double value cannot be converted to Int because it is either infinite or NaN",
                   0x4c,2,"Swift/arm64e-apple-ios.swiftinterface",0x25,2);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x21eec6c);
        (*pcVar3)();
      }
      if (dVar8 <= -9.223372036854778e+18) {
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_A2HSus6UInt32VtF
                  ("Fatal error",0xb,2,
                   "Double value cannot be converted to Int because the result would be less than Int.min"
                   ,0x55,2,"Swift/arm64e-apple-ios.swiftinterface",0x25,2);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x21eecd4);
        (*pcVar3)();
      }
      if (9.223372036854776e+18 <= dVar8) {
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_A2HSus6UInt32VtF
                  ("Fatal error",0xb,2,
                   "Double value cannot be converted to Int because the result would be greater than Int.max"
                   ,0x58,2,"Swift/arm64e-apple-ios.swiftinterface",0x25,2);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x21eed38);
        (*pcVar3)();
      }
      local_240 = (long)dVar8;
      lVar6 = local_238 * local_240;
      local_98 = local_240;
      if (SUB168(SEXT816(local_238) * SEXT816(local_240),8) != lVar6 >> 0x3f) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x21eef54);
        (*pcVar3)();
      }
      lVar1 = lVar6 - param_1;
      if (SBORROW8(lVar6,param_1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x21eef58);
        (*pcVar3)();
      }
      local_a0 = lVar1;
      if (SBORROW8(local_238,local_240)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x21eef5c);
        (*pcVar3)();
      }
      local_b0 = local_238 - local_240;
      __ss3absyxxSLRzs13SignedNumericRzlF
                (&local_a8,&local_b0,PTR___sSiN_025789d8,PTR___sSiSLsWP_025789e8,
                 PTR___sSis13SignedNumericsWP_02578a10);
      local_b8 = local_a8;
      local_200 = (ulong)(local_240 < local_238);
      local_c0 = local_200;
      lVar6 = local_a8 * 10;
      if (SUB168(SEXT816(local_a8) * SEXT816(10),8) != lVar6 >> 0x3f) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x21eef60);
        (*pcVar3)();
      }
      lVar7 = lVar1 * 3;
      if (SUB168(SEXT816(lVar1) * SEXT816(3),8) != lVar7 >> 0x3f) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x21eef64);
        (*pcVar3)();
      }
      if (SCARRY8(lVar6,lVar7)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x21eef68);
        (*pcVar3)();
      }
      lVar1 = lVar6 + lVar7 + local_200;
      if (SCARRY8(lVar6 + lVar7,local_200)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x21eef6c);
        (*pcVar3)();
      }
      if (lVar1 < local_160) {
        local_38 = local_238;
        local_230 = lVar1;
        local_48 = lVar1;
        local_40 = local_240;
      }
      else {
        local_240 = local_170;
        local_238 = local_168;
        local_230 = local_160;
      }
      local_168 = local_238;
      local_160 = local_230;
      local_170 = local_240;
      local_c8 = lVar1;
    }
    local_140 = local_168;
    local_138 = local_170;
  }
  auVar2._8_8_ = local_138;
  auVar2._0_8_ = local_140;
  return auVar2;
}

