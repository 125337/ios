// FUN_00efe828 @ 00efe828

void FUN_00efe828(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_70 = 0;
  _objc_storeStrong(&local_70,param_1);
  local_78 = 0;
  _objc_storeStrong(&local_78,param_2);
  local_80 = 0;
  _objc_storeStrong(&local_80,param_3);
  local_68 = &cf_title;
  local_40 = local_70;
  local_60 = &cf_icon;
  local_38 = local_78;
  local_58 = &cf_action;
  local_30 = local_80;
  local_50 = &cf__wcrEnabled;
  puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,param_4 & 1);
  _objc_retainAutoreleasedReturnValue();
  local_48 = &cf__wcrSource;
  local_20 = &cf_WCRefine;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_40,&local_68,5);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_70,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,puVar2);
  return;
}

