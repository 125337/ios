// FUN_0221286c @ 0221286c

undefined8 FUN_0221286c(double param_1,long *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  double dVar9;
  undefined8 local_200;
  double local_168;
  undefined1 local_120 [8];
  double local_118;
  undefined1 local_110 [8];
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  long local_98;
  long local_90;
  char local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  long *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  double local_38;
  long *local_30;
  double local_28;
  
  local_40 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_98 = 0;
  local_a0 = 0.0;
  local_a8 = 0.0;
  local_b8 = 0.0;
  local_c0 = 0.0;
  local_d0 = 0.0;
  local_38 = 0.0;
  uVar2 = 0;
  local_30 = param_2;
  local_28 = param_1;
  __ss27_allocateUninitializedArrayySayxG_BptBwlF(0,PTR___s7SwiftUI8GradientV4StopVN_025788f0);
  plVar3 = param_2;
  local_40 = uVar2;
  __sSa5countSivg(param_2,PTR___s7SwiftUI5ColorVN_025788b8);
  plVar4 = plVar3;
  FUN_02211d3c();
  lVar5 = *plVar4;
  _swift_bridgeObjectRetain();
  lVar6 = lVar5;
  __sSa5countSivg(lVar5,PTR___sSdN_025789b8);
  _swift_bridgeObjectRelease(lVar5);
  if ((long)plVar3 - lVar6 == 0) {
    puVar7 = &DAT_028c7540;
    local_60 = param_2;
    FUN_021c77d4(&DAT_028c7540,&DAT_0233bd48);
    puVar8 = puVar7;
    FUN_022197cc();
    __sSksSx5IndexRpzSnyABG7IndicesRtzSiAA_6StrideRTzrlE7indicesACvg
              (&local_70,puVar7,puVar8,PTR___sSiSxsWP_02578a00);
    local_80 = local_70;
    local_78 = local_68;
    puVar7 = &DAT_028c6e38;
    FUN_021c77d4(&DAT_028c6e38,&DAT_0233b170);
    puVar8 = puVar7;
    FUN_021c9654();
    __sSlss16IndexingIteratorVyxG0B0RtzrlE04makeB0ACyF(&local_58,puVar7,puVar8);
    local_168 = 0.0;
    while( true ) {
      FUN_021c77d4(&DAT_028c71a0,&DAT_0233bdd0);
      __ss16IndexingIteratorV4next7ElementQzSgyF(&local_90);
      local_200 = local_40;
      lVar6 = local_90;
      if (local_88 == '\x01') break;
      local_98 = local_90;
      if (local_90 == 0) {
        local_a0 = 0.0;
      }
      else {
        plVar3 = param_2;
        __sSa5countSivg(param_2,PTR___s7SwiftUI5ColorVN_025788b8);
        if (SBORROW8((long)plVar3,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x2212d50);
          (*pcVar1)();
        }
        if (lVar6 == (long)plVar3 + -1) {
          local_a0 = 1.0;
        }
        else {
          dVar9 = param_1 * 0.35 + (double)lVar6 * DAT_02323e70;
          _sin();
          dVar9 = dVar9 * DAT_02323f00;
          local_a8 = dVar9;
          FUN_02211d3c();
          lVar5 = *plVar3;
          _swift_bridgeObjectRetain();
          __sSayxSicig(&local_b0,lVar6,lVar5,PTR___sSdN_025789b8);
          dVar9 = local_b0 + dVar9;
          local_168 = local_168 + 0.075;
          local_c0 = local_168;
          local_b8 = dVar9;
          FUN_02211d3c();
          puVar7 = PTR___sSdN_025789b8;
          if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x2212d54);
            (*pcVar1)();
          }
          __sSayxSicig(&local_c8,lVar6 + 1,lVar5);
          _swift_bridgeObjectRelease(lVar5);
          local_f8 = local_c8 - 0.075;
          local_f0 = local_168;
          local_e0 = dVar9;
          local_d0 = local_f8;
          __ss3maxyxx_xtSLRzlF(&local_e8,&local_f0,&local_f8,puVar7,PTR___sSdSLsWP_025789c8);
          if (local_e8 < local_168) {
            __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_A2HSus6UInt32VtF
                      ("Fatal error",0xb,2,"Range requires lowerBound <= upperBound",0x27,2,
                       "Swift/arm64e-apple-ios.swiftinterface",0x25,2);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x2212c28);
            (*pcVar1)();
          }
          local_100 = local_e8;
          local_108 = local_168;
          FUN_0220f5a4(&local_d8,&local_108,PTR___sSdN_025789b8,PTR___sSdSLsWP_025789c8);
          local_a0 = local_d8;
        }
      }
      local_168 = local_a0;
      __sSayxSicig(local_110,lVar6,param_2,PTR___s7SwiftUI5ColorVN_025788b8);
      dVar9 = local_168;
      __s7SwiftUI8GradientV4StopV5color8locationAeA5ColorV_12CoreGraphics7CGFloatVtcfC();
      puVar7 = &DAT_028c7590;
      local_118 = dVar9;
      FUN_021c77d4(&DAT_028c7590,&DAT_0233bdd8);
      __sSa6appendyyxnF(local_120,puVar7);
      local_38 = local_168;
    }
    _swift_bridgeObjectRetain();
    FUN_022197a4(&local_40);
  }
  else {
    local_200 = 0;
    __ss27_allocateUninitializedArrayySayxG_BptBwlF
              ((long)plVar3 - lVar6,0,PTR___s7SwiftUI8GradientV4StopVN_025788f0);
    FUN_022197a4(&local_40);
  }
  return local_200;
}

