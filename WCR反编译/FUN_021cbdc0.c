// FUN_021cbdc0 @ 021cbdc0

void FUN_021cbdc0(undefined8 param_1,long param_2,ulong param_3,ulong param_4,ulong param_5,
                 ulong param_6,long param_7,ulong param_8,ulong param_9,ulong param_10)

{
  code *pcVar1;
  uint uVar2;
  undefined1 auStack_90 [16];
  code *local_80;
  undefined1 *local_78;
  undefined1 auStack_70 [16];
  long local_60;
  ulong local_58;
  long local_50;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  
  local_38 = param_10;
  local_60 = param_7;
  local_58 = param_8;
  local_50 = param_2;
  local_48 = param_3;
  local_40 = param_9;
  if ((param_6 & 1) == 0) {
    if (param_4 == 0) {
      __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_A2HSus6UInt32VtF
                ("Fatal error",0xb,2,"Unexpectedly found nil while unwrapping an Optional value",
                 0x39,2,"Swift/arm64e-apple-ios.swiftinterface",0x25);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x21cc500);
      (*pcVar1)();
    }
    if ((long)param_5 < 0) {
      __ss18_fatalErrorMessage__4file4line5flagss5NeverOs12StaticStringV_A2HSus6UInt32VtF
                ("Fatal error",0xb,2,"UnsafeBufferPointer with negative count",0x27,2,
                 "Swift/arm64e-apple-ios.swiftinterface",0x25);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x21cc074);
      (*pcVar1)();
    }
    if (param_7 == 0) {
      __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_A2HSus6UInt32VtF
                ("Fatal error",0xb,2,"Unexpectedly found nil while unwrapping an Optional value",
                 0x39,2,"Swift/arm64e-apple-ios.swiftinterface",0x25);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x21cc0d8);
      (*pcVar1)();
    }
    if ((long)param_8 < -0x80000000) {
      __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_A2HSus6UInt32VtF
                ("Fatal error",0xb,2,"Not enough bits to represent a signed value",0x2b,2,
                 "Swift/arm64e-apple-ios.swiftinterface",0x25);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x21cc140);
      (*pcVar1)();
    }
    if (0x7fffffff < (long)param_8) {
      __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_A2HSus6UInt32VtF
                ("Fatal error",0xb,2,"Not enough bits to represent the passed value",0x2d,2,
                 "Swift/arm64e-apple-ios.swiftinterface",0x25);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x21cc1a0);
      (*pcVar1)();
    }
    if (param_2 == 0) {
      __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_A2HSus6UInt32VtF
                ("Fatal error",0xb,2,"Unexpectedly found nil while unwrapping an Optional value",
                 0x39,2,"Swift/arm64e-apple-ios.swiftinterface",0x25);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x21cc20c);
      (*pcVar1)();
    }
    if ((long)param_3 < -0x80000000) {
      __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_A2HSus6UInt32VtF
                ("Fatal error",0xb,2,"Not enough bits to represent a signed value",0x2b,2,
                 "Swift/arm64e-apple-ios.swiftinterface",0x25);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x21cc274);
      (*pcVar1)();
    }
    if (0x7fffffff < (long)param_3) {
      __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_A2HSus6UInt32VtF
                ("Fatal error",0xb,2,"Not enough bits to represent the passed value",0x2d,2,
                 "Swift/arm64e-apple-ios.swiftinterface",0x25);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x21cc2d4);
      (*pcVar1)();
    }
    if ((long)param_5 < -0x80000000) {
      __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_A2HSus6UInt32VtF
                ("Fatal error",0xb,2,"Not enough bits to represent a signed value",0x2b,2,
                 "Swift/arm64e-apple-ios.swiftinterface",0x25);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x21cc33c);
      (*pcVar1)();
    }
    if (0x7fffffff < (long)param_5) {
      __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_A2HSus6UInt32VtF
                ("Fatal error",0xb,2,"Not enough bits to represent the passed value",0x2d,2,
                 "Swift/arm64e-apple-ios.swiftinterface",0x25);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x21cc39c);
      (*pcVar1)();
    }
    if (0xffffffff < param_9) {
      __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_A2HSus6UInt32VtF
                ("Fatal error",0xb,2,"Not enough bits to represent the passed value",0x2d,2,
                 "Swift/arm64e-apple-ios.swiftinterface",0x25);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x21cc404);
      (*pcVar1)();
    }
    if (0xffffffff < param_10) {
      __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_A2HSus6UInt32VtF
                ("Fatal error",0xb,2,"Not enough bits to represent the passed value",0x2d,2,
                 "Swift/arm64e-apple-ios.swiftinterface",0x25);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x21cc46c);
      (*pcVar1)();
    }
    __swift_stdlib_reportUnimplementedInitializerInFile
              (param_7,param_8 & 0xffffffff,param_2,param_3 & 0xffffffff,param_4,
               param_5 & 0xffffffff,param_9 & 0xffffffff,param_10);
  }
  else {
    if ((param_6 & 1) == 0) {
      __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_A2HSus6UInt32VtF
                ("Fatal error",0xb,2,"StaticString should have Unicode scalar representation",0x36,2
                 ,"Swift/arm64e-apple-ios.swiftinterface",0x25);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x21cbed4);
      (*pcVar1)();
    }
    if (0xffffffff < param_4) {
      __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_A2HSus6UInt32VtF
                ("Fatal error",0xb,2,"Not enough bits to represent the passed value",0x2d,2,
                 "Swift/arm64e-apple-ios.swiftinterface",0x25);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x21cbf34);
      (*pcVar1)();
    }
    uVar2 = (uint)param_4;
    if (((0xd7ff < uVar2) && (uVar2 < 0xe000)) || (0x10ffff < uVar2)) {
      __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_A2HSus6UInt32VtF
                ("Fatal error",0xb,2,"Unexpectedly found nil while unwrapping an Optional value",
                 0x39,2,"Swift/arm64e-apple-ios.swiftinterface",0x25);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x21cbfd0);
      (*pcVar1)();
    }
    local_80 = FUN_021cdbf0;
    local_78 = auStack_70;
    FUN_021cbb98(param_1,FUN_021cdc0c,auStack_90,param_4 & 0xffffffff);
  }
  return;
}

