// FUN_0016cfe0 @0x16cfe0


void FUN_0016cfe0(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  long lVar4;

  long lVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 *puVar6;

  undefined8 uVar7;

  undefined1 auVar8 [16];

  undefined *local_68;

  undefined8 local_60;

  code *local_58;

  undefined *puStack_50;

  undefined8 local_48;

  

  FUN_00291d20(&_OBJC_CLASS___NSMutableArray);

  auVar8 = _objc_retainAutoreleasedReturnValue();

  uVar1 = auVar8._0_8_;

  puVar6 = (undefined8 *)PTR__UTTypeImage_00388698;

  if (((*(byte *)(param_1 + 0x28) & 1) != 0) ||

     (puVar6 = (undefined8 *)PTR__UTTypeMovie_003886b0, *(char *)(param_1 + 0x29) == '\x01')) {

    FUN_00291240(uVar1,auVar8._8_8_,*puVar6);

  }

  auVar8 = FUN_00293860(uVar1);

  if (auVar8._0_8_ == 0) {

    FUN_00291240(uVar1,auVar8._8_8_,*(undefined8 *)PTR__UTTypeItem_003886a0);

  }

  auVar8 = _objc_alloc(&_OBJC_CLASS___UIDocumentPickerViewController);

  uVar2 = FUN_002968c0(auVar8._0_8_,auVar8._8_8_,uVar1,1);

  _objc_setAssociatedObject(uVar2,PTR_LOOP_003e6c10,PTR____kCFBooleanTrue_00388320,1);

  FUN_0029cb00(uVar2,extraout_x1,*(undefined1 *)(param_1 + 0x2a));

  uVar3 = _objc_alloc_init(&objc::class_t::CadisOpenPanelDelegate);

  local_68 = PTR___NSConcreteStackBlock_003886f0;

  local_60 = 0xc2000000;

  local_58 = FUN_0016d220;

  puStack_50 = &DAT_0038da58;

  uVar7 = *(undefined8 *)(param_1 + 0x20);

  _objc_retain(uVar7);

  local_48 = uVar7;

  FUN_0029d5c0(uVar3,extraout_x1_00,&local_68);

  FUN_0029dca0(uVar2,extraout_x1_01,uVar3);

  uVar7 = extraout_x1_02;

  if (DAT_003e8a20 == 0) {

    FUN_0029c6e0(&_OBJC_CLASS___NSMutableSet);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    lVar5 = DAT_003e8a20;

    DAT_003e8a20 = lVar4;

    _objc_release(lVar5);

    uVar7 = extraout_x1_03;

  }

  FUN_00291240(DAT_003e8a20,uVar7,uVar3);

  FUN_0016cb00();

  auVar8 = _objc_retainAutoreleasedReturnValue();

  lVar5 = auVar8._0_8_;

  if (lVar5 == 0) {

    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);

  }

  else {

    FUN_0029a500(lVar5,auVar8._8_8_,uVar2,1,0);

  }

  _objc_release(lVar5);

  _objc_release(local_48);

  _objc_release(uVar3);

  _objc_release(uVar2);

  _objc_release(uVar1);

  return;

}




