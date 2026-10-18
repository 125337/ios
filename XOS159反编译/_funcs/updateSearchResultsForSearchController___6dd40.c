// updateSearchResultsForSearchController: @0x6dd40


/* Function Stack Size: 0x18 bytes */



void XZYFvEmotionPickerViewController::updateSearchResultsForSearchController_

               (ID param_1,SEL param_2,ID param_3)



{

  cfstringStruct *pcVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  cfstringStruct *pcVar4;

  long lVar5;

  undefined8 extraout_x1;

  undefined8 uVar6;

  cfstringStruct **unaff_x26;

  undefined1 auVar7 [16];

  undefined *local_80;

  undefined8 local_78;

  code *local_70;

  undefined *puStack_68;

  ID local_60;

  cfstringStruct *local_58;

  

  _objc_retain(param_3);

  FUN_0029bf00(param_3);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5020();

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002a64c0(&_OBJC_CLASS___NSCharacterSet);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  uVar6 = auVar7._0_8_;

  FUN_002a45c0(uVar3,auVar7._8_8_,uVar6);

  pcVar4 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  pcVar1 = &::cf___;

  if (pcVar4 != (cfstringStruct *)0x0) {

    pcVar1 = pcVar4;

  }

  _objc_retain(pcVar1);

  _objc_release(pcVar4);

  _objc_release(uVar6);

  _objc_release(uVar3);

  _objc_release(uVar2);

  lVar5 = FUN_00297fa0(pcVar1);

  if (lVar5 == 0) {

    FUN_00294bc0(param_1);

    auVar7 = _objc_retainAutoreleasedReturnValue();

    uVar2 = auVar7._0_8_;

  }

  else {

    FUN_00294bc0(param_1);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    local_80 = PTR___NSConcreteStackBlock_003886f0;

    local_78 = 0xc2000000;

    local_70 = FUN_0006dfe0;

    puStack_68 = &DAT_0038a120;

    unaff_x26 = &local_58;

    local_60 = param_1;

    _objc_retain(pcVar1);

    local_58 = pcVar1;

    FUN_0029a160(&_OBJC_CLASS___NSPredicate,extraout_x1,&local_80);

    auVar7 = _objc_retainAutoreleasedReturnValue();

    uVar6 = auVar7._0_8_;

    FUN_002952a0(uVar2,auVar7._8_8_,uVar6);

    auVar7 = _objc_retainAutoreleasedReturnValue();

  }

  FUN_0029e4a0(param_1,auVar7._8_8_,auVar7._0_8_);

  if (lVar5 != 0) {

    _objc_release(auVar7._0_8_);

    _objc_release(uVar6);

  }

  _objc_release(uVar2);

  FUN_002a4dc0(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar2);

  if (lVar5 != 0) {

    _objc_release(*unaff_x26);

  }

  _objc_release(pcVar1);

  _objc_release(param_3);

  return;

}




