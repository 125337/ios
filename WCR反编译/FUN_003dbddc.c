// FUN_003dbddc @ 003dbddc

void FUN_003dbddc(double param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  double dVar4;
  double dVar5;
  double local_128;
  double local_110;
  double local_108;
  double local_b0;
  int local_74;
  undefined *local_60;
  double local_58;
  double local_50;
  long local_48;
  undefined *local_40;
  undefined8 local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_48 = 0;
  _objc_storeStrong(&local_48,param_2);
  local_50 = param_1;
  FUN_003dc380();
  puVar1 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  local_58 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,*(undefined8 *)PTR__UIFontWeightSemibold_02578160,
             PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_48;
  local_60 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
  puVar1 = local_60;
  if (lVar2 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = puVar1;
  }
  else {
    dVar4 = local_50 * DAT_02323e70;
    local_128 = dVar4;
    dVar5 = DAT_02323e70;
    for (local_74 = 0; lVar2 = local_48, local_74 < 3; local_74 = local_74 + 1) {
      local_38 = *(undefined8 *)PTR__NSFontAttributeName_02578068;
      local_30 = local_60;
      puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_30,&local_38,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_sizeWithAttributes__026cab08);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      local_108 = local_128 / dVar4;
      if (local_108 < dVar5 / dVar4) {
        local_108 = dVar5 / dVar4;
      }
      if ((local_108 <= 1.0) ||
         (dVar5 = local_108,
         (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_pointSize_026a1d68), dVar5 <= 8.0))
      break;
      dVar5 = 8.0;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_pointSize_026a1d68);
      local_110 = (double)(long)(dVar5 / local_108);
      if (local_110 <= 8.0) {
        local_110 = 8.0;
      }
      local_b0 = local_110;
      dVar5 = local_110;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_pointSize_026a1d68);
      if (dVar5 <= local_110) {
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_pointSize_026a1d68);
        local_b0 = local_110 - 1.0;
      }
      if (local_b0 <= 8.0) {
        local_128 = 8.0;
      }
      else {
        local_128 = local_b0;
      }
      dVar5 = *(double *)PTR__UIFontWeightSemibold_02578160;
      puVar3 = PTR__OBJC_CLASS___UIFont_026cdfc0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = local_60;
      local_60 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    puVar1 = local_60;
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = puVar1;
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_48,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_40);
  return;
}

