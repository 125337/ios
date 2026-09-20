// FUN_01e42864 @ 01e42864

/* WARNING: Type propagation algorithm not settling */

void FUN_01e42864(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined1 auStack_40 [8];
  long local_38;
  long local_30 [4];
  
  local_30[2] = 0;
  local_30[3] = param_1;
  _objc_storeStrong(local_30 + 2);
  local_30[1] = 0;
  _objc_storeStrong(local_30 + 1,param_3);
  local_30[0] = 0;
  _objc_storeStrong(local_30,param_4);
  local_38 = param_1;
  (**(code **)(local_30[0] + 0x10))(local_30[0],1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_name_0269d828);
  _objc_retainAutoreleasedReturnValue();
  local_68 = PTR___NSConcreteStackBlock_02578660;
  local_60 = 0xc2000000;
  local_5c = 0;
  local_58 = FUN_01e42a0c;
  local_50 = &DAT_0257c948;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = uVar2;
  _objc_copyWeak(auStack_40,param_1 + 0x28);
  FUN_01e40be4(&cf_SR_Ty,&cf_R_Ty,uVar1,0x10,&local_68);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_storeStrong(&local_48);
  _objc_storeStrong(local_30,0);
  _objc_storeStrong(local_30 + 1,0);
  _objc_storeStrong(local_30 + 2,0);
  return;
}

