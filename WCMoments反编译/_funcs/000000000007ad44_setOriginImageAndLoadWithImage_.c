// setOriginImageAndLoadWithImage: @0x7ad44

/* Function Stack Size: 0x18 bytes */

void WCMYBIBImageData::setOriginImageAndLoadWithImage_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_80;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined1 auStack_48 [24];
  undefined1 auStack_30 [8];
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  _objc_initWeak(auStack_30,local_18);
  IVar1 = local_18;
  uVar2 = _objc_msgSend_originImageModifier(local_18,local_80);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar2);
  uVar2 = local_28;
  local_68 = PTR___NSConcreteStackBlock_001104f0;
  local_60 = 0xc2000000;
  local_5c = 0;
  local_58 = ___51__WCMYBIBImageData_setOriginImageAndLoadWithImage___block_invoke;
  local_50 = &___block_descriptor_40_e8_32w_e17_v16__0__UIImage_8l;
  _objc_copyWeak(auStack_48,auStack_30);
  _objc_msgSend_modifyImageWithModifier_image_completion_(IVar1,local_80,uVar3,uVar2,&local_68);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_30);
  _objc_storeStrong(&local_28,0);
  return;
}

