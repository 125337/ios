// FUN_021f83cc @ 021f83cc

undefined8 ******* FUN_021f83cc(double param_1,undefined8 *******param_2,long param_3)

{
  undefined8 ******ppppppuVar1;
  undefined8 *******pppppppuVar2;
  char *pcVar3;
  undefined8 *******pppppppuVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 ******local_320;
  undefined8 ******local_318;
  undefined8 ******local_2e8;
  undefined8 ******local_298;
  undefined8 ******local_290;
  undefined8 ******local_260;
  undefined8 ******local_218;
  undefined8 ******local_210;
  undefined8 ******local_1e8;
  undefined8 local_1b0;
  undefined8 ******local_170;
  undefined8 ******local_98;
  undefined8 ******local_90;
  undefined8 ******local_88;
  undefined8 local_80;
  undefined8 ******local_78;
  undefined8 ******local_70;
  undefined8 ******local_68;
  char *local_60;
  undefined8 ******local_58;
  undefined8 ******local_50;
  undefined8 ******local_48;
  long local_40;
  double local_38;
  undefined8 ******local_30;
  long local_28;
  
  local_48 = (undefined8 ******)0x0;
  local_40 = 0;
  local_50 = (undefined8 *******)0x0;
  local_58 = (undefined8 *******)0x0;
  local_60 = (char *)0x0;
  local_68 = (undefined8 *******)0x0;
  local_70 = (undefined8 ******)0x0;
  local_78 = (undefined8 ******)0x0;
  local_80 = 0;
  local_38 = param_1;
  local_30 = param_2;
  local_28 = param_3;
  _swift_bridgeObjectRetain();
  if (param_3 != 0) {
    pppppppuVar2 = param_2;
    local_48 = param_2;
    local_40 = param_3;
    __sSS7isEmptySbvg();
    if (((ulong)pppppppuVar2 & 1) == 0) {
      pcVar3 = "sf.none";
      uVar7 = 7;
      __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("sf.none",7,1);
      pppppppuVar2 = param_2;
      __sSS2eeoiySbSS_SStFZ(param_2,param_3,pcVar3);
      _swift_bridgeObjectRelease(uVar7);
      if (((ulong)pppppppuVar2 & 1) != 0) {
        _swift_bridgeObjectRelease(param_3);
        return (undefined8 *******)0x0;
      }
      pppppppuVar2 = param_2;
      lVar8 = param_3;
      FUN_021f5f10();
      if (lVar8 != 0) {
        pppppppuVar4 = pppppppuVar2;
        FUN_021f8f48(param_1);
        if (pppppppuVar4 != (undefined8 *******)0x0) {
          _swift_bridgeObjectRelease(lVar8);
          _swift_bridgeObjectRelease(param_3);
          return pppppppuVar4;
        }
        FUN_021c8238(0);
        _swift_bridgeObjectRetain(lVar8);
        FUN_021f9fa8(pppppppuVar2,lVar8);
        if (pppppppuVar2 == (undefined8 *******)0x0) {
          local_170 = (undefined8 *******)0x0;
        }
        else {
          local_170 = pppppppuVar2;
          FUN_021f589c(param_1);
          (*(code *)PTR__objc_release_02578630)(pppppppuVar2);
        }
        _swift_bridgeObjectRelease(lVar8);
        _swift_bridgeObjectRelease(param_3);
        return (undefined8 *******)local_170;
      }
      FUN_021c8238(0);
      pppppppuVar2 = param_2;
      FUN_021f9fec(param_2,param_3);
      FUN_021faadc();
      if (pppppppuVar2 != (undefined8 *******)0x0) {
        local_78 = pppppppuVar2;
        FUN_021fbdd8(0);
        uVar7 = 6;
        FUN_021fab48(param_1 * DAT_02323f28);
        pppppppuVar4 = pppppppuVar2;
        local_80 = uVar7;
        FUN_02222540(pppppppuVar2,local_1b0);
        _objc_retainAutoreleasedReturnValue();
        local_90 = pppppppuVar4;
        (*(code *)PTR__objc_retain_02578638)(pppppppuVar2);
        local_98 = local_90;
        pppppppuVar4 = pppppppuVar2;
        if ((undefined8 *******)local_90 == (undefined8 *******)0x0) {
          (*(code *)PTR__objc_retain_02578638)(pppppppuVar2);
          local_88 = pppppppuVar2;
          (*(code *)PTR__objc_release_02578630)();
          if ((undefined8 *******)local_98 != (undefined8 *******)0x0) {
            pppppppuVar4 = &local_98;
            FUN_021c850c();
          }
        }
        else {
          (*(code *)PTR__objc_release_02578630)();
          local_88 = local_98;
        }
        ppppppuVar1 = local_88;
        FUN_021f589c(param_1);
        (*(code *)PTR__objc_release_02578630)(ppppppuVar1);
        (*(code *)PTR__objc_release_02578630)(uVar7);
        (*(code *)PTR__objc_release_02578630)(pppppppuVar2);
        _swift_bridgeObjectRelease(param_3);
        return pppppppuVar4;
      }
      pcVar3 = "MMThemeManager";
      uVar7 = 0xe;
      __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("MMThemeManager",0xe,1)
      ;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      _swift_bridgeObjectRelease(uVar7);
      local_1e8 = (undefined8 ******)pcVar3;
      _NSClassFromString();
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      if ((undefined8 *******)local_1e8 == (undefined8 *******)0x0) {
        local_1e8 = (undefined8 *******)0x0;
      }
      else {
        _swift_getObjCClassMetadata();
      }
      if ((undefined8 *******)local_1e8 == (undefined8 *******)0x0) {
        local_218 = (undefined8 *******)0x0;
      }
      else {
        uVar7 = 0;
        FUN_021c8d68(0);
        _swift_dynamicCastMetatype(local_1e8,uVar7);
        local_210 = local_1e8;
        if ((undefined8 *******)local_1e8 == (undefined8 *******)0x0) {
          local_210 = (undefined8 *******)0x0;
        }
        local_218 = local_210;
      }
      if ((undefined8 *******)local_218 != (undefined8 *******)0x0) {
        local_50 = local_218;
        _swift_getObjCClassFromMetadata();
        pcVar3 = "sharedInstance";
        uVar7 = 0xe;
        __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC
                  ("sharedInstance",0xe,1);
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
        _swift_bridgeObjectRelease(uVar7);
        pcVar5 = pcVar3;
        _NSSelectorFromString();
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        local_260 = local_218;
        FUN_02222a20(local_218,local_1b0,pcVar5);
        _objc_autorelease(local_218);
        if ((undefined8 *******)local_260 == (undefined8 *******)0x0) {
          local_260 = (undefined8 *******)0x0;
        }
        else {
          _swift_unknownObjectRetain();
        }
        if ((undefined8 *******)local_260 == (undefined8 *******)0x0) {
          local_298 = (undefined8 *******)0x0;
        }
        else {
          puVar6 = PTR__OBJC_CLASS___NSObject_026ce188;
          _objc_opt_self(PTR__OBJC_CLASS___NSObject_026ce188);
          local_290 = local_260;
          _swift_dynamicCastObjCClass(local_260,puVar6);
          if ((undefined8 *******)local_290 == (undefined8 *******)0x0) {
            _swift_unknownObjectRelease(local_260);
            local_290 = (undefined8 *******)0x0;
          }
          local_298 = local_290;
        }
        local_58 = local_298;
        pcVar3 = "imageNamed:";
        uVar7 = 0xb;
        __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("imageNamed:",0xb,1);
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
        _swift_bridgeObjectRelease(uVar7);
        pcVar5 = pcVar3;
        _NSSelectorFromString();
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        local_60 = pcVar5;
        (*(code *)PTR__objc_retain_02578638)(local_298);
        if ((undefined8 *******)local_298 != (undefined8 *******)0x0) {
          local_68 = local_298;
          pppppppuVar2 = (undefined8 *******)local_298;
          FUN_02222ba0(local_298,local_1b0,pcVar5);
          if (((ulong)pppppppuVar2 & 1) == 0) {
            (*(code *)PTR__objc_release_02578630)(local_298);
          }
          else {
            _swift_bridgeObjectRetain(param_3);
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_2,param_3);
            _swift_bridgeObjectRelease(param_3);
            (*(code *)PTR__objc_retain_02578638)(local_298);
            local_2e8 = local_298;
            FUN_02222a40(local_298,local_1b0,pcVar5,param_2);
            _swift_unknownObjectRelease(param_2);
            _objc_autorelease(local_298);
            pppppppuVar2 = (undefined8 *******)local_2e8;
            if ((undefined8 *******)local_2e8 == (undefined8 *******)0x0) {
              local_2e8 = (undefined8 *******)0x0;
            }
            else {
              _swift_unknownObjectRetain();
            }
            if ((undefined8 *******)local_2e8 == (undefined8 *******)0x0) {
              local_320 = (undefined8 *******)0x0;
            }
            else {
              puVar6 = PTR__OBJC_CLASS___UIImage_026cdfd0;
              _objc_opt_self(PTR__OBJC_CLASS___UIImage_026cdfd0);
              pppppppuVar2 = (undefined8 *******)local_2e8;
              _swift_dynamicCastObjCClass(local_2e8,puVar6);
              local_318 = pppppppuVar2;
              if (pppppppuVar2 == (undefined8 *******)0x0) {
                _swift_unknownObjectRelease();
                local_318 = (undefined8 *******)0x0;
                pppppppuVar2 = (undefined8 *******)local_2e8;
              }
              local_320 = local_318;
            }
            if ((undefined8 *******)local_320 != (undefined8 *******)0x0) {
              local_70 = local_320;
              FUN_021f589c(param_1);
              (*(code *)PTR__objc_release_02578630)(local_320);
              (*(code *)PTR__objc_release_02578630)(local_298);
              (*(code *)PTR__objc_release_02578630)(local_298);
              _swift_bridgeObjectRelease(param_3);
              return pppppppuVar2;
            }
            (*(code *)PTR__objc_release_02578630)(local_298);
          }
        }
        (*(code *)PTR__objc_release_02578630)(local_298);
      }
      _swift_bridgeObjectRelease(param_3);
      return (undefined8 *******)0x0;
    }
    _swift_bridgeObjectRelease(param_3);
  }
  return (undefined8 *******)0x0;
}

