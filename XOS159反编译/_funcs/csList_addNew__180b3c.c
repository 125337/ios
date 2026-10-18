// csList_addNew @0x180b3c


/* Function Stack Size: 0x10 bytes */



void CadisCustomStyleListViewController::csList_addNew(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined1 auVar2 [16];

  undefined *local_48;

  undefined8 local_40;

  code *local_38;

  undefined *puStack_30;

  ID local_28;

  

  auVar2 = _objc_alloc(&objc::class_t::CadisCustomStyleEditorViewController);

  auVar2 = FUN_00296c80(auVar2._0_8_,auVar2._8_8_,0xffffffffffffffff);

  uVar1 = auVar2._0_8_;

  local_48 = PTR___NSConcreteStackBlock_003886f0;

  local_40 = 0xc2000000;

  local_38 = FUN_00180c0c;

  puStack_30 = &DAT_00388e60;

  local_28 = param_1;

  FUN_002a02a0(uVar1,auVar2._8_8_,&local_48);

  FUN_002990e0(param_1);

  auVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_0029aa80(auVar2._0_8_,auVar2._8_8_,uVar1,1);

  _objc_release(auVar2._0_8_);

  _objc_release(uVar1);

  return;

}




