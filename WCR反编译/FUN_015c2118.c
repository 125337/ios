// FUN_015c2118 @ 015c2118

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_015c2118(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  ulong local_50;
  long local_40;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 uStack_28;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_40 = 0;
  _objc_storeStrong(&local_40,param_1);
  if (local_40 == 0) {
    local_34 = 0;
  }
  else {
    uStack_28 = _UNK_02587140;
    local_30 = _DAT_02587138;
    for (local_50 = 0; local_50 < 2; local_50 = local_50 + 1) {
      lVar2 = local_40;
      _object_getClass(local_50 - 2);
      _class_getInstanceVariable();
      lVar1 = local_40;
      if (lVar2 != 0) {
        _ivar_getOffset();
        local_34 = *(undefined4 *)(lVar1 + lVar2);
        goto LAB_015c21fc;
      }
    }
    local_34 = 0;
  }
LAB_015c21fc:
  _objc_storeStrong(&local_40,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return local_34;
}

