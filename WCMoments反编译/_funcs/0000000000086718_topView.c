// topView @0x86718

/* Function Stack Size: 0x10 bytes */

ID WCMYBIBToolViewHandler::topView(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined8 local_70;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  if (*(long *)(param_1 + 0x40) == 0) {
    uVar1 = _objc_opt_new(&objc::class_t::WCMYBIBTopView);
    uVar2 = *(undefined8 *)(local_18 + 0x40);
    *(undefined8 *)(local_18 + 0x40) = uVar1;
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_msgSend_setOperationType_(*(undefined8 *)(local_18 + 0x40),local_70,1);
    _objc_initWeak(auStack_28,local_18);
    uVar1 = *(undefined8 *)(local_18 + 0x40);
    local_50 = PTR___NSConcreteStackBlock_001104f0;
    local_48 = 0xc2000000;
    local_44 = 0;
    local_40 = ___33__WCMYBIBToolViewHandler_topView__block_invoke;
    local_38 = &___block_descriptor_40_e8_32w_e8_v16__0q8l;
    _objc_copyWeak(auStack_30,auStack_28);
    _objc_msgSend_setClickOperation_(uVar1,local_70,&local_50);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  IVar3 = _objc_retainAutoreleaseReturnValue(*(undefined8 *)(local_18 + 0x40));
  return IVar3;
}

