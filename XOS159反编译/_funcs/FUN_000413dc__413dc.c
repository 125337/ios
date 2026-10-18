// FUN_000413dc @0x413dc


void FUN_000413dc(long param_1)



{

  cfstringStruct *pcVar1;

  undefined1 auVar2 [16];

  int iVar3;

  long lVar5;

  long lVar6;

  long lVar7;

  undefined8 uVar8;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 uVar9;

  undefined1 auVar10 [16];

  undefined8 uVar4;

  

  iVar3 = FUN_002979c0(*(undefined8 *)(param_1 + 0x20));

  pcVar1 = &cf___T_u__euMn_eN_NvMrn_;

  if (iVar3 == 0) {

    pcVar1 = &cf__sQ__O_uMn_eN_NvMrn_;

  }

  FUN_00291580(&_OBJC_CLASS___UIAlertController,extraout_x1,&cf_c_y,pcVar1,1);

  auVar10 = _objc_retainAutoreleasedReturnValue();

  uVar4 = auVar10._0_8_;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,auVar10._8_8_,&cf_Sm,1,0);

  auVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar4,auVar10._8_8_,auVar10._0_8_);

  _objc_release(auVar10._0_8_);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_00,&cf_zsS_T,2,

               &PTR___NSConcreteGlobalBlock_00389790);

  auVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar4,auVar10._8_8_,auVar10._0_8_);

  _objc_release(auVar10._0_8_);

  uVar9 = *(undefined8 *)(param_1 + 0x28);

  _objc_retain(uVar9);

  _objc_getAssociatedObject(*(undefined8 *)(param_1 + 0x28),"bubbleNavController");

  auVar10 = _objc_retainAutoreleasedReturnValue();

  lVar5 = auVar10._0_8_;

  if (lVar5 == 0) {

    auVar2._8_8_ = 0;

    auVar2._0_8_ = auVar10._8_8_;

    auVar10 = auVar2 << 0x40;

  }

  else {

    FUN_00299260(lVar5);

    auVar10 = _objc_retainAutoreleasedReturnValue();

    lVar6 = auVar10._0_8_;

    if (lVar6 != 0) {

      FUN_002a5520(lVar6);

      lVar7 = _objc_retainAutoreleasedReturnValue();

      _objc_release();

      auVar10._8_8_ = extraout_x1_01;

      auVar10._0_8_ = lVar6;

      if (lVar7 != 0) {

        FUN_002a5520(lVar6);

        uVar8 = _objc_retainAutoreleasedReturnValue();

        _objc_release(uVar9);

        auVar10._8_8_ = extraout_x1_02;

        uVar9 = uVar8;

      }

    }

  }

  FUN_0029a500(uVar9,auVar10._8_8_,uVar4,1,0);

  _objc_release(auVar10._0_8_);

  _objc_release(lVar5);

  _objc_release(uVar9);

  _objc_release(uVar4);

  return;

}




