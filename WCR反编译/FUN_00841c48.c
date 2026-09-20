// FUN_00841c48 @ 00841c48

void FUN_00841c48(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *local_a0;
  undefined *local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_50 = param_3;
  local_48 = param_2;
  local_40 = param_1;
  (*DAT_028cd320)(param_1,param_2,param_3);
  local_38 = _WCRPageBackgroundSceneMain;
  local_30 = _WCRPageBackgroundSceneContacts;
  local_28 = _WCRPageBackgroundSceneDiscover;
  local_20 = _WCRPageBackgroundSceneMe;
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38,4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_40;
  puVar1 = local_50;
  local_a0 = puVar3;
  local_58 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_count_0269cfe0);
  local_a0 = local_a0 + -1;
  if (puVar1 < local_a0) {
    local_a0 = puVar1;
  }
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_objectAtIndexedSubscript__0269cc78,local_a0);
  _objc_retainAutoreleasedReturnValue();
  FUN_0084415c(uVar2);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_58,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
}

