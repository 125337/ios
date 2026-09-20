// FUN_021b1b8c @ 021b1b8c

bool FUN_021b1b8c(double param_1,double param_2,undefined8 param_3,double param_4)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulong unaff_x20;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 local_178;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double dStack_68;
  double local_60;
  double dStack_58;
  undefined1 auStack_50 [24];
  
  dStack_68 = 0.0;
  local_70 = 0.0;
  dStack_58 = 0.0;
  local_60 = 0.0;
  local_78 = 0.0;
  local_80 = 0.0;
  dVar9 = 0.0;
  puVar2 = (undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::quickChatOfficialBadge);
  puVar4 = auStack_50;
  dVar5 = param_1;
  dVar7 = param_2;
  _swift_beginAccess(puVar2,puVar4,0x20,0);
  puVar3 = (undefined1 *)*puVar2;
  (*(code *)PTR__objc_retain_02578638)();
  _swift_endAccess();
  if (puVar3 != (undefined1 *)0x0) {
    puVar4 = puVar3;
    FUN_022228e0(puVar3,local_178);
    if (((ulong)puVar4 & 1) == 0) {
      FUN_02222060(puVar3,local_178);
      (*(code *)PTR__objc_retain_02578638)(unaff_x20);
      FUN_02222240(puVar3,local_178,unaff_x20);
      _swift_unknownObjectRelease();
      dVar6 = param_1;
      dVar8 = param_2;
      FUN_021b1f24();
      if ((unaff_x20 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(puVar3);
        return true;
      }
      dVar9 = dVar5;
      param_4 = dVar7;
      (*(code *)PTR__objc_release_02578630)();
      puVar4 = puVar3;
      dVar5 = dVar6;
      dVar7 = dVar8;
    }
    else {
      (*(code *)PTR__objc_release_02578630)();
      puVar4 = puVar3;
    }
  }
  FUN_021b0e1c();
  local_70 = dVar5;
  dStack_68 = dVar7;
  local_60 = dVar9;
  dStack_58 = param_4;
  FUN_021b1f24(param_1,param_2);
  if (((ulong)puVar4 & 1) == 0) {
    bVar1 = false;
  }
  else {
    FUN_021b159c();
    if (((ulong)puVar4 & 1) == 0) {
      bVar1 = true;
    }
    else {
      dVar6 = dVar5;
      FUN_021b1f88(dVar5,dVar7,dVar9,param_4);
      param_1 = param_1 - dVar6;
      dVar6 = dVar5;
      local_78 = param_1;
      FUN_021b1fc4(dVar5,dVar7,dVar9,param_4);
      param_2 = param_2 - dVar6;
      dVar6 = dVar5;
      local_80 = param_2;
      FUN_021b0958(dVar5,dVar7,dVar9,param_4);
      local_90 = dVar6;
      FUN_021b0994(dVar5,dVar7,dVar9,param_4);
      local_98 = dVar5;
      FUN_021c8058();
      __ss3minyxx_xtSLRzlF
                (&local_88,&local_90,&local_98,PTR___s12CoreGraphics7CGFloatVN_02578ba0,puVar4);
      bVar1 = param_1 * param_1 + param_2 * param_2 <= local_88 * 0.5 * local_88 * 0.5;
    }
  }
  return bVar1;
}

