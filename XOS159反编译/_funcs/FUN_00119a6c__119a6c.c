// FUN_00119a6c @0x119a6c


void FUN_00119a6c(long param_1)



{

  cfstringStruct *pcVar1;

  undefined8 uVar2;

  cfstringStruct *pcVar3;

  cfstringStruct *pcVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  long lVar9;

  undefined8 uVar10;

  undefined8 uVar11;

  undefined8 uVar12;

  undefined8 uVar13;

  undefined8 extraout_x1;

  float fVar14;

  double dVar15;

  double dVar16;

  double dVar17;

  double dVar18;

  undefined1 auVar19 [16];

  cfstringStruct *local_f0;

  cfstringStruct *pcStack_e8;

  cfstringStruct *local_e0;

  cfstringStruct *local_d8;

  cfstringStruct *local_d0;

  cfstringStruct *local_c8;

  cfstringStruct *local_c0;

  cfstringStruct *pcStack_b8;

  undefined8 local_b0;

  undefined8 local_a8;

  undefined8 local_a0;

  undefined8 local_98;

  long local_90;

  

  local_90 = *(long *)PTR____stack_chk_guard_00388738;

  FUN_002a50a0(*(undefined8 *)(param_1 + 0x20));

  auVar19 = _objc_retainAutoreleasedReturnValue();

  FUN_00299500(auVar19._0_8_,auVar19._8_8_,0);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5020();

  pcVar3 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  pcVar1 = &cf___;

  if (pcVar3 != (cfstringStruct *)0x0) {

    pcVar1 = pcVar3;

  }

  _objc_retain();

  _objc_release(pcVar3);

  _objc_release(uVar2);

  _objc_release(auVar19._0_8_);

  FUN_002a50a0(*(undefined8 *)(param_1 + 0x20));

  auVar19 = _objc_retainAutoreleasedReturnValue();

  FUN_00299500(auVar19._0_8_,auVar19._8_8_,1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5020();

  pcVar4 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  pcVar3 = &cf___;

  if (pcVar4 != (cfstringStruct *)0x0) {

    pcVar3 = pcVar4;

  }

  _objc_retain();

  _objc_release(pcVar4);

  _objc_release(uVar2);

  _objc_release(auVar19._0_8_);

  FUN_002a50a0(*(undefined8 *)(param_1 + 0x20));

  auVar19 = _objc_retainAutoreleasedReturnValue();

  FUN_00299500(auVar19._0_8_,auVar19._8_8_,2);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5020();

  uVar5 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar2);

  _objc_release(auVar19._0_8_);

  FUN_002a50a0(*(undefined8 *)(param_1 + 0x20));

  auVar19 = _objc_retainAutoreleasedReturnValue();

  FUN_00299500(auVar19._0_8_,auVar19._8_8_,3);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5020();

  uVar6 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar2);

  _objc_release(auVar19._0_8_);

  FUN_002a50a0(*(undefined8 *)(param_1 + 0x20));

  auVar19 = _objc_retainAutoreleasedReturnValue();

  FUN_00299500(auVar19._0_8_,auVar19._8_8_,4);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5020();

  uVar7 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar2);

  _objc_release(auVar19._0_8_);

  FUN_002a50a0(*(undefined8 *)(param_1 + 0x20));

  auVar19 = _objc_retainAutoreleasedReturnValue();

  FUN_00299500(auVar19._0_8_,auVar19._8_8_,5);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5020();

  uVar8 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar2);

  _objc_release(auVar19._0_8_);

  lVar9 = FUN_00297fa0(uVar5);

  if (lVar9 == 0) {

    dVar17 = 16.0;

  }

  else {

    fVar14 = (float)FUN_00295480(uVar5);

    dVar17 = (double)fVar14;

  }

  lVar9 = FUN_00297fa0(uVar6);

  if (lVar9 == 0) {

    dVar18 = 3.0;

  }

  else {

    fVar14 = (float)FUN_00295480(uVar6);

    dVar18 = (double)fVar14;

  }

  lVar9 = FUN_00297fa0(uVar7);

  if (lVar9 == 0) {

    dVar15 = 0.0;

  }

  else {

    fVar14 = (float)FUN_00295480(uVar7);

    dVar15 = (double)fVar14;

  }

  lVar9 = FUN_00297fa0(uVar8);

  if (lVar9 == 0) {

    dVar16 = 0.0;

  }

  else {

    fVar14 = (float)FUN_00295480(uVar8);

    dVar16 = (double)fVar14;

  }

  if (dVar17 <= 0.0) {

    dVar17 = 16.0;

  }

  local_f0 = &cf_name;

  pcStack_e8 = &cf_darkName;

  local_e0 = &cf_size;

  local_c0 = pcVar1;

  pcStack_b8 = pcVar3;

  FUN_002993a0(dVar17,&_OBJC_CLASS___NSNumber);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  if (dVar18 <= 0.0) {

    dVar18 = 3.0;

  }

  local_d8 = &cf_speed;

  local_b0 = uVar2;

  FUN_002993a0(dVar18,&_OBJC_CLASS___NSNumber);

  uVar10 = _objc_retainAutoreleasedReturnValue();

  local_d0 = &cf_offsetX;

  local_a8 = uVar10;

  FUN_002993a0(dVar15,&_OBJC_CLASS___NSNumber);

  uVar11 = _objc_retainAutoreleasedReturnValue();

  local_c8 = &cf_offsetY;

  local_a0 = uVar11;

  FUN_002993a0(dVar16,&_OBJC_CLASS___NSNumber);

  auVar19 = _objc_retainAutoreleasedReturnValue();

  local_98 = auVar19._0_8_;

  FUN_00294560(&_OBJC_CLASS___NSDictionary,auVar19._8_8_,&local_c0,&local_f0,6);

  uVar12 = _objc_retainAutoreleasedReturnValue();

  uVar13 = FUN_00299020();

  _objc_release(uVar12);

  _objc_release(auVar19._0_8_);

  _objc_release(uVar11);

  _objc_release(uVar10);

  _objc_release(uVar2);

  auVar19 = FUN_00297fa0(*(undefined8 *)(param_1 + 0x28));

  uVar2 = auVar19._8_8_;

  if (auVar19._0_8_ != 0) {

    FUN_002a00a0(uVar13,uVar2,*(undefined8 *)(param_1 + 0x28),&cf_pathCode);

    uVar2 = extraout_x1;

  }

  FUN_002a0060(*(undefined8 *)(param_1 + 0x30),uVar2,uVar13,*(undefined8 *)(param_1 + 0x38));

  FUN_002a4a40(*(undefined8 *)(param_1 + 0x30));

  FUN_0029b140(*(undefined8 *)(param_1 + 0x40));

  _objc_release(uVar13);

  _objc_release(uVar8);

  _objc_release(uVar7);

  _objc_release(uVar6);

  _objc_release(uVar5);

  _objc_release(pcVar3);

  _objc_release(pcVar1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_90) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




