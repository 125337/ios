// imageWithContentsOfFile: @0x68c78

/* Function Stack Size: 0x18 bytes */

ID WCMYBImage::imageWithContentsOfFile_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  ID IVar2;
  undefined8 local_48;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  _objc_msgSend_imageWithContentsOfFile_decodeDecision_(local_18,local_48,local_28,0);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_28,0);
  IVar2 = _objc_autoreleaseReturnValue(uVar1);
  return IVar2;
}

