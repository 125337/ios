// FUN_001282c0 @ 001282c0

void FUN_001282c0(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long local_70;
  ulong local_68;
  undefined4 local_5c;
  ulong local_58;
  long local_50 [3];
  ulong local_38;
  long local_30;
  long local_28;
  
  local_30 = param_1;
  local_28 = param_1;
  FUN_00128780(*(undefined8 *)(param_1 + 0x20));
  uVar3 = DAT_028c8548;
  local_38 = 0;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_sync_enter(uVar3);
  uVar1 = DAT_028c8548;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_028c8548,PTR_s_objectForKeyedSubscript__0269d098,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  uVar4 = local_38;
  local_38 = uVar1;
  (*(code *)PTR__objc_release_02578630)(uVar4);
  _objc_sync_exit(uVar3);
  (*(code *)PTR__objc_release_02578630)(uVar3);
  if (local_38 == 0) {
    _objc_storeStrong(&local_38,*(undefined8 *)(param_1 + 0x28));
  }
  lVar2 = *(long *)(param_1 + 0x20);
  FUN_001288b8();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(ulong *)(param_1 + 0x20);
  local_50[0] = lVar2;
  FUN_00127840();
  lVar2 = local_50[0];
  local_58 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_count_0269cfe0);
  uVar3 = local_58;
  if (lVar2 == 0) {
    local_5c = 1;
  }
  else if (((local_58 == 0) ||
           (lVar2 = local_50[0],
           (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_count_0269cfe0), uVar4 = local_58
           , uVar3 <= lVar2 + 1U)) ||
          (uVar3 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0),
          uVar4 * 2 < uVar3)) {
    uVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_allObjects_0269d228);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_68 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    lVar2 = local_50[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_allObjects_0269d228);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_70 = lVar5;
    (*(code *)PTR__objc_release_02578630)(lVar2);
    FUN_00125c0c(*(undefined8 *)(param_1 + 0x20),local_68,local_70,1);
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_68,0);
    local_5c = 0;
  }
  else {
    local_5c = 1;
  }
  _objc_storeStrong(local_50);
  _objc_storeStrong(&local_38,0);
  return;
}

