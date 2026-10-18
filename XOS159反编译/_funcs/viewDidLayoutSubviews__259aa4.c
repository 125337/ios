// viewDidLayoutSubviews @0x259aa4


/* Function Stack Size: 0x10 bytes */



void XZYHomeDockCustomStyleEditorViewController::viewDidLayoutSubviews(ID param_1,SEL param_2)



{

  int iVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  long lVar4;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  long lVar5;

  long lVar6;

  double dVar7;

  double in_d2;

  double in_d3;

  double dVar8;

  undefined8 local_140;

  long lStack_138;

  long *local_130;

  undefined8 uStack_128;

  undefined8 local_120;

  undefined8 uStack_118;

  undefined8 uStack_110;

  undefined8 uStack_108;

  ID local_f8;

  class_t *pcStack_f0;

  undefined1 auStack_e8 [128];

  long local_68;

  

  local_68 = *(long *)PTR____stack_chk_guard_00388738;

  pcStack_f0 = &objc::class_t::XZYHomeDockCustomStyleEditorViewController;

  local_f8 = param_1;

  _objc_msgSendSuper2(&local_f8,"viewDidLayoutSubviews");

  FUN_002a6220(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002925a0();

  _objc_release(uVar2);

  FUN_002a6220(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002925a0();

  dVar8 = in_d3;

  _objc_release(uVar2);

  FUN_002a6220(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  dVar7 = (double)FUN_0029bb60();

  _objc_release(uVar2);

  FUN_002990e0(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002990c0();

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_00295600();

  _objc_release(uVar3);

  _objc_release(uVar2);

  FUN_0029a780(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  dVar7 = dVar7 + dVar8;

  FUN_0029e5e0(0,dVar7,in_d2,in_d3 - dVar7);

  _objc_release(uVar2);

  FUN_00291920(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_0029e5e0(0x4020000000000000,dVar7 + 6.0,in_d2 + -16.0,0x4046000000000000);

  _objc_release(uVar2);

  FUN_00292ec0(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_0029e5e0(0,dVar7 + 54.0,in_d2,in_d3 - (dVar7 + 54.0));

  _objc_release(uVar2);

  iVar1 = FUN_0029a840(param_1);

  if (iVar1 != 0) {

    uStack_118 = 0;

    local_120 = 0;

    uStack_108 = 0;

    uStack_110 = 0;

    lStack_138 = 0;

    local_140 = 0;

    uStack_128 = 0;

    local_130 = (long *)0x0;

    FUN_0029a780(param_1);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_002a4840();

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_release(uVar2);

    lVar4 = FUN_00293880(uVar3,extraout_x1,&local_140,auStack_e8,0x10);

    if (lVar4 != 0) {

      lVar5 = *local_130;

      do {

        lVar6 = 0;

        do {

          if (*local_130 != lVar5) {

            _objc_enumerationMutation(uVar3);

          }

          FUN_0029e5e0(0,0,in_d2,0x4054000000000000,*(undefined8 *)(lStack_138 + lVar6 * 8));

          lVar6 = lVar6 + 1;

        } while (lVar4 != lVar6);

        lVar4 = FUN_00293880(uVar3,extraout_x1_00,&local_140,auStack_e8,0x10);

      } while (lVar4 != 0);

    }

    _objc_release(uVar3);

  }

  if (*(long *)PTR____stack_chk_guard_00388738 == local_68) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




