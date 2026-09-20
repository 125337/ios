// FUN_021bd198 @ 021bd198

undefined1  [16] FUN_021bd198(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  char *pcVar3;
  char **ppcVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  char *local_310;
  long local_308;
  char *local_300;
  long local_2f8;
  char *local_2c8;
  long local_2c0;
  char *local_1b0;
  long local_1a8;
  char *local_1a0;
  long lStack_198;
  char *local_190;
  long lStack_188;
  char *local_180;
  undefined8 local_178;
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  long local_140;
  char *local_138;
  long local_130;
  undefined8 local_128;
  undefined8 local_120;
  char *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  char *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  char *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  char *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  char *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  
  local_48 = (char *)0x0;
  local_40 = 0;
  _swift_bridgeObjectRetain();
  pcVar3 = "tap";
  uVar5 = 3;
  __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("tap",3,1);
  local_68 = param_1;
  local_60 = param_2;
  local_58 = pcVar3;
  local_50 = uVar5;
  __sSS2eeoiySbSS_SStFZ(pcVar3,uVar5,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  FUN_021c7f98(&local_58);
  if (((ulong)pcVar3 & 1) == 0) {
    _swift_bridgeObjectRetain(param_2);
    pcVar3 = "doubleTap";
    uVar5 = 9;
    __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("doubleTap",9,1);
    local_88 = param_1;
    local_80 = param_2;
    local_78 = pcVar3;
    local_70 = uVar5;
    __sSS2eeoiySbSS_SStFZ(pcVar3,uVar5,param_1,param_2);
    _swift_bridgeObjectRelease(param_2);
    FUN_021c7f98(&local_78);
    if (((ulong)pcVar3 & 1) == 0) {
      _swift_bridgeObjectRetain(param_2);
      pcVar3 = "longPress";
      uVar5 = 9;
      __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("longPress",9,1);
      local_a8 = param_1;
      local_a0 = param_2;
      local_98 = pcVar3;
      local_90 = uVar5;
      __sSS2eeoiySbSS_SStFZ(pcVar3,uVar5,param_1,param_2);
      _swift_bridgeObjectRelease(param_2);
      FUN_021c7f98(&local_98);
      if (((ulong)pcVar3 & 1) == 0) {
        _swift_bridgeObjectRetain(param_2);
        pcVar3 = "swipeUp";
        uVar5 = 7;
        __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("swipeUp",7,1);
        local_c8 = param_1;
        local_c0 = param_2;
        local_b8 = pcVar3;
        local_b0 = uVar5;
        __sSS2eeoiySbSS_SStFZ(pcVar3,uVar5,param_1,param_2);
        _swift_bridgeObjectRelease(param_2);
        FUN_021c7f98(&local_b8);
        if (((ulong)pcVar3 & 1) == 0) {
          _swift_bridgeObjectRetain(param_2);
          pcVar3 = "swipeDown";
          uVar5 = 9;
          __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("swipeDown",9,1);
          local_e8 = param_1;
          local_e0 = param_2;
          local_d8 = pcVar3;
          local_d0 = uVar5;
          __sSS2eeoiySbSS_SStFZ(pcVar3,uVar5,param_1,param_2);
          _swift_bridgeObjectRelease(param_2);
          FUN_021c7f98(&local_d8);
          if (((ulong)pcVar3 & 1) == 0) {
            _swift_bridgeObjectRetain(param_2);
            pcVar3 = "swipeLeft";
            uVar5 = 9;
            __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("swipeLeft",9,1);
            local_108 = param_1;
            local_100 = param_2;
            local_f8 = pcVar3;
            local_f0 = uVar5;
            __sSS2eeoiySbSS_SStFZ(pcVar3,uVar5,param_1,param_2);
            _swift_bridgeObjectRelease(param_2);
            FUN_021c7f98(&local_f8);
            if (((ulong)pcVar3 & 1) == 0) {
              _swift_bridgeObjectRetain(param_2);
              pcVar3 = "swipeRight";
              uVar5 = 10;
              __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC
                        ("swipeRight",10,1);
              local_128 = param_1;
              local_120 = param_2;
              local_118 = pcVar3;
              local_110 = uVar5;
              __sSS2eeoiySbSS_SStFZ(pcVar3,uVar5,param_1,param_2);
              _swift_bridgeObjectRelease(param_2);
              FUN_021c7f98(&local_118);
              if (((ulong)pcVar3 & 1) == 0) {
                local_2c8 = "";
                local_2c0 = 0;
                __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("",0,1);
                goto LAB_021bd944;
              }
              pcVar3 = "ballGestureSwipeRight";
              uVar5 = 0x15;
              __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC
                        ("ballGestureSwipeRight",0x15,1);
              _swift_bridgeObjectRetain();
              local_48 = pcVar3;
              local_40 = uVar5;
            }
            else {
              pcVar3 = "ballGestureSwipeLeft";
              uVar5 = 0x14;
              __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC
                        ("ballGestureSwipeLeft",0x14,1);
              _swift_bridgeObjectRetain();
              local_48 = pcVar3;
              local_40 = uVar5;
            }
          }
          else {
            pcVar3 = "ballGestureSwipeDown";
            uVar5 = 0x14;
            __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC
                      ("ballGestureSwipeDown",0x14,1);
            _swift_bridgeObjectRetain();
            local_48 = pcVar3;
            local_40 = uVar5;
          }
        }
        else {
          pcVar3 = "ballGestureSwipeUp";
          uVar5 = 0x12;
          __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC
                    ("ballGestureSwipeUp",0x12,1);
          _swift_bridgeObjectRetain();
          local_48 = pcVar3;
          local_40 = uVar5;
        }
      }
      else {
        pcVar3 = "ballGestureLongPress";
        uVar5 = 0x14;
        __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC
                  ("ballGestureLongPress",0x14,1);
        _swift_bridgeObjectRetain();
        local_48 = pcVar3;
        local_40 = uVar5;
      }
    }
    else {
      pcVar3 = "ballGestureDoubleTap";
      uVar5 = 0x14;
      __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC
                ("ballGestureDoubleTap",0x14,1);
      _swift_bridgeObjectRetain();
      local_48 = pcVar3;
      local_40 = uVar5;
    }
  }
  else {
    pcVar3 = "ballGestureTap";
    uVar5 = 0xe;
    __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("ballGestureTap",0xe,1);
    _swift_bridgeObjectRetain();
    local_48 = pcVar3;
    local_40 = uVar5;
  }
  uVar5 = local_40;
  pcVar3 = local_48;
  puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::snapshot);
  _swift_beginAccess(puVar1,auStack_170,0x20,0);
  local_180 = pcVar3;
  local_178 = uVar5;
  __sSDyq_Sgxcig(auStack_158,&local_180,*puVar1,PTR___sSSN_02578938,PTR___sypN_02578b08 + 8,
                 PTR___sSSSHsWP_02578940);
  FUN_021c7f98(&local_180);
  _swift_endAccess(auStack_170);
  if (local_140 == 0) {
    FUN_021c7fc0(auStack_158);
    local_310 = (char *)0x0;
    local_308 = 0;
  }
  else {
    ppcVar4 = &local_1b0;
    _swift_dynamicCast(ppcVar4,auStack_158,PTR___sypN_02578b08 + 8,PTR___sSSN_02578938,6);
    if (((ulong)ppcVar4 & 1) == 0) {
      local_300 = (char *)0x0;
      local_2f8 = 0;
    }
    else {
      local_300 = local_1b0;
      local_2f8 = local_1a8;
    }
    local_310 = local_300;
    local_308 = local_2f8;
  }
  local_190 = local_310;
  lStack_188 = local_308;
  lStack_198 = local_308;
  local_1a0 = local_310;
  if (local_308 == 0) {
    pcVar3 = "";
    lVar6 = 0;
    __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("",0,1);
    local_138 = pcVar3;
    local_130 = lVar6;
    if (lStack_198 != 0) {
      FUN_021c811c(&local_1a0);
    }
  }
  else {
    local_138 = local_310;
    local_130 = local_308;
  }
  local_2c0 = local_130;
  local_2c8 = local_138;
  FUN_021c7f98(&local_48);
LAB_021bd944:
  auVar2._8_8_ = local_2c0;
  auVar2._0_8_ = local_2c8;
  return auVar2;
}

