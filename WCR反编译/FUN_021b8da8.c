// FUN_021b8da8 @ 021b8da8

long * FUN_021b8da8(code *param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                   long param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 unaff_x20;
  long unaff_x21;
  undefined1 auStack_1d0 [8];
  undefined8 uStack_1c8;
  undefined4 auStack_1c0 [4];
  long local_1b0;
  long *local_1a8;
  long local_198;
  long *local_190;
  code *local_188;
  code *local_180;
  long local_178;
  long local_170;
  long local_168;
  long local_160;
  long local_158;
  long local_150;
  undefined8 local_148;
  code *local_140;
  undefined8 local_138;
  long local_130;
  undefined1 auStack_60 [32];
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  
  lVar9 = *(long *)(param_5 + -8);
  lVar10 = *(long *)(lVar9 + 0x40);
  lVar12 = param_6;
  local_140 = param_1;
  local_138 = param_2;
  local_130 = param_5;
  local_38 = param_5;
  local_30 = param_4;
  local_28 = param_3;
  (*(code *)PTR____chkstk_darwin_02578668)();
  lVar10 = (long)&local_1b0 - (lVar10 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(lVar12 + 8));
  lVar3 = 0;
  lVar11 = *(long *)(lVar2 + -8);
  lVar12 = *(long *)(lVar11 + 0x40);
  lVar13 = param_4;
  (*(code *)PTR____chkstk_darwin_02578668)(0,param_6,param_3);
  lVar12 = lVar10 - (lVar12 + 0xfU & 0xfffffffffffffff0);
  lVar13 = *(long *)(*(long *)(lVar13 + -8) + 0x40);
  (*(code *)PTR____chkstk_darwin_02578668)();
  lVar13 = lVar12 - (lVar13 + 0xfU & 0xfffffffffffffff0);
  _swift_getAssociatedTypeWitness();
  lVar14 = *(long *)(lVar3 + -8);
  lVar15 = *(long *)(lVar14 + 0x40);
  lVar4 = param_3;
  (*(code *)PTR____chkstk_darwin_02578668)(param_3,param_6);
  lVar15 = lVar13 - (lVar15 + 0xfU & 0xfffffffffffffff0);
  __sSl5countSivgTj();
  if (lVar4 == 0) {
    plVar8 = (long *)0x0;
    __sSa22_allocateUninitializedySayxG_SpyxGtSiFZ(0,param_4);
    local_1a8 = plVar8;
  }
  else {
    lVar5 = param_4;
    __ss15ContiguousArrayVAByxGycfC();
    uVar6 = 0;
    local_40 = lVar5;
    __ss15ContiguousArrayVMa(0,param_4);
    local_148 = uVar6;
    __ss15ContiguousArrayV15reserveCapacityyySiF(lVar4);
    __sSl10startIndex0B0QzvgTj(lVar15,param_3,param_6);
    if (lVar4 < 0) {
      *(undefined1 *)(lVar15 + -0x20) = 2;
      *(undefined8 *)(lVar15 + -0x18) = 0x4517;
      *(undefined4 *)(lVar15 + -0x10) = 0;
      __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_A2HSus6UInt32VtF
                ("Fatal error",0xb,2,"Range requires lowerBound <= upperBound",0x27,2,
                 "Swift/arm64e-apple-ios.swiftinterface",0x25);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x21b9038);
      (*pcVar1)();
    }
    local_198 = unaff_x21;
    if (lVar4 != 0) {
      local_158 = 0;
      local_150 = unaff_x21;
      while( true ) {
        local_168 = local_150;
        local_160 = local_158;
        if ((local_158 < 0) || (lVar4 <= local_158)) {
          *(undefined1 *)(lVar15 + -0x20) = 2;
          *(undefined8 *)(lVar15 + -0x18) = 0x4489;
          *(undefined4 *)(lVar15 + -0x10) = 0;
          __ss18_fatalErrorMessage__4file4line5flagss5NeverOs12StaticStringV_A2HSus6UInt32VtF
                    ("Fatal error",0xb,2,"Index out of range",0x12,2,
                     "Swift/arm64e-apple-ios.swiftinterface",0x25);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x21b9100);
          (*pcVar1)();
        }
        if (lVar4 < 0) {
          *(undefined1 *)(lVar15 + -0x20) = 2;
          *(undefined8 *)(lVar15 + -0x18) = 0x4517;
          *(undefined4 *)(lVar15 + -0x10) = 0;
          __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_A2HSus6UInt32VtF
                    ("Fatal error",0xb,2,"Range requires lowerBound <= upperBound",0x27,2,
                     "Swift/arm64e-apple-ios.swiftinterface",0x25);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x21b9160);
          (*pcVar1)();
        }
        local_170 = local_158 + 1;
        if (SCARRY8(local_158,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x21b940c);
          (*pcVar1)();
        }
        pcVar1 = (code *)auStack_60;
        local_180 = pcVar1;
        __sSly7ElementQz5IndexQzcirTj(pcVar1,lVar15,param_3,param_6);
        local_188 = pcVar1;
        (**(code **)(lVar11 + 0x10))(lVar12);
        (*local_188)(local_180,0);
        lVar5 = local_168;
        (*local_140)(lVar13,lVar12,lVar10);
        local_178 = lVar5;
        if (lVar5 != 0) {
          (**(code **)(lVar11 + 8))(lVar12,lVar2);
          (**(code **)(lVar14 + 8))(lVar15,lVar3);
          FUN_021cdcd8(&local_40);
          (**(code **)(lVar9 + 0x20))(param_8,lVar10,local_130);
          return local_190;
        }
        (**(code **)(lVar11 + 8))(lVar12,lVar2);
        __ss15ContiguousArrayV6appendyyxnF(lVar13,local_148);
        __sSl9formIndex5aftery0B0Qzz_tFTj(lVar15,param_3,param_6);
        if (local_170 == lVar4) break;
        local_158 = local_170;
        local_150 = local_178;
      }
      local_198 = local_178;
    }
    local_1b0 = local_198;
    __ss10_expectEnd2of2isyx_5IndexQztSlRzlF(unaff_x20,lVar15,param_3,param_6);
    (**(code **)(lVar14 + 8))(lVar15,lVar3);
    puVar7 = PTR___ss15ContiguousArrayVyxGSTsMc_02578a60;
    _swift_getWitnessTable(PTR___ss15ContiguousArrayVyxGSTsMc_02578a60,local_148,local_190);
    plVar8 = &local_40;
    __sSaySayxGqd__c7ElementQyd__RszSTRd__lufC(plVar8,param_4,local_148,puVar7);
    local_1a8 = plVar8;
  }
  return local_1a8;
}

