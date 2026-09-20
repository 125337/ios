// addDynamicMethodForSelector:folderName: @ 01f251fc

/* Function Stack Size: 0x20 bytes */

void WCRefineTouchTrailViewController::addDynamicMethodForSelector_folderName_
               (ID param_1,SEL param_2,SEL param_3,ID param_4)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined **local_38;
  undefined8 local_30;
  SEL local_28;
  SEL local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_30,param_4);
  uVar1 = local_30;
  ppuVar2 = &local_60;
  local_60 = PTR___NSConcreteStackBlock_02578660;
  local_58 = 0xc2000000;
  local_54 = 0;
  local_50 = FUN_01f25310;
  local_48 = &DAT_02589c48;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = uVar1;
  _objc_retainBlock();
  ppuVar3 = ppuVar2;
  _imp_implementationWithBlock();
  (*(code *)PTR__objc_release_02578630)(ppuVar2);
  local_38 = ppuVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
  _class_replaceMethod();
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  return;
}

