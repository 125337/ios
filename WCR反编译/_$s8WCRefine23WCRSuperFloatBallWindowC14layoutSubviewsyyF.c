// _$s8WCRefine23WCRSuperFloatBallWindowC14layoutSubviewsyyF @ 021b02a8

/* WARNING: Removing unreachable block (ram,0x021b03c4) */

void __s8WCRefine23WCRSuperFloatBallWindowC14layoutSubviewsyyF
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  uint local_fc;
  undefined8 local_f8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  long local_60;
  long local_58;
  undefined1 auStack_50 [24];
  
  _swift_getObjectType();
  local_58 = 0;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_msgSendSuper2(&stack0xffffffffffffffc8,PTR_s_layoutSubviews_0269de80);
  (*(code *)PTR__objc_release_02578630)();
  plVar1 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::secureCanvas);
  _swift_beginAccess(plVar1,auStack_50,0x20,0);
  lVar2 = *plVar1;
  (*(code *)PTR__objc_retain_02578638)();
  _swift_endAccess(auStack_50);
  if (lVar2 != 0) {
    lVar3 = lVar2;
    local_58 = lVar2;
    FUN_02223880(lVar2,local_f8);
    _objc_retainAutoreleasedReturnValue();
    local_60 = 0;
    local_68 = lVar3;
    if (lVar3 == 0) {
      FUN_021c87dc(&local_68);
      local_fc = 1;
    }
    else {
      FUN_021c890c(&local_68,&local_b0);
      lVar3 = local_60;
      if (local_60 == 0) {
        (*(code *)PTR__objc_release_02578630)(local_b0);
        FUN_021c8798(&local_68);
        local_fc = 0;
      }
      else {
        FUN_021c7714(0);
        uVar4 = local_b0;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(local_b0,lVar3);
        local_fc = (uint)uVar4;
        (*(code *)PTR__objc_release_02578630)(lVar3);
        (*(code *)PTR__objc_release_02578630)(local_b0);
        FUN_021c87dc(&local_68);
      }
    }
    if ((local_fc & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)(unaff_x20);
      FUN_02222060(unaff_x20,local_f8);
      local_88 = param_1;
      local_80 = param_2;
      local_78 = param_3;
      local_70 = param_4;
      (*(code *)PTR__objc_release_02578630)(unaff_x20);
      local_a8 = param_1;
      local_a0 = param_2;
      local_98 = param_3;
      local_90 = param_4;
      FUN_022230c0(param_1,param_2,param_3,param_4,lVar2,local_f8);
      (*(code *)PTR__objc_release_02578630)(lVar2);
    }
    else {
      (*(code *)PTR__objc_release_02578630)(lVar2);
    }
  }
  return;
}

