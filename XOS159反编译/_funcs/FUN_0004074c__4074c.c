// FUN_0004074c @0x4074c


void FUN_0004074c(long param_1)



{

  cfstringStruct *pcVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  cfstringStruct *pcVar4;

  long lVar5;

  long lVar6;

  long lVar7;

  long lVar8;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined1 auVar9 [16];

  undefined1 auVar10 [16];

  undefined8 local_60;

  long local_58;

  

  local_58 = *(long *)PTR____stack_chk_guard_00388738;

  FUN_002a50a0(*(undefined8 *)(param_1 + 0x20));

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_00295440();

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5020();

  pcVar4 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  pcVar1 = &cf___;

  if (pcVar4 != (cfstringStruct *)0x0) {

    pcVar1 = pcVar4;

  }

  _objc_retain(pcVar1);

  _objc_release(pcVar4);

  _objc_release(uVar3);

  _objc_release(uVar2);

  FUN_002a0060(*(undefined8 *)(param_1 + 0x28),extraout_x1,pcVar1,&cf_xzyTimeLabelSuffixText);

  FUN_002a4a40(*(undefined8 *)(param_1 + 0x28));

  FUN_002990e0(*(undefined8 *)(param_1 + 0x30));

  lVar5 = _objc_retainAutoreleasedReturnValue();

  _objc_getAssociatedObject(*(undefined8 *)(param_1 + 0x30),"bubbleNavController");

  lVar6 = _objc_retainAutoreleasedReturnValue();

  if (lVar6 == 0) {

    lVar7 = 0;

  }

  else {

    FUN_00299260(lVar6);

    lVar7 = _objc_retainAutoreleasedReturnValue();

    if (lVar7 != 0) {

      _objc_retain(lVar7);

      _objc_release(lVar5);

      lVar5 = lVar7;

    }

  }

  FUN_002a5520(lVar5);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6220();

  auVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_002a62a0(auVar9._0_8_,auVar9._8_8_,0x3ed);

  lVar8 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar9._0_8_);

  _objc_release(uVar2);

  if (lVar8 != 0) {

    FUN_00296780(&_OBJC_CLASS___NSIndexPath,extraout_x1_00,1,9);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    local_60 = auVar9._0_8_;

    FUN_00291e00(&_OBJC_CLASS___NSArray,auVar9._8_8_,&local_60,1);

    auVar10 = _objc_retainAutoreleasedReturnValue();

    FUN_0029b1a0(lVar8,auVar10._8_8_,auVar10._0_8_,5);

    _objc_release(auVar10._0_8_);

    _objc_release(auVar9._0_8_);

  }

  _objc_release(lVar8);

  _objc_release(lVar7);

  _objc_release(lVar6);

  _objc_release(lVar5);

  _objc_release(pcVar1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_58) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




