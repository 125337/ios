// FUN_021cd57c @ 021cd57c

/* WARNING: Removing unreachable block (ram,0x021cd5e4) */

void FUN_021cd57c(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                 long *param_5)

{
  code *pcVar1;
  long unaff_x21;
  
  __sSi10bitPatternSis13OpaquePointerVSg_tcfC();
  if (*param_5 < 0) {
    __ss18_fatalErrorMessage__4file4line5flagss5NeverOs12StaticStringV_A2HSus6UInt32VtF
              ("Fatal error",0xb,2,"UnsafeBufferPointer with negative count",0x27,2,
               "Swift/arm64e-apple-ios.swiftinterface",0x25,2);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x21cd694);
    (*pcVar1)();
  }
  (*param_3)(param_1,param_2,*param_5);
  if (unaff_x21 == 0) {
    return;
  }
  return;
}

