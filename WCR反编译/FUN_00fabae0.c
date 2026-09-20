// FUN_00fabae0 @ 00fabae0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00fabae0(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 local_50;
  undefined7 uStack_48;
  undefined4 uStack_41;
  undefined8 local_30;
  undefined7 uStack_28;
  undefined4 uStack_21;
  long local_18;
  
  puVar4 = PTR__OBJC_CLASS___NSSet_026ce150;
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  puVar2 = &local_30;
  uStack_28 = _UNK_0232c5e0;
  local_30 = _DAT_0232c5d8;
  uStack_21 = DAT_0232c5e7;
  FUN_00faa9c4();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = &local_50;
  uStack_48 = _UNK_0232c5f3;
  local_50 = _DAT_0232c5eb;
  uStack_41 = DAT_0232c5fa;
  FUN_00faa9c4(puVar3,0x13);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setWithObjects__0269fb00,puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = DAT_028e2fa8;
  DAT_028e2fa8 = puVar4;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

