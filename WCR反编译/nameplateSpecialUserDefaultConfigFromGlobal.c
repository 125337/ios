// nameplateSpecialUserDefaultConfigFromGlobal @ 020c3bfc

/* Function Stack Size: 0x10 bytes */

ID __thiscall
WCRefineConfig::nameplateSpecialUserDefaultConfigFromGlobal
          (WCRefineConfig *this,ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  double in_d0;
  double local_1c8;
  cfstringStruct *local_178;
  cfstringStruct *local_168;
  cfstringStruct *local_128;
  SEL local_120;
  ID local_118;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_120 = param_2;
  local_118 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  local_108 = &cf_exclusiveScenes;
  local_110 = &cf_home;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_128 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_110,1)
  ;
  _objc_retainAutoreleasedReturnValue();
  local_100 = &cf_homeEnabled;
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_98 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_f8 = &cf_homeType;
  pcVar3 = local_128;
  local_90 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_nameplateHomeType_026aea58);
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_numberWithInteger__0269e080,pcVar3);
  _objc_retainAutoreleasedReturnValue();
  local_f0 = &cf_homePath;
  pcVar3 = local_128;
  local_88 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_nameplateHomePath_026ae9f8);
  _objc_retainAutoreleasedReturnValue();
  local_168 = pcVar3;
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_168 = &::cf___;
  }
  local_80 = local_168;
  local_e8 = &cf_homeNightPath;
  pcVar5 = local_128;
  (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_nameplateHomeNightPath_026aea00);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_178 = pcVar5;
  if (pcVar5 == (cfstringStruct *)0x0) {
    local_178 = &::cf___;
  }
  local_78 = local_178;
  local_e0 = &cf_homePlacement;
  pcVar6 = local_128;
  (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_nameplateHomePlacement_026aea60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_numberWithInteger__0269e080,pcVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_d8 = &cf_homeOffsetX;
  local_70 = puVar7;
  (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_nameplateHomeOffsetX_026aea68);
  (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_d0 = &cf_homeOffsetY;
  local_68 = puVar8;
  (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_nameplateHomeOffsetY_026aea70);
  (*(code *)PTR__objc_msgSend_02578628)(puVar9,PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_c8 = &cf_homeScale;
  local_60 = puVar9;
  (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_nameplateHomeScale_026aea78);
  if (in_d0 <= 0.0) {
    local_1c8 = 1.0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_nameplateHomeScale_026aea78);
    local_1c8 = in_d0;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_1c8,puVar10,PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  local_c0 = &cf_chatEnabled;
  puVar11 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_58 = puVar10;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
  _objc_retainAutoreleasedReturnValue();
  local_b8 = &cf_contactsEnabled;
  puVar12 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_50 = puVar11;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
  _objc_retainAutoreleasedReturnValue();
  local_b0 = &cf_momentsEnabled;
  puVar13 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_48 = puVar12;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
  _objc_retainAutoreleasedReturnValue();
  local_a8 = &cf_chatTopEnabled;
  puVar14 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_40 = puVar13;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
  _objc_retainAutoreleasedReturnValue();
  local_a0 = &cf_homeOnlineEnabled;
  puVar15 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_38 = puVar14;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_30 = puVar15;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_98,&local_108,0xe);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar15);
  (*(code *)PTR__objc_release_02578630)(puVar14);
  (*(code *)PTR__objc_release_02578630)(puVar13);
  (*(code *)PTR__objc_release_02578630)(puVar12);
  (*(code *)PTR__objc_release_02578630)(puVar11);
  (*(code *)PTR__objc_release_02578630)(puVar10);
  (*(code *)PTR__objc_release_02578630)(puVar9);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  (*(code *)PTR__objc_release_02578630)(puVar7);
  (*(code *)PTR__objc_release_02578630)(pcVar5);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_128,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)puVar16;
}

