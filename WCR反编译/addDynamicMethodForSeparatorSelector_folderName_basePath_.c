// addDynamicMethodForSeparatorSelector:folderName:basePath: @ 01c69258

/* Function Stack Size: 0x28 bytes */

void WCRefineNavigationAvatarViewController::
     addDynamicMethodForSeparatorSelector_folderName_basePath_
               (ID param_1,SEL param_2,SEL param_3,ID param_4,ID param_5)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined **local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  SEL local_28;
  SEL local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_30,param_4);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  uVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_stringByAppendingPathComponent__026cab30,local_30);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &local_70;
  local_70 = PTR___NSConcreteStackBlock_02578660;
  local_68 = 0xc2000000;
  local_64 = 0;
  local_60 = FUN_01c693cc;
  local_58 = &DAT_02589c48;
  local_40 = uVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = uVar1;
  _objc_retainBlock();
  ppuVar3 = ppuVar2;
  _imp_implementationWithBlock();
  (*(code *)PTR__objc_release_02578630)(ppuVar2);
  local_48 = ppuVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
  _class_replaceMethod();
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return;
}

