// FUN_01f59998 @ 01f59998

void FUN_01f59998(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_68;
  undefined *local_60;
  long local_58;
  long local_50;
  undefined8 local_48;
  long local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_50 = 0;
  local_48 = param_2;
  local_40 = param_1;
  _objc_storeStrong(&local_50,param_3);
  local_58 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_hideWeToast__0269cec0,*(undefined8 *)(param_1 + 0x20)
            );
  lVar1 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_38 = &cf___;
    local_30 = &cf_KQ;
    local_28 = &cf_Nz;
    local_20 = &cf__IN;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38,4
              );
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_60 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_objectAtIndexedSubscript__0269cc78,*(undefined8 *)(param_1 + 0x30));
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&cf__Tek);
    _objc_retainAutoreleasedReturnValue();
    local_68 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x28),PTR_s_showResultTitle_message__026c94c8,&cf_bS_b,
               local_68);
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_60,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x28),PTR_s_showResultTitle_message__026c94c8,&cf_bS1Y_,
               local_50);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_reloadTableData_0269dca8);
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

