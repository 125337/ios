// FUN_00efd8f0 @ 00efd8f0

void FUN_00efd8f0(void)

{
  undefined8 uVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  cfstringStruct *pcVar8;
  cfstringStruct *pcVar9;
  cfstringStruct *pcVar10;
  cfstringStruct *pcVar11;
  cfstringStruct *pcVar12;
  undefined *puVar13;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d8 = &cf_onOpenWCRefineSettingVC;
  pcVar2 = &cf_optimize;
  FUN_00ef5110();
  _objc_retainAutoreleasedReturnValue();
  local_d0 = &cf_onOpenWCRefineFileManager;
  pcVar3 = &cf_file_manager;
  local_80 = pcVar2;
  FUN_00ef5110();
  _objc_retainAutoreleasedReturnValue();
  local_c8 = &cf_onOpenWCTimeline;
  pcVar4 = &cf_moments;
  local_78 = pcVar3;
  FUN_00ef5110();
  _objc_retainAutoreleasedReturnValue();
  local_c0 = &cf_onOpenWCFinderTimeline;
  pcVar5 = &cf_finder;
  local_70 = pcVar4;
  FUN_00ef5110();
  _objc_retainAutoreleasedReturnValue();
  local_b8 = &cf_onOpenWCRefineSearchPlugin;
  pcVar6 = &cf_aggregate_search;
  local_68 = pcVar5;
  FUN_00ef5110();
  _objc_retainAutoreleasedReturnValue();
  local_b0 = &cf_onOpenWCRefineVoicePack;
  pcVar7 = &cf_voice_pack;
  local_60 = pcVar6;
  FUN_00ef5110();
  _objc_retainAutoreleasedReturnValue();
  local_a8 = &cf_onWCRefineSendSmallSignal;
  pcVar8 = &cf_small_signal;
  local_58 = pcVar7;
  FUN_00ef5110();
  _objc_retainAutoreleasedReturnValue();
  local_a0 = &cf_onOpenThemeExchange;
  pcVar9 = &cf_theme_exchange;
  local_50 = pcVar8;
  FUN_00ef5110();
  _objc_retainAutoreleasedReturnValue();
  local_98 = &cf_onOpenWCRefineThemeBoxRedeem;
  pcVar10 = &cf_themebox_exchange;
  local_48 = pcVar9;
  FUN_00ef5110();
  _objc_retainAutoreleasedReturnValue();
  local_90 = &cf_onOpenWCRefineSuanGuoRedeem;
  pcVar11 = &cf_suanguo_exchange;
  local_40 = pcVar10;
  FUN_00ef5110();
  _objc_retainAutoreleasedReturnValue();
  local_88 = &cf_onOpenWCRefineBoLuoRedeem;
  pcVar12 = &cf_tp_exchange;
  local_38 = pcVar11;
  FUN_00ef5110();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_30 = pcVar12;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_80,&local_d8,0xb);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = DAT_028e2af8;
  DAT_028e2af8 = puVar13;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  (*(code *)PTR__objc_release_02578630)(pcVar12);
  (*(code *)PTR__objc_release_02578630)(pcVar11);
  (*(code *)PTR__objc_release_02578630)(pcVar10);
  (*(code *)PTR__objc_release_02578630)(pcVar9);
  (*(code *)PTR__objc_release_02578630)(pcVar8);
  (*(code *)PTR__objc_release_02578630)(pcVar7);
  (*(code *)PTR__objc_release_02578630)(pcVar6);
  (*(code *)PTR__objc_release_02578630)(pcVar5);
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

