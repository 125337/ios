// FUN_01e47f90 @ 01e47f90

void FUN_01e47f90(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  code *local_38;
  undefined *local_30;
  undefined1 auStack_28 [8];
  long local_20;
  long local_18;
  
  puVar1 = PTR_WCRefineGroupManagementViewController_026ce580;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_tabId_026a8270);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + 0x28;
  _objc_loadWeakRetained();
  local_48 = PTR___NSConcreteStackBlock_02578660;
  local_40 = 0xc2000000;
  local_3c = 0;
  local_38 = FUN_01e480c8;
  local_30 = &DAT_0257be28;
  _objc_copyWeak(auStack_28,param_1 + 0x28);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_pushGroupEditorForGroupId_fromVi_026a8300,uVar2,lVar3,1,&local_48);
  (*(code *)PTR__objc_release_02578630)(lVar3);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  _objc_destroyWeak(auStack_28);
  return;
}

