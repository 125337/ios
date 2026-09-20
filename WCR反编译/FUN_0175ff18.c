// FUN_0175ff18 @ 0175ff18

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0175ff18(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  byte local_71;
  ulong local_70;
  byte local_61;
  ulong local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_50 = param_1;
  local_48 = param_1;
  FUN_017600cc();
  uStack_28 = _UNK_02339ac8;
  local_30 = _DAT_02339ac0;
  uStack_38 = _UNK_02339ad8;
  local_40 = _DAT_02339ad0;
  puVar2 = PTR__OBJC_CLASS___NSMutableData_026ce660;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableData_026ce660,PTR_s_dataWithCapacity__026a9df0,0x20);
  _objc_retainAutoreleasedReturnValue();
  local_58 = puVar2;
  for (local_60 = 0; local_60 < 0x10; local_60 = local_60 + 1) {
    local_61 = *(byte *)((long)&local_30 + local_60) ^ 0x5a;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_appendBytes_length__026a9628,&local_61,1);
  }
  for (local_70 = 0; local_70 < 0x10; local_70 = local_70 + 1) {
    local_71 = *(byte *)((long)&local_40 + local_70) ^ 0x37;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_appendBytes_length__026a9628,&local_71,1);
  }
  puVar2 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_copy_0269d150);
  uVar1 = DAT_028e3fa8;
  DAT_028e3fa8 = puVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _objc_storeStrong(&local_58,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

