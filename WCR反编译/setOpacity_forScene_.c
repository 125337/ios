// setOpacity:forScene: @ 015d9178

/* Function Stack Size: 0x20 bytes */

void WCRGlobalPageBackgroundStore::setOpacity_forScene_
               (ID param_1,SEL param_2,double param_3,ID param_4)

{
  bool bVar1;
  undefined8 uVar2;
  ID IVar3;
  ID IVar4;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined8 local_48;
  double local_40;
  uint local_34;
  undefined8 local_30;
  double local_28;
  SEL local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_30,param_4);
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_supportedScenes_026a8e20);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  IVar3 = local_18;
  uVar2 = local_30;
  bVar1 = (IVar4 & 1) != 0;
  if (bVar1) {
    local_68 = PTR___NSConcreteStackBlock_02578660;
    local_60 = 0xc2000000;
    local_5c = 0;
    local_58 = FUN_015d92c4;
    local_50 = &DAT_025873c8;
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = uVar2;
    local_40 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_updateConfiguration__026b0fd8,&local_68);
    _objc_storeStrong(&local_48,0);
  }
  local_34 = (uint)!bVar1;
  _objc_storeStrong(&local_30,0);
  return;
}

