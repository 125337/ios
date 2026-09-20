// FUN_00fac018 @ 00fac018

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00fac018(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 local_90;
  undefined7 uStack_88;
  undefined4 uStack_81;
  undefined8 local_70;
  undefined7 uStack_68;
  undefined4 uStack_61;
  undefined8 local_50;
  undefined7 uStack_48;
  undefined4 uStack_41;
  undefined8 local_30;
  undefined7 uStack_28;
  undefined4 uStack_21;
  long local_18;
  
  puVar6 = PTR__OBJC_CLASS___NSSet_026ce150;
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  puVar2 = &local_30;
  uStack_28 = _UNK_0232c606;
  local_30 = _DAT_0232c5fe;
  uStack_21 = DAT_0232c60d;
  FUN_00faa9c4();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = &local_50;
  uStack_48 = _UNK_0232c619;
  local_50 = _DAT_0232c611;
  uStack_41 = DAT_0232c620;
  FUN_00faa9c4(puVar3,0x13);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = &local_70;
  uStack_68 = _UNK_0232c62c;
  local_70 = _DAT_0232c624;
  uStack_61 = DAT_0232c633;
  FUN_00faa9c4(puVar4,0x13);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = &local_90;
  uStack_88 = _UNK_0232c63f;
  local_90 = _DAT_0232c637;
  uStack_81 = DAT_0232c646;
  FUN_00faa9c4(puVar5,0x13);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_setWithObjects__0269fb00,puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = DAT_028e2fb8;
  DAT_028e2fb8 = puVar6;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

