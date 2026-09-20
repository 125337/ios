// setMediaFileName:forScene:dark: @ 015da098

/* Function Stack Size: 0x24 bytes */

void WCRGlobalPageBackgroundStore::setMediaFileName_forScene_dark_
               (ID param_1,SEL param_2,ID param_3,ID param_4,bool param_5)

{
  undefined8 uVar1;
  ID IVar2;
  ID IVar3;
  long lVar4;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  undefined8 local_58;
  long local_50;
  byte local_48;
  long local_40;
  undefined4 local_38;
  byte local_31;
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
  local_31 = (byte)param_5;
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_supportedScenes_026a8e20);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if ((IVar3 & 1) == 0) {
    local_38 = 1;
    goto LAB_015da29c;
  }
  lVar4 = local_28;
  FUN_015d5afc();
  _objc_retainAutoreleasedReturnValue();
  local_40 = lVar4;
  (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_length_0269cca0);
  if (lVar4 == 0) {
LAB_015da1b4:
    IVar2 = local_18;
    uVar1 = local_30;
    local_78 = PTR___NSConcreteStackBlock_02578660;
    local_70 = 0xc2000000;
    local_6c = 0;
    local_68 = FUN_015da2c4;
    local_60 = &DAT_025873f8;
    (*(code *)PTR__objc_retain_02578638)();
    lVar4 = local_40;
    local_58 = uVar1;
    local_48 = local_31 & 1;
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = lVar4;
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_updateConfiguration__026b0fd8,&local_78);
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_58,0);
    local_38 = 0;
  }
  else {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isSupportedFileName__026b0fd0,local_40);
    if ((IVar2 & 1) != 0) goto LAB_015da1b4;
    local_38 = 1;
  }
  _objc_storeStrong(&local_40,0);
LAB_015da29c:
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

