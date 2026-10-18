// initWithIndex: @0x258a34


/* Function Stack Size: 0x18 bytes */



ID XZYHomeDockCustomStyleEditorViewController::initWithIndex_

             (ID param_1,SEL param_2,long_long param_3)



{

  cfstringStruct *pcVar1;

  ID IVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  cfstringStruct *pcVar5;

  undefined8 uVar6;

  undefined8 extraout_x1;

  long lVar7;

  long lVar8;

  undefined1 auVar9 [16];

  ID local_60;

  class_t *pcStack_58;

  

  pcStack_58 = &objc::class_t::XZYHomeDockCustomStyleEditorViewController;

  local_60 = param_1;

  IVar2 = _objc_msgSendSuper2(&local_60,"init");

  if (IVar2 != 0) {

    *(long_long *)(IVar2 + (long)_editIndex) = param_3;

    lVar7 = (long)_styleType;

    uVar3 = *(undefined8 *)(IVar2 + lVar7);

    *(cfstringStruct **)(IVar2 + lVar7) = &cf_js;

    _objc_release(uVar3);

    if (-1 < (long)param_3) {

      FUN_0024d85c();

      uVar3 = _objc_retainAutoreleasedReturnValue();

      auVar9 = FUN_00293860();

      if ((long)param_3 < auVar9._0_8_) {

        FUN_00299500(uVar3,auVar9._8_8_,param_3);

        auVar9 = _objc_retainAutoreleasedReturnValue();

        uVar4 = auVar9._0_8_;

        FUN_00299540(uVar4,auVar9._8_8_,&cf_name);

        pcVar5 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

        pcVar1 = &::cf___;

        if (pcVar5 != (cfstringStruct *)0x0) {

          pcVar1 = pcVar5;

        }

        lVar8 = (long)_styleName;

        _objc_retain(pcVar1);

        uVar6 = *(undefined8 *)(IVar2 + lVar8);

        *(cfstringStruct **)(IVar2 + lVar8) = pcVar1;

        _objc_release(uVar6);

        _objc_release(pcVar5);

        FUN_00299540(uVar4,extraout_x1,&cf_type);

        pcVar5 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

        pcVar1 = &cf_js;

        if (pcVar5 != (cfstringStruct *)0x0) {

          pcVar1 = pcVar5;

        }

        _objc_retain(pcVar1);

        uVar6 = *(undefined8 *)(IVar2 + lVar7);

        *(cfstringStruct **)(IVar2 + lVar7) = pcVar1;

        _objc_release(uVar6);

        _objc_release(pcVar5);

        _objc_release(uVar4);

      }

      _objc_release(uVar3);

    }

  }

  return IVar2;

}




