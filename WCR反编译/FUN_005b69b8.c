// FUN_005b69b8 @ 005b69b8

void FUN_005b69b8(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  ulong local_60;
  undefined1 *local_58;
  undefined4 local_50;
  ulong local_40;
  bool local_31;
  ulong local_30;
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_respondsToSelector__026ca818,PTR_s_getTableView_026a09c8);
  local_31 = false;
  bVar2 = (param_1 & 1) == 0;
  if (bVar2) {
    local_60 = 0;
  }
  else {
    local_60 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_getTableView_026a09c8);
    _objc_retainAutoreleasedReturnValue();
    local_30 = local_60;
  }
  local_31 = !bVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_60;
  if ((local_31 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  uVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tableHeaderView_0269ea08);
  _objc_retainAutoreleasedReturnValue();
  local_40 = uVar3;
  if (uVar3 == 0) {
    local_50 = 1;
  }
  else {
    puVar4 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_18;
    uVar3 = local_40;
    local_58 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_momentsSwipeActionsEnabled_026a5b50);
    bVar2 = false;
    if (((ulong)puVar4 & 1) != 0) {
      puVar5 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_momentsLeftSwipeAction_026a5b60);
      bVar2 = (dword *)puVar5 != &MACH_HEADER.cputype;
    }
    FUN_005d6900(uVar1,uVar3,&DAT_028cb78b,2,bVar2);
    uVar1 = local_18;
    uVar3 = local_40;
    puVar5 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_momentsSwipeActionsEnabled_026a5b50);
    bVar2 = false;
    if (((ulong)puVar5 & 1) != 0) {
      puVar5 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_momentsRightSwipeAction_026a5b68);
      bVar2 = (dword *)puVar5 != &MACH_HEADER.cputype;
    }
    FUN_005d6900(uVar1,uVar3,&DAT_028cb78c,1,bVar2);
    _objc_storeStrong(&local_58,0);
    local_50 = 0;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_28,0);
  return;
}

