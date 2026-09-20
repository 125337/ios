// FUN_0220d688 @ 0220d688

/* WARNING: Removing unreachable block (ram,0x0220da38) */
/* WARNING: Removing unreachable block (ram,0x0220da3c) */
/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_0220d688(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
            undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 local_b8;
  long local_88 [3];
  undefined8 local_70;
  undefined8 local_68;
  
  local_68 = 0;
  FUN_021c97d8();
  _swift_bridgeObjectRetain(param_3);
  FUN_021b940c(param_2,param_3);
  local_68 = param_2;
  _swift_bridgeObjectRetain(param_4);
  lVar2 = param_4;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_4,PTR___sypN_02578b08 + 8);
  _swift_bridgeObjectRelease(param_4);
  FUN_022236c0(param_2,local_b8,lVar2);
  (*(code *)PTR__objc_release_02578630)(lVar2);
  puVar3 = &DAT_028c73b0;
  local_70 = param_5;
  FUN_021c77d4(&DAT_028c73b0,&DAT_0233b6c0);
  uVar4 = 0;
  FUN_021c80bc();
  uVar5 = uVar4;
  FUN_022056ac();
  pcVar1 = FUN_0220e734;
  FUN_021b8da8(FUN_0220e734,0,puVar3,uVar4,PTR___ss5NeverON_02578ab8,uVar5,
               PTR___ss5NeverOs5ErrorsWP_02578ac0,local_b8);
  pcVar6 = pcVar1;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(pcVar1,uVar4);
  _swift_bridgeObjectRelease(pcVar1);
  FUN_02223140(param_2,local_b8,pcVar6);
  (*(code *)PTR__objc_release_02578630)(pcVar6);
  (*(code *)PTR__objc_retain_02578638)(param_2);
  FUN_02222fc0(param_1,param_2,local_b8);
  (*(code *)PTR__objc_release_02578630)(param_2);
  (*(code *)PTR__objc_retain_02578638)(param_2);
  __sSf23greatestFiniteMagnitudeSfvgZ();
  FUN_022233a0(param_2,local_b8);
  (*(code *)PTR__objc_release_02578630)(param_2);
  local_88[1] = 0;
  __sSa5countSivg(param_4,PTR___sypN_02578b08 + 8);
  local_88[0] = param_4 + -1;
  if (SBORROW8(param_4,1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x220da44);
    (*pcVar1)();
  }
  __ss3maxyxx_xtSLRzlF
            (local_88 + 2,local_88 + 1,local_88,PTR___sSiN_025789d8,PTR___sSiSLsWP_025789e8);
  if (local_88[2] < 0) {
    __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_A2HSus6UInt32VtF
              ("Fatal error",0xb,2,"Range requires lowerBound <= upperBound",0x27,2,
               "Swift/arm64e-apple-ios.swiftinterface",0x25,2);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x220d95c);
    (*pcVar1)();
  }
  puVar3 = &DAT_028c6e38;
  FUN_021c77d4(&DAT_028c6e38,&DAT_0233b170);
  uVar4 = 0;
  FUN_021fb964();
  uVar5 = uVar4;
  FUN_021c9654();
  pcVar1 = FUN_0220e78c;
  FUN_021b8da8(FUN_0220e78c,0,puVar3,uVar4,PTR___ss5NeverON_02578ab8,uVar5,
               PTR___ss5NeverOs5ErrorsWP_02578ac0,local_b8);
  pcVar6 = pcVar1;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(pcVar1,uVar4);
  _swift_bridgeObjectRelease(pcVar1);
  FUN_022235e0(param_2,local_b8,pcVar6);
  (*(code *)PTR__objc_release_02578630)(pcVar6);
  return param_2;
}

