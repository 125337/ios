// FUN_005a15ac @ 005a15ac

void FUN_005a15ac(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  uint local_a8;
  uint local_84;
  long local_70;
  byte local_61;
  ulong local_60;
  uint local_58;
  byte local_51;
  undefined *local_50;
  long local_38;
  long local_30;
  long local_28;
  long local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_30 = param_1;
  local_28 = param_1;
  if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0);
    goto LAB_005a1974;
  }
  lVar2 = *(long *)(param_1 + 0x20);
  FUN_005a19c8();
  _objc_retainAutoreleasedReturnValue();
  local_51 = 0;
  local_84 = 0;
  local_38 = lVar2;
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_20 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_20,1
              );
    _objc_retainAutoreleasedReturnValue();
    local_51 = 1;
    local_50 = puVar3;
    FUN_005a1da4();
    local_84 = (uint)puVar3;
  }
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  if ((local_84 & 1) == 0) {
    uVar4 = *(ulong *)(param_1 + 0x20);
    FUN_005a28f4();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = (uint)*(undefined8 *)(param_1 + 0x20);
    local_60 = uVar4;
    FUN_005a305c();
    local_a8 = 1;
    if ((uVar1 & 1) != 0) {
      local_a8 = (uint)*(undefined8 *)(param_1 + 0x20);
      FUN_005a32d4();
    }
    local_61 = (byte)local_a8 & 1;
    if ((local_a8 & 1) == 0) {
LAB_005a1868:
      lVar2 = *(long *)(param_1 + 0x20);
      FUN_005a36c4(lVar2,0);
      _objc_retainAutoreleasedReturnValue();
      local_70 = lVar2;
      (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_count_0269cfe0);
      if (lVar2 != 0) {
        lVar5 = local_70;
        FUN_005a4470(local_70,*(undefined8 *)(param_1 + 0x28));
        (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),(uint)lVar5 & 1);
      }
      else {
        (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0);
      }
      local_58 = (uint)(lVar2 == 0);
      _objc_storeStrong(&local_70,0);
    }
    else {
      uVar4 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_count_0269cfe0);
      if (uVar4 == 0) goto LAB_005a1868;
      uVar4 = local_60;
      FUN_005a1da4(local_60,*(undefined8 *)(param_1 + 0x28));
      if ((uVar4 & 1) == 0) goto LAB_005a1868;
      (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),1);
      local_58 = 1;
    }
    _objc_storeStrong(&local_60,0);
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),1);
    local_58 = 1;
  }
  _objc_storeStrong(&local_38,0);
LAB_005a1974:
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

