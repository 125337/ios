// saveAction @0x86494

/* Function Stack Size: 0x10 bytes */

ID WCMYBIBToolViewHandler::saveAction(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ID IVar5;
  undefined8 local_78;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  undefined1 auStack_40 [24];
  undefined1 auStack_28 [8];
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  if (*(long *)(param_1 + 0x48) == 0) {
    _objc_initWeak(auStack_28,param_1);
    uVar1 = _objc_msgSend_sharedCopywriter(&objc::class_t::WCMYBIBCopywriter,local_78);
    uVar1 = _objc_retainAutoreleasedReturnValue(uVar1);
    uVar2 = _objc_msgSend_saveToPhotoAlbum(uVar1,local_78);
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
    local_60 = PTR___NSConcreteStackBlock_001104f0;
    local_58 = 0xc2000000;
    local_54 = 0;
    local_50 = ___36__WCMYBIBToolViewHandler_saveAction__block_invoke;
    local_48 = &___block_descriptor_40_e8_32w_e31_v16__0__<WCMYBIBDataProtocol>_8l;
    _objc_copyWeak(auStack_40,auStack_28);
    uVar3 = _objc_msgSend_actionWithName_action_
                      (&objc::class_t::WCMYBIBSheetAction,local_78,uVar2,&local_60);
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    uVar4 = *(undefined8 *)(local_18 + 0x48);
    *(undefined8 *)(local_18 + 0x48) = uVar3;
    (*(code *)PTR__objc_release_00110458)(uVar4);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    (*(code *)PTR__objc_release_00110458)(uVar1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_28);
  }
  IVar5 = _objc_retainAutoreleaseReturnValue(*(undefined8 *)(local_18 + 0x48));
  return IVar5;
}

