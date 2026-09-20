// FUN_010ec5e8 @ 010ec5e8

void FUN_010ec5e8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  puVar2 = PTR_s_nameplateHomePath_026ae9f8;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_s_nameplateHomeNightPath_026aea00;
  local_78 = puVar2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_s_nameplateChatPath_026aea08;
  local_70 = puVar3;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_s_nameplateChatNightPath_026aea10;
  local_68 = puVar4;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_s_nameplateContactsPath_026aea18;
  local_60 = puVar5;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_s_nameplateContactsNightPath_026aea20;
  local_58 = puVar6;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_s_nameplateMomentsPath_026aea28;
  local_50 = puVar7;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_s_nameplateMomentsNightPath_026aea30;
  local_48 = puVar8;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_s_nameplateChatTopBarPath_026aea38;
  local_40 = puVar9;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_s_nameplateChatTopBarNightPath_026aea40;
  local_38 = puVar10;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR_s_nameplateHomeOnlinePath_026aea48;
  local_30 = puVar11;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR_s_nameplateHomeOnlineNightPath_026aea50;
  local_28 = puVar12;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_20 = puVar13;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_78,0xc
            );
  _objc_retainAutoreleasedReturnValue();
  uVar1 = DAT_028e33f0;
  DAT_028e33f0 = puVar14;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  (*(code *)PTR__objc_release_02578630)(puVar13);
  (*(code *)PTR__objc_release_02578630)(puVar12);
  (*(code *)PTR__objc_release_02578630)(puVar11);
  (*(code *)PTR__objc_release_02578630)(puVar10);
  (*(code *)PTR__objc_release_02578630)(puVar9);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  (*(code *)PTR__objc_release_02578630)(puVar7);
  (*(code *)PTR__objc_release_02578630)(puVar6);
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

