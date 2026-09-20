// FUN_00f6b020 @ 00f6b020

void FUN_00f6b020(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  puVar1 = PTR_WCRefineForwardTargetHistory_026cebb8;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_itemId_026ac860);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_renameItemWithId_to__026ac960,uVar2);
  (*(code *)PTR__objc_release_02578630)(lVar6);
  (*(code *)PTR__objc_release_02578630)(lVar5);
  (*(code *)PTR__objc_release_02578630)(lVar4);
  (*(code *)PTR__objc_release_02578630)(lVar3);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  lVar3 = param_1 + 0x30;
  _objc_loadWeakRetained();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar3);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  lVar3 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar3);
  (*(code *)PTR__objc_release_02578630)(param_1);
  _objc_storeStrong(&local_20,0);
  return;
}

