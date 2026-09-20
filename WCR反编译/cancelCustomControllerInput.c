// cancelCustomControllerInput @ 01a49a00

/* Function Stack Size: 0x10 bytes */

void WCRefineGeneralFunctionViewController::cancelCustomControllerInput(ID param_1,SEL param_2)

{
  ID IVar1;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  _objc_setAssociatedObject(param_1,PTR_s_handleCustomControllerInput__026bca58,0,1);
  IVar1 = local_18;
  _objc_getAssociatedObject(local_18,&DAT_028e4487);
  _objc_retainAutoreleasedReturnValue();
  local_28 = IVar1;
  if (IVar1 != 0) {
    (**(code **)(IVar1 + 0x10))();
    _objc_setAssociatedObject(local_18,&DAT_028e4487,0,3);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

