// FUN_014e5c14 @ 014e5c14

void FUN_014e5c14(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  cfstringStruct *local_100;
  cfstringStruct *local_c0;
  undefined8 local_b8;
  cfstringStruct *local_b0 [5];
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_74;
  undefined8 local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined *local_48;
  cfstringStruct *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_70 = 0;
  _objc_storeStrong(&local_70,param_1);
  uVar1 = local_70;
  FUN_014e48f4(local_70,&cf_m_uiSex);
  local_74 = (undefined4)uVar1;
  local_80 = 0;
  local_88 = 0;
  uVar2 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_valueForKey__0269d128,&cf_m_nsCountry);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_80;
  local_80 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar2 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_valueForKey__0269d128,&cf_m_nsProvince);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_88;
  local_88 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  local_b0[0] = (cfstringStruct *)0x0;
  local_b8 = 2;
  uVar1 = local_80;
  FUN_014dfa54();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_88;
  FUN_014dfa54();
  _objc_retainAutoreleasedReturnValue();
  local_c0 = local_b0[0];
  FUN_014fae44(uVar1,uVar2,&local_c0,&local_b8);
  _objc_storeStrong(local_b0,local_c0);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  local_68 = &cf_sex;
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInt__0269d800,local_74);
  _objc_retainAutoreleasedReturnValue();
  local_60 = &cf_region;
  pcVar4 = local_b0[0];
  local_48 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0[0],PTR_s_length_0269cca0);
  if (pcVar4 == (cfstringStruct *)0x0) {
    local_100 = &cf__gw;
  }
  else {
    local_100 = local_b0[0];
  }
  local_40 = local_100;
  local_58 = &cf_bucket;
  puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_b8);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_50 = &cf_age;
  uVar1 = local_70;
  local_38 = puVar5;
  FUN_014fb5a8(local_70);
  (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_numberWithInteger__0269e080,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_30 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_48,&local_68,4);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar6);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(local_b0);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_70,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,puVar7);
  return;
}

