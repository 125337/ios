// manageGroupCell: @ 0194bfe4

/* Function Stack Size: 0x18 bytes */

void WCRefineEmoticonGroupManageViewController::manageGroupCell_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  cfstringStruct *local_340;
  undefined *local_328;
  undefined1 local_319;
  undefined *local_318;
  undefined4 local_310;
  undefined4 local_30c;
  code *local_308;
  undefined *local_300;
  undefined1 auStack_2f8 [15];
  undefined1 local_2e9;
  undefined *local_2e8;
  undefined4 local_2e0;
  undefined4 local_2dc;
  code *local_2d8;
  undefined *local_2d0;
  undefined1 auStack_2c8 [15];
  undefined1 local_2b9;
  undefined *local_2b8;
  undefined4 local_2b0;
  undefined4 local_2ac;
  code *local_2a8;
  undefined *local_2a0;
  undefined1 auStack_298 [15];
  undefined1 local_289;
  undefined *local_288;
  undefined4 local_280;
  undefined4 local_27c;
  code *local_278;
  undefined *local_270;
  undefined1 auStack_268 [15];
  undefined1 local_259;
  undefined *local_258;
  undefined4 local_250;
  undefined4 local_24c;
  code *local_248;
  undefined *local_240;
  undefined1 auStack_238 [15];
  undefined1 local_229;
  undefined *local_228;
  undefined4 local_220;
  undefined4 local_21c;
  code *local_218;
  undefined *local_210;
  undefined1 auStack_208 [15];
  undefined1 local_1f9;
  undefined *local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  code *local_1e8;
  undefined *local_1e0;
  undefined1 auStack_1d8 [15];
  undefined1 local_1c9;
  undefined *local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  code *local_1b8;
  undefined *local_1b0;
  undefined1 auStack_1a8 [24];
  undefined *local_190;
  undefined1 auStack_188 [8];
  undefined *local_180;
  undefined *local_178;
  undefined *local_170;
  undefined4 local_164;
  cfstringStruct *local_160;
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  SEL local_148;
  ID local_140;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  undefined *local_118;
  undefined **local_110;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  undefined **local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  undefined **local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  undefined **local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  undefined **local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  undefined **local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  undefined **local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  undefined **local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_150 = (cfstringStruct *)0x0;
  local_148 = param_2;
  local_140 = param_1;
  _objc_storeStrong(&local_150,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  pcVar1 = local_150;
  _objc_getAssociatedObject(local_150,"wcr_eg_gid");
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_150;
  local_158 = pcVar1;
  _objc_getAssociatedObject(local_150,"wcr_eg_name");
  _objc_retainAutoreleasedReturnValue();
  local_340 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_340 = &cf_R_;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_160 = local_340;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar1 = local_158;
  (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_164 = 1;
  }
  else {
    puVar3 = PTR_WCRefineEmoticonGroupStore_026ce420;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineEmoticonGroupStore_026ce420,PTR_s_indexOfGroupId__026a1070,local_158);
    puVar4 = PTR_WCRefineEmoticonGroupStore_026ce420;
    local_170 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineEmoticonGroupStore_026ce420,PTR_s_groups_026a1048);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = PTR_WCRefineEmoticonGroupStore_026ce420;
    local_178 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineEmoticonGroupStore_026ce420,PTR_s_memberCountForGroupId__026a1078,
               local_158);
    local_180 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_140,PTR_s_setPendingRenameGroupId__026b9970,local_158);
    _objc_setAssociatedObject(local_140,"wcr_eg_sheet_name",local_160,3);
    _objc_initWeak(auStack_188,local_140);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_190 = puVar3;
    if (0 < (long)local_170) {
      local_48 = &cf_title;
      local_38 = &cf_n_v;
      local_40 = &cf_handler;
      ppuVar5 = &local_1c8;
      local_1c8 = PTR___NSConcreteStackBlock_02578660;
      local_1c0 = 0xc2000000;
      local_1bc = 0;
      local_1b8 = FUN_0194cf70;
      local_1b0 = &DAT_0257be28;
      _objc_copyWeak(auStack_1a8,auStack_188);
      local_1c9 = 1;
      _objc_retainBlock();
      puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_30 = ppuVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_38,&local_48,2);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
      local_1c9 = 0;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(ppuVar5);
      puVar3 = local_190;
      local_68 = &cf_title;
      local_58 = &cf_Ny;
      local_60 = &cf_handler;
      ppuVar5 = &local_1f8;
      local_1f8 = PTR___NSConcreteStackBlock_02578660;
      local_1f0 = 0xc2000000;
      local_1ec = 0;
      local_1e8 = FUN_0194cfc0;
      local_1e0 = &DAT_0257be28;
      _objc_copyWeak(auStack_1d8,auStack_188);
      local_1f9 = 1;
      _objc_retainBlock();
      puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_50 = ppuVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_58,&local_68,2);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
      local_1f9 = 0;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(ppuVar5);
      _objc_destroyWeak(auStack_1d8);
      _objc_destroyWeak(auStack_1a8);
    }
    puVar3 = local_190;
    if ((local_170 != (undefined *)0x7fffffffffffffff) && ((long)local_170 < (long)(local_178 + -1))
       ) {
      local_88 = &cf_title;
      local_78 = &cf_Ny;
      local_80 = &cf_handler;
      ppuVar5 = &local_228;
      local_228 = PTR___NSConcreteStackBlock_02578660;
      local_220 = 0xc2000000;
      local_21c = 0;
      local_218 = FUN_0194d010;
      local_210 = &DAT_0257be28;
      _objc_copyWeak(auStack_208,auStack_188);
      local_229 = 1;
      _objc_retainBlock();
      puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_70 = ppuVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_78,&local_88,2);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
      local_229 = 0;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(ppuVar5);
      puVar3 = local_190;
      local_a8 = &cf_title;
      local_98 = &cf_n__;
      local_a0 = &cf_handler;
      ppuVar5 = &local_258;
      local_258 = PTR___NSConcreteStackBlock_02578660;
      local_250 = 0xc2000000;
      local_24c = 0;
      local_248 = FUN_0194d060;
      local_240 = &DAT_0257be28;
      _objc_copyWeak(auStack_238,auStack_188);
      local_259 = 1;
      _objc_retainBlock();
      puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_90 = ppuVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_98,&local_a8,2);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
      local_259 = 0;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(ppuVar5);
      _objc_destroyWeak(auStack_238);
      _objc_destroyWeak(auStack_208);
    }
    puVar3 = local_190;
    local_c8 = &cf_title;
    local_b8 = &cf__TT;
    local_c0 = &cf_handler;
    ppuVar5 = &local_288;
    local_288 = PTR___NSConcreteStackBlock_02578660;
    local_280 = 0xc2000000;
    local_27c = 0;
    local_278 = FUN_0194d0b0;
    local_270 = &DAT_0257be28;
    _objc_copyWeak(auStack_268,auStack_188);
    local_289 = 1;
    _objc_retainBlock();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_b0 = ppuVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_b8,&local_c8,2);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
    local_289 = 0;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(ppuVar5);
    puVar3 = local_190;
    local_e8 = &cf_title;
    local_d8 = &cf_e_R_;
    local_e0 = &cf_handler;
    ppuVar5 = &local_2b8;
    local_2b8 = PTR___NSConcreteStackBlock_02578660;
    local_2b0 = 0xc2000000;
    local_2ac = 0;
    local_2a8 = FUN_0194d100;
    local_2a0 = &DAT_0257be28;
    _objc_copyWeak(auStack_298,auStack_188);
    local_2b9 = 1;
    _objc_retainBlock();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_d0 = ppuVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_d8,&local_e8,2);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
    local_2b9 = 0;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(ppuVar5);
    puVar3 = local_190;
    if (0 < (long)local_180) {
      local_108 = &cf_title;
      local_f8 = &cf_nzz_g_;
      local_100 = &cf_handler;
      ppuVar5 = &local_2e8;
      local_2e8 = PTR___NSConcreteStackBlock_02578660;
      local_2e0 = 0xc2000000;
      local_2dc = 0;
      local_2d8 = FUN_0194d150;
      local_2d0 = &DAT_0257be28;
      _objc_copyWeak(auStack_2c8,auStack_188);
      local_2e9 = 1;
      _objc_retainBlock();
      puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_f0 = ppuVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_f8,&local_108,2);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
      local_2e9 = 0;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(ppuVar5);
      _objc_destroyWeak(auStack_2c8);
    }
    puVar3 = local_190;
    local_138 = &cf_title;
    local_120 = &cf_RdR_;
    local_130 = &cf_destructive;
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    local_128 = &cf_handler;
    ppuVar5 = &local_318;
    local_318 = PTR___NSConcreteStackBlock_02578660;
    local_310 = 0xc2000000;
    local_30c = 0;
    local_308 = FUN_0194d1a0;
    local_300 = &DAT_0257be28;
    local_118 = puVar4;
    _objc_copyWeak(auStack_2f8,auStack_188);
    local_319 = 1;
    _objc_retainBlock();
    puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_110 = ppuVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_120,&local_138,3);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
    local_319 = 0;
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(ppuVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
    _objc_retainAutoreleasedReturnValue();
    local_328 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_140,PTR_s_presentManageActionsWithTitle_ac_026b9980,puVar3,local_190);
    _objc_storeStrong(&local_328);
    _objc_destroyWeak(auStack_2f8);
    _objc_destroyWeak(auStack_298);
    _objc_destroyWeak(auStack_268);
    _objc_storeStrong(&local_190,0);
    _objc_destroyWeak(auStack_188);
    local_164 = 0;
  }
  _objc_storeStrong(&local_160);
  _objc_storeStrong(&local_158,0);
  _objc_storeStrong(&local_150,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

