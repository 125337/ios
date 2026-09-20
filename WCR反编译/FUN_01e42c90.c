// FUN_01e42c90 @ 01e42c90

/* WARNING: Type propagation algorithm not settling */

void FUN_01e42c90(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
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
  puVar1 = PTR_WCRefineGroupManagementViewController_026ce580;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_groupId_0269ea88);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + 0x28;
  _objc_loadWeakRetained();
  local_60 = PTR___NSConcreteStackBlock_02578660;
  local_58 = 0xc2000000;
  local_54 = 0;
  local_50 = FUN_01e42e30;
  local_48 = &DAT_0257be28;
  _objc_copyWeak(auStack_40,param_1 + 0x28);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_pushGroupEditorForGroupId_fromVi_026a26a8,uVar2,lVar3,&local_60);
  (*(code *)PTR__objc_release_02578630)(lVar3);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_storeStrong(local_30);
  _objc_storeStrong(local_30 + 1,0);
  _objc_storeStrong(local_30 + 2,0);
  return;
}

