// FUN_003dc1e8 @ 003dc1e8

void FUN_003dc1e8(double param_1,double param_2,long param_3)

{
  undefined *puVar1;
  double dVar2;
  double dVar3;
  undefined *local_58;
  long local_50;
  undefined8 local_48;
  long local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_48 = 0;
  local_40 = param_3;
  _objc_storeStrong();
  local_38 = *(undefined8 *)PTR__NSFontAttributeName_02578068;
  local_28 = *(undefined8 *)(param_3 + 0x20);
  local_30 = *(undefined8 *)PTR__NSForegroundColorAttributeName_02578070;
  local_20 = *(undefined8 *)(param_3 + 0x28);
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_50 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_28,&local_38,2);
  _objc_retainAutoreleasedReturnValue();
  local_58 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_3 + 0x30),PTR_s_sizeWithAttributes__026cab08,puVar1);
  dVar2 = (*(double *)(param_3 + 0x38) - param_1) * 0.5;
  dVar3 = (*(double *)(param_3 + 0x38) - param_2) * 0.5;
  FUN_00360240();
  (*(code *)PTR__objc_msgSend_02578628)
            (dVar2,dVar3,param_1,param_2,*(undefined8 *)(param_3 + 0x30),
             PTR_s_drawInRect_withAttributes__026ca618,local_58);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_48,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

