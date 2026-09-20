// FUN_0076d170 @ 0076d170

void FUN_0076d170(undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  undefined1 auStack_70 [24];
  undefined *local_58;
  undefined1 auStack_50 [15];
  byte local_41;
  undefined8 local_40;
  undefined8 local_38;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_41 = param_3;
  local_40 = param_2;
  local_38 = param_1;
  (*DAT_028cc918)(param_1,param_2,param_3 & 1);
  _objc_initWeak(auStack_50,local_38);
  puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x3fd6666666666666,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0
            );
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_02323c60,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_28 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_02323d88,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_20 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_30,3);
  _objc_retainAutoreleasedReturnValue();
  local_58 = puVar4;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_58;
  local_90 = PTR___NSConcreteGlobalBlock_02578658;
  local_88 = 0xd0800000;
  local_84 = 0;
  local_80 = FUN_0076e8c8;
  local_78 = &DAT_0257fba8;
  _objc_copyWeak(auStack_70,auStack_50);
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_enumerateObjectsUsingBlock__0269d3d0,&local_90)
  ;
  _objc_destroyWeak(auStack_70);
  _objc_storeStrong(&local_58,0);
  _objc_destroyWeak(auStack_50);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

