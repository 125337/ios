// modifyImageWithModifier:image:completion: @0x7aae0

/* Function Stack Size: 0x28 bytes */

void WCMYBIBImageData::modifyImageWithModifier_image_completion_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4,ID param_5,ID param_6,
               undefined4 param_7)

{
  undefined8 uVar1;
  long lVar2;
  ID IVar3;
  undefined8 local_d0;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  long local_38;
  undefined8 local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  if (local_28 == 0) {
    (**(code **)(local_38 + 0x10))(local_38,local_30);
  }
  else {
    _objc_msgSend_setLoadingStatus_(local_18,local_d0,4);
    _objc_initWeak(auStack_40,local_18);
    IVar3 = local_18;
    lVar2 = local_28;
    uVar1 = local_30;
    local_70 = PTR___NSConcreteStackBlock_001104f0;
    local_68 = 0xc2000000;
    local_64 = 0;
    local_60 = ___61__WCMYBIBImageData_modifyImageWithModifier_image_completion___block_invoke;
    local_58 = &___block_descriptor_48_e8_32bs40w_e17_v16__0__UIImage_8l;
    _objc_copyWeak(auStack_48,auStack_40);
    local_50 = (*(code *)PTR__objc_retain_00110460)(local_38);
    (**(code **)(lVar2 + 0x10))(lVar2,IVar3,uVar1,&local_70);
    _objc_storeStrong(&local_50,0);
    _objc_destroyWeak(auStack_48);
    _objc_destroyWeak(auStack_40);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

