// FUN_021b8b9c @ 021b8b9c

void FUN_021b8b9c(undefined8 *param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_b8;
  undefined8 local_30;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_28 = 0;
  lVar5 = *param_2;
  local_18 = lVar5;
  _swift_bridgeObjectRetain();
  lVar1 = lVar5 + param_4;
  local_28 = param_4;
  local_20 = param_3;
  if (SCARRY8(lVar5,param_4)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x21b8da8);
    (*pcVar3)();
  }
  uVar4 = 0;
  FUN_021c8144();
  lVar5 = param_3;
  __sSa5countSivg();
  if (lVar5 != 0) {
    if ((lVar1 == -0x8000000000000000) && (lVar5 == -1)) {
      __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_A2HSus6UInt32VtF
                ("Fatal error",0xb,2,"Division results in an overflow in remainder operation",0x36,2
                 ,"Swift/arm64e-apple-ios.swiftinterface",0x25,2);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x21b8d28);
      (*pcVar3)();
    }
    lVar2 = 0;
    if (lVar5 != 0) {
      lVar2 = lVar1 / lVar5;
    }
    __sSayxSicig(&local_30,lVar1 - lVar2 * lVar5,param_3,uVar4);
    uVar4 = local_30;
    FUN_02221d00(local_30,local_b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(local_30);
    *param_1 = uVar4;
    FUN_021c9838(&local_20);
    return;
  }
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_A2HSus6UInt32VtF
            ("Fatal error",0xb,2,"Division by zero in remainder operation",0x27,2,
             "Swift/arm64e-apple-ios.swiftinterface",0x25,2);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x21b8cb4);
  (*pcVar3)();
}

