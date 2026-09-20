// FUN_00f58f68 @ 00f58f68

void FUN_00f58f68(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  puVar3 = PTR__OBJC_CLASS___NSSet_026ce150;
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_50 = &cf_clicfg_weapp_enable_early_loading;
  local_48 = &cf_clicfg_enable_find_page_flutter_engine_preload_ios;
  local_40 = &cf_clicfg_finder_idle_monitor_preload;
  local_38 = &cf_clicfg_finder_idle_monitor_preload_fierce;
  local_30 = &cf_clicfg_finder_preload_cache_immigrate;
  local_28 = &cf_clicfg_finder_preload_reddot_avatar_switch;
  local_20 = &cf_clicfg_miniprogram_open_admb2_in_motivating;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_50,7);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setWithArray__0269d9a0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = DAT_028e2dd8;
  DAT_028e2dd8 = puVar3;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

