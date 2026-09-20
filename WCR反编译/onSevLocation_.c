// onSevLocation: @ 01959394

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

void WCRefineFakeLocationSettingsViewController::onSevLocation_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  code *local_b0;
  undefined *local_a8;
  ID local_a0;
  undefined1 auStack_98 [8];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  byte local_78;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  byte local_59;
  ID local_58;
  undefined8 local_50;
  undefined8 local_48;
  ID local_40 [2];
  SEL local_30;
  ID local_28;
  
  local_40[1] = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(local_40 + 1,param_3);
  local_40[0] = 0;
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_locationVC_026b9c48);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if ((IVar2 & 1) != 0) {
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_locationVC_026b9c48);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_40[0];
    local_40[0] = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  local_48 = 0;
  local_50 = 0;
  IVar1 = local_40[0];
  FUN_01959680();
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_40[0];
  local_58 = IVar1;
  FUN_019598c0(local_40[0],&local_48,&local_50);
  local_59 = (byte)IVar2;
  local_68 = *(undefined8 *)(local_28 + (long)_pickMode);
  *(undefined8 *)(local_28 + (long)_pickMode) = 0;
  _objc_initWeak(auStack_70,local_28);
  IVar2 = local_28;
  local_c0 = PTR___NSConcreteStackBlock_02578660;
  local_b8 = 0xc2000000;
  local_b4 = 0;
  local_b0 = FUN_01959e74;
  local_a8 = &DAT_0258a298;
  local_78 = local_59 & 1;
  local_90 = local_68;
  _objc_copyWeak(auStack_98,auStack_70);
  IVar1 = local_58;
  local_88 = local_48;
  local_80 = local_50;
  (*(code *)PTR__objc_retain_02578638)();
  local_a0 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar2,PTR_s_dismissViewControllerAnimated_co_0269cf98,1,&local_c0);
  _objc_storeStrong(&local_a0);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_70);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(local_40,0);
  _objc_storeStrong(local_40 + 1,0);
  return;
}

