// FUN_01ac0f10 @ 01ac0f10

void FUN_01ac0f10(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uVar1 = local_20;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_groupId_0269ea88);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_addMembers_toGroupId__026bdf00,uVar1);
  (*(code *)PTR__objc_release_02578630)(uVar3);
  (*(code *)PTR__objc_release_02578630)(lVar2);
  _objc_storeStrong(&local_20,0);
  return;
}

