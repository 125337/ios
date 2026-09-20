// floatBarSort @ 01f95c70

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefineVoicePackPickerViewController::floatBarSort(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *local_160;
  undefined4 local_158;
  undefined4 local_154;
  code *local_150;
  undefined *local_148;
  undefined *local_140;
  undefined1 auStack_138 [8];
  undefined *local_130;
  undefined4 local_128;
  undefined4 local_124;
  code *local_120;
  undefined *local_118;
  undefined *local_110;
  undefined1 auStack_108 [8];
  undefined *local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  code *local_f0;
  undefined *local_e8;
  undefined *local_e0;
  undefined1 auStack_d8 [24];
  undefined *local_c0;
  undefined1 auStack_b8 [8];
  SEL local_b0;
  ID local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  undefined **local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  undefined **local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined **local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = param_2;
  local_a8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  _objc_initWeak(auStack_b8,local_a8);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_a8;
  local_60 = &cf_title;
  local_50 = &cf_Ty;
  local_58 = &cf_handler;
  ppuVar3 = &local_100;
  local_100 = PTR___NSConcreteStackBlock_02578660;
  local_f8 = 0xc2000000;
  local_f4 = 0;
  local_f0 = FUN_01f962b4;
  local_e8 = &DAT_02579c60;
  local_c0 = puVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_e0 = puVar2;
  _objc_copyWeak(auStack_d8,auStack_b8);
  _objc_retainBlock();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_48 = ppuVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_50,&local_60,2);
  _objc_retainAutoreleasedReturnValue();
  local_80 = &cf_title;
  local_70 = &cf_eg;
  local_78 = &cf_handler;
  ppuVar5 = &local_130;
  local_130 = PTR___NSConcreteStackBlock_02578660;
  local_128 = 0xc2000000;
  local_124 = 0;
  local_120 = FUN_01f96330;
  local_118 = &DAT_02579c60;
  puVar4 = local_c0;
  local_40 = puVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_110 = puVar4;
  _objc_copyWeak(auStack_108,auStack_b8);
  _objc_retainBlock();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_68 = ppuVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_70,&local_80,2);
  _objc_retainAutoreleasedReturnValue();
  local_a0 = &cf_title;
  puVar6 = local_c0;
  local_38 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_voicePackSortAsc_026c9a20);
  local_90 = &cf_9e_NM_;
  if (((ulong)puVar6 & 1) == 0) {
    local_90 = &cf_9e_NGS_;
  }
  local_98 = &cf_handler;
  ppuVar7 = &local_160;
  local_160 = PTR___NSConcreteStackBlock_02578660;
  local_158 = 0xc2000000;
  local_154 = 0;
  local_150 = FUN_01f963ac;
  local_148 = &DAT_02579c60;
  puVar6 = local_c0;
  (*(code *)PTR__objc_retain_02578638)();
  local_140 = puVar6;
  _objc_copyWeak(auStack_138,auStack_b8);
  _objc_retainBlock();
  puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_88 = ppuVar7;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_90,&local_a0,2);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_30 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_40,3);
  _objc_retainAutoreleasedReturnValue();
  FUN_01f8e354(IVar1,&cf_c_e_,puVar8,&cf_Sm);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  (*(code *)PTR__objc_release_02578630)(ppuVar7);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(ppuVar5);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(ppuVar3);
  _objc_destroyWeak(auStack_138);
  _objc_storeStrong(&local_140);
  _objc_destroyWeak(auStack_108);
  _objc_storeStrong(&local_110,0);
  _objc_destroyWeak(auStack_d8);
  _objc_storeStrong(&local_e0,0);
  _objc_storeStrong(&local_c0,0);
  _objc_destroyWeak(auStack_b8);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

