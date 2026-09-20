// FUN_021cbb98 @ 021cbb98

void FUN_021cbb98(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  long unaff_x21;
  uint local_84;
  ulong local_30;
  ulong local_28;
  
  if (param_4 < 0x80) {
    if (0xff < param_4) {
      __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_A2HSus6UInt32VtF
                ("Fatal error",0xb,2,"Not enough bits to represent the passed value",0x2d,2,
                 "Swift/arm64e-apple-ios.swiftinterface",0x25,2);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x21cbd04);
      (*pcVar4)();
    }
    local_84 = (param_4 & 0xff) + 1 & 0xff;
  }
  else {
    uVar2 = param_4 >> 6;
    uVar1 = (param_4 & 0x3f) << 8;
    if (uVar2 < 0x20) {
      local_84 = (uVar1 | uVar2) + 0x81c1;
    }
    else {
      uVar3 = param_4 >> 0xc;
      uVar1 = (uVar1 | uVar2 & 0x3f) << 8;
      if (uVar3 < 0x10) {
        local_84 = (uVar1 | uVar3) + 0x8181e1;
      }
      else {
        local_84 = (param_4 >> 0x12 | (uVar1 | uVar3 & 0x3f) << 8) + 0x818181f1;
      }
    }
  }
  local_30 = 4 - (LZCOUNT(local_84) >> 3);
  local_28 = (ulong)local_84 + 0xfefefefefefefeff & (1L << ((local_30 & 7) << 3)) - 1U;
  FUN_021cd57c(param_1,&local_28,param_2,param_3,&local_30);
  if (unaff_x21 != 0) {
    return;
  }
  return;
}

