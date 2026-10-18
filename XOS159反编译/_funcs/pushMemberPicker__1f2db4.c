// pushMemberPicker @0x1f2db4


/* Function Stack Size: 0x10 bytes */



void XZYCLGCustomGroupEditorViewController::pushMemberPicker(ID param_1,SEL param_2)



{

  undefined *puVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined *puVar4;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined1 auVar5 [16];

  undefined *local_70;

  undefined8 local_68;

  code *local_60;

  undefined *puStack_58;

  undefined1 auStack_50 [8];

  undefined1 auStack_48 [8];

  

  FUN_00295de0();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_001f13cc();

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar2);

  FUN_00299540(uVar3,extraout_x1,&cf_members);

  puVar4 = (undefined *)_objc_retainAutoreleasedReturnValue();

  puVar1 = PTR____NSArray0__struct_00388308;

  if (puVar4 != (undefined *)0x0) {

    puVar1 = puVar4;

  }

  _objc_retain(puVar1);

  _objc_release(puVar4);

  auVar5 = _objc_alloc(&objc::class_t::XZYCLGSessionPickerViewController);

  uVar2 = FUN_00296a20(auVar5._0_8_,auVar5._8_8_,puVar1);

  _objc_initWeak(auStack_48,param_1);

  local_70 = PTR___NSConcreteStackBlock_003886f0;

  local_68 = 0xc2000000;

  local_60 = FUN_001f2f70;

  puStack_58 = &DAT_0038f008;

  _objc_copyWeak(auStack_50,auStack_48);

  FUN_002a01e0(uVar2,extraout_x1_00,&local_70);

  FUN_002990e0(param_1);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_0029aa80(auVar5._0_8_,auVar5._8_8_,uVar2,1);

  _objc_release(auVar5._0_8_);

  _objc_destroyWeak(auStack_50);

  _objc_destroyWeak(auStack_48);

  _objc_release(uVar2);

  _objc_release(puVar1);

  _objc_release(uVar3);

  return;

}




