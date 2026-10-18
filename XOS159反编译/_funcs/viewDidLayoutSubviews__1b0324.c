// viewDidLayoutSubviews @0x1b0324


/* Function Stack Size: 0x10 bytes */



void AABCustomDashStyleEditorViewController::viewDidLayoutSubviews(ID param_1,SEL param_2)



{

  int iVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  double dVar4;

  double in_d2;

  double in_d3;

  double dVar5;

  double dVar6;

  double dVar7;

  undefined1 auVar8 [16];

  undefined8 local_b0;

  undefined8 uStack_a8;

  undefined8 uStack_a0;

  undefined8 uStack_98;

  undefined8 local_90;

  undefined8 uStack_88;

  ID local_80;

  class_t *pcStack_78;

  

  pcStack_78 = &objc::class_t::AABCustomDashStyleEditorViewController;

  local_80 = param_1;

  _objc_msgSendSuper2(&local_80,"viewDidLayoutSubviews");

  FUN_002a6220(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002925a0();

  _objc_release(uVar2);

  FUN_002a6220(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002925a0();

  dVar5 = in_d3;

  _objc_release(uVar2);

  FUN_002a6220(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  dVar4 = (double)FUN_0029bb60();

  _objc_release(uVar2);

  FUN_002990e0(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002990c0();

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_00295600();

  dVar4 = dVar4 + dVar5;

  _objc_release(uVar3);

  _objc_release(uVar2);

  dVar6 = in_d3 - dVar4;

  FUN_0029a780(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_0029e5e0(0,dVar4,in_d2);

  _objc_release(uVar2);

  FUN_0029a780(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002925a0();

  dVar5 = dVar6;

  _objc_release(uVar2);

  iVar1 = FUN_0029a840(param_1);

  if (iVar1 == 0) {

    FUN_0029a860(param_1);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_002925a0();

    _objc_release(uVar2);

    dVar7 = 12.0;

    if (1.0 <= dVar5) {

      dVar7 = dVar5;

    }

    FUN_0029a860(param_1);

    auVar8 = _objc_retainAutoreleasedReturnValue();

    uStack_a8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_00388998 + 8);

    local_b0 = *(undefined8 *)PTR__CGAffineTransformIdentity_00388998;

    uStack_98 = *(undefined8 *)(PTR__CGAffineTransformIdentity_00388998 + 0x18);

    uStack_a0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_00388998 + 0x10);

    uStack_88 = *(undefined8 *)(PTR__CGAffineTransformIdentity_00388998 + 0x28);

    local_90 = *(undefined8 *)(PTR__CGAffineTransformIdentity_00388998 + 0x20);

    FUN_002a21c0(auVar8._0_8_,auVar8._8_8_,&local_b0);

    _objc_release(auVar8._0_8_);

    FUN_0029a860(param_1);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_0029e5e0(0x4030000000000000,(dVar6 - dVar7) * 0.5,in_d2 + -32.0,dVar7);

    _objc_release(uVar2);

  }

  FUN_0029a7a0(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_0029e5e0(0x4030000000000000,dVar6 * 0.5 + 12.0,in_d2 + -32.0,0x4036000000000000);

  _objc_release(uVar2);

  FUN_002961e0(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_0029e5e0(0x4020000000000000,dVar4 + 6.0,in_d2 + -16.0,0x4046000000000000);

  _objc_release(uVar2);

  FUN_00292ec0(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_0029e5e0(0,dVar4 + 54.0,in_d2,in_d3 - (dVar4 + 54.0));

  _objc_release(uVar2);

  return;

}




