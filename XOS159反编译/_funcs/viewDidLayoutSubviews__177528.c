// viewDidLayoutSubviews @0x177528


/* Function Stack Size: 0x10 bytes */



void CadisCustomStyleEditorViewController::viewDidLayoutSubviews(ID param_1,SEL param_2)



{

  int iVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  long lVar4;

  long lVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  long lVar6;

  long lVar7;

  double dVar8;

  undefined8 uVar9;

  double in_d2;

  double in_d3;

  double dVar10;

  undefined1 auVar11 [16];

  undefined8 local_150;

  long lStack_148;

  long *local_140;

  undefined8 uStack_138;

  undefined8 local_130;

  undefined8 uStack_128;

  undefined8 uStack_120;

  undefined8 uStack_118;

  ID local_108;

  class_t *pcStack_100;

  undefined1 auStack_f8 [128];

  long local_78;

  

  local_78 = *(long *)PTR____stack_chk_guard_00388738;

  pcStack_100 = &objc::class_t::CadisCustomStyleEditorViewController;

  local_108 = param_1;

  _objc_msgSendSuper2(&local_108,"viewDidLayoutSubviews");

  FUN_002a6220(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002925a0();

  _objc_release(uVar2);

  FUN_002a6220(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002925a0();

  dVar10 = in_d3;

  _objc_release(uVar2);

  FUN_002a6220(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  dVar8 = (double)FUN_0029bb60();

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

  dVar8 = dVar8 + dVar10;

  FUN_0029e5e0(0,dVar8,in_d2,in_d3 - dVar8);

  _objc_release(uVar2);

  FUN_002a6220(param_1);

  auVar11 = _objc_retainAutoreleasedReturnValue();

  FUN_002a62a0(auVar11._0_8_,auVar11._8_8_,0x15ae2);

  lVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar11._0_8_);

  if (lVar4 != 0) {

    FUN_0029e5e0(0x4020000000000000,dVar8 + 6.0,in_d2 + -16.0,0x4046000000000000,lVar4);

  }

  FUN_00292ec0(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_0029e5e0(0,dVar8 + 54.0,in_d2,in_d3 - (dVar8 + 54.0));

  _objc_release(uVar2);

  iVar1 = FUN_0029a840(param_1);

  if (iVar1 != 0) {

    uStack_128 = 0;

    local_130 = 0;

    uStack_118 = 0;

    uStack_120 = 0;

    lStack_148 = 0;

    local_150 = 0;

    uStack_138 = 0;

    local_140 = (long *)0x0;

    FUN_0029a780(param_1);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_002a4840();

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_release(uVar2);

    lVar5 = FUN_00293880(uVar3,extraout_x1,&local_150,auStack_f8,0x10);

    if (lVar5 != 0) {

      lVar6 = *local_140;

      do {

        lVar7 = 0;

        do {

          if (*local_140 != lVar6) {

            _objc_enumerationMutation(uVar3);

          }

          uVar2 = *(undefined8 *)(lStack_148 + lVar7 * 8);

          uVar9 = FUN_00136804();

          FUN_0029e5e0(0,0x4028000000000000,in_d2,uVar9,uVar2);

          lVar7 = lVar7 + 1;

        } while (lVar5 != lVar7);

        lVar5 = FUN_00293880(uVar3,extraout_x1_00,&local_150,auStack_f8,0x10);

      } while (lVar5 != 0);

    }

    _objc_release(uVar3);

  }

  _objc_release(lVar4);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_78) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




