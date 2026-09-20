// applyGradientColorsAnimated: @ 01b09ed4

/* Function Stack Size: 0x14 bytes */

void WCRefineKeywordAlertHistoryCardViewController::applyGradientColorsAnimated_
               (ID param_1,SEL param_2,bool param_3)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ID local_58;
  undefined1 local_49;
  SEL local_48;
  ID local_40;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_49 = (undefined1)param_3;
  IVar1 = param_1;
  local_48 = param_2;
  local_40 = param_1;
  FUN_01b08450();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_gradientColorsForDarkMode__026be958,IVar1);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_40;
  local_58 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_backgroundGradientLayer_026be920);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (0,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_38 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x3fd6666666666666,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0
            );
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_30 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x3fe6666666666666,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0
            );
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_28 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x3ff0000000000000,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0
            );
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_20 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38,4);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_backgroundGradientLayer_026be920);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_58,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

