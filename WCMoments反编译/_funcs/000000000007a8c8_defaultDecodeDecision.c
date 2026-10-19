// defaultDecodeDecision @0x7a8c8

/* Function Stack Size: 0x10 bytes */

ID WCMYBIBImageData::defaultDecodeDecision(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ID IVar2;
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
  _objc_initWeak(auStack_28,param_1);
  local_50 = PTR___NSConcreteStackBlock_001104f0;
  local_48 = 0xc2000000;
  local_44 = 0;
  local_40 = ___41__WCMYBIBImageData_defaultDecodeDecision__block_invoke;
  local_38 = &___block_descriptor_40_e8_32w_e21_B32__0_CGSize_dd_8d24l;
  _objc_copyWeak(auStack_30,auStack_28);
  uVar1 = _objc_retainBlock(&local_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  IVar2 = _objc_autoreleaseReturnValue(uVar1);
  return IVar2;
}

