// FUN_01abed10 @ 01abed10

void FUN_01abed10(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  lVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_count_0269cfe0);
  if (lVar2 != 0) {
    lVar2 = param_1 + 0x28;
    _objc_loadWeakRetained();
    lVar1 = local_20;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_groupId_0269ea88);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_addMembers_toGroupId__026bdf00,lVar1);
    (*(code *)PTR__objc_release_02578630)(uVar3);
    (*(code *)PTR__objc_release_02578630)(lVar2);
  }
  _objc_storeStrong(&local_20,0);
  return;
}

