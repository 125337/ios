// viewWillAppear: @0x1f127c


/* Function Stack Size: 0x14 bytes */



void XZYCLGCustomGroupEditorViewController::viewWillAppear_(ID param_1,SEL param_2,bool param_3)



{

  undefined8 uVar1;

  long lVar2;

  undefined1 auVar3 [16];

  ID local_40;

  class_t *pcStack_38;

  

  pcStack_38 = &objc::class_t::XZYCLGCustomGroupEditorViewController;

  local_40 = param_1;

  _objc_msgSendSuper2(&local_40,"viewWillAppear:",param_3);

  FUN_00295de0(param_1);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_001f13cc();

  lVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar1);

  if (lVar2 == 0) {

    FUN_002990e0(param_1);

    auVar3 = _objc_retainAutoreleasedReturnValue();

    uVar1 = auVar3._0_8_;

    FUN_0029a080(uVar1,auVar3._8_8_,1);

    _objc_unsafeClaimAutoreleasedReturnValue();

  }

  else {

    FUN_00295de0(param_1);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    FUN_001cb9dc();

    auVar3 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1f60(param_1,auVar3._8_8_,auVar3._0_8_);

    _objc_release(auVar3._0_8_);

    _objc_release(uVar1);

    FUN_002a4dc0(param_1);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    FUN_0029b140();

  }

  _objc_release(uVar1);

  _objc_release(lVar2);

  return;

}




