// wcr_rowActionsForIndexPath: @ 01bf2c88

/* Function Stack Size: 0x18 bytes */

ID WCRefineMomentsDraftListViewController::wcr_rowActionsForIndexPath_
             (ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  cfstringStruct *local_360;
  cfstringStruct *local_2b8;
  cfstringStruct *local_280;
  cfstringStruct *local_248;
  undefined *local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  code *local_1d8;
  undefined *local_1d0;
  undefined1 auStack_1c8 [8];
  undefined *local_1c0;
  undefined *local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  code *local_1a8;
  undefined *local_1a0;
  undefined1 auStack_198 [8];
  undefined *local_190;
  undefined4 local_184;
  undefined *local_180;
  undefined4 local_178;
  undefined4 local_174;
  code *local_170;
  undefined *local_168;
  cfstringStruct *local_160;
  undefined1 auStack_158 [8];
  undefined *local_150;
  cfstringStruct *local_148;
  undefined *local_140;
  undefined *local_138;
  undefined4 local_130;
  undefined4 local_12c;
  code *local_128;
  undefined *local_120;
  cfstringStruct *local_118;
  undefined1 auStack_110 [8];
  undefined *local_108;
  undefined *local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  code *local_f0;
  undefined *local_e8;
  cfstringStruct *local_e0;
  undefined1 auStack_d8 [8];
  undefined *local_d0;
  byte local_c2;
  byte local_c1;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  byte local_a9;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  byte local_91;
  cfstringStruct *local_90;
  byte local_81;
  cfstringStruct *local_80;
  cfstringStruct *local_78 [3];
  undefined1 auStack_60 [8];
  long local_58;
  SEL local_50;
  cfstringStruct *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_58 = 0;
  local_50 = param_2;
  local_48 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_58,param_3);
  _objc_initWeak(auStack_60,local_48);
  pcVar2 = local_48;
  lVar1 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_section_0269e988);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_wcr_isScheduledSection__026c0ac8,lVar1);
  puVar4 = PTR__OBJC_CLASS___UITableViewRowAction_026ce5d8;
  if (((ulong)pcVar2 & 1) == 0) {
    local_1b8 = PTR___NSConcreteStackBlock_02578660;
    local_1b0 = 0xc2000000;
    local_1ac = 0;
    local_1a8 = FUN_01bf3c70;
    local_1a0 = &DAT_0258ba60;
    _objc_copyWeak(auStack_198,auStack_60);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_rowActionWithStyle_title_handler_026a2d90,0,&cf_Rd,&local_1b8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
    local_190 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_redColor_026a8a38);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    puVar4 = PTR__OBJC_CLASS___UITableViewRowAction_026ce5d8;
    local_1e8 = PTR___NSConcreteStackBlock_02578660;
    local_1e0 = 0xc2000000;
    local_1dc = 0;
    local_1d8 = FUN_01bf3d80;
    local_1d0 = &DAT_0258ba60;
    _objc_copyWeak(auStack_1c8,auStack_60);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_rowActionWithStyle_title_handler_026a2d90,1,&cf__e,&local_1e8);
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_190;
    puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_1c0 = puVar4;
    local_30 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38,2
              );
    _objc_retainAutoreleasedReturnValue();
    local_184 = 1;
    local_40 = puVar5;
    _objc_storeStrong(&local_1c0);
    _objc_destroyWeak(auStack_1c8);
    _objc_storeStrong(&local_190,0);
    _objc_destroyWeak(auStack_198);
  }
  else {
    local_81 = 0;
    local_91 = 0;
    lVar1 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_row_0269e210);
    pcVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_scheduledTasks_026af460);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (lVar1 < (long)pcVar3) {
      local_248 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_scheduledTasks_026af460);
      _objc_retainAutoreleasedReturnValue();
      local_81 = 1;
      lVar1 = local_58;
      local_80 = local_248;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_row_0269e210);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_248,PTR_s_objectAtIndexedSubscript__0269cc78,lVar1);
      _objc_retainAutoreleasedReturnValue();
      local_91 = 1;
      local_90 = local_248;
    }
    else {
      local_248 = (cfstringStruct *)0x0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_78[0] = local_248;
    if ((local_91 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_90);
    }
    if ((local_81 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_80);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    local_a9 = 0;
    pcVar2 = local_78[0];
    (*(code *)PTR__objc_msgSend_02578628)
              (local_78[0],PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
    if (((ulong)pcVar3 & 1) == 0) {
      local_280 = &::cf___;
    }
    else {
      local_280 = local_78[0];
      (*(code *)PTR__objc_msgSend_02578628)
                (local_78[0],PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
      _objc_retainAutoreleasedReturnValue();
      local_a9 = 1;
      local_a8 = local_280;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_a0 = local_280;
    if ((local_a9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_a8);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    local_c1 = 0;
    pcVar2 = local_78[0];
    (*(code *)PTR__objc_msgSend_02578628)
              (local_78[0],PTR_s_objectForKeyedSubscript__0269d098,&cf_state);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
    if (((ulong)pcVar3 & 1) == 0) {
      local_2b8 = &::cf___;
    }
    else {
      local_2b8 = local_78[0];
      (*(code *)PTR__objc_msgSend_02578628)
                (local_78[0],PTR_s_objectForKeyedSubscript__0269d098,&cf_state);
      _objc_retainAutoreleasedReturnValue();
      local_c1 = 1;
      local_c0 = local_2b8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_b8 = local_2b8;
    if ((local_c1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_c0);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_78[0];
    (*(code *)PTR__objc_msgSend_02578628)
              (local_78[0],PTR_s_objectForKeyedSubscript__0269d098,&cf_enabled);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_a0;
    puVar4 = PTR__OBJC_CLASS___UITableViewRowAction_026ce5d8;
    local_c2 = (byte)pcVar3;
    local_100 = PTR___NSConcreteStackBlock_02578660;
    local_f8 = 0xc2000000;
    local_f4 = 0;
    local_f0 = FUN_01bf3a64;
    local_e8 = &DAT_02589ab8;
    (*(code *)PTR__objc_retain_02578638)();
    local_e0 = pcVar2;
    _objc_copyWeak(auStack_d8,auStack_60);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_rowActionWithStyle_title_handler_026a2d90,0,&cf_Rd,&local_100);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
    local_d0 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_redColor_026a8a38);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    puVar4 = PTR__OBJC_CLASS___UITableViewRowAction_026ce5d8;
    local_138 = PTR___NSConcreteStackBlock_02578660;
    local_130 = 0xc2000000;
    local_12c = 0;
    local_128 = FUN_01bf3b14;
    local_120 = &DAT_02589ab8;
    _objc_copyWeak(auStack_110,auStack_60);
    pcVar2 = local_78[0];
    (*(code *)PTR__objc_retain_02578638)();
    local_118 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_rowActionWithStyle_title_handler_026a2d90,1,&cf_O9ee,&local_138);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_108 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithObjects__026af658,local_d0);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_b8;
    local_140 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_isEqualToString__0269ccc8,&cf_pending);
    if ((((ulong)pcVar2 & 1) != 0) ||
       (pcVar2 = local_b8,
       (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_isEqualToString__0269ccc8,&cf_failed),
       ((ulong)pcVar2 & 1) != 0)) {
      if ((local_c2 & 1) == 0) {
        pcVar2 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_isEqualToString__0269ccc8,&cf_failed);
        local_360 = &cf_e_;
        if (((ulong)pcVar2 & 1) == 0) {
          local_360 = &cf___;
        }
      }
      else {
        local_360 = &cf_f_P;
      }
      (*(code *)PTR__objc_retain_02578638)();
      pcVar2 = local_a0;
      puVar4 = PTR__OBJC_CLASS___UITableViewRowAction_026ce5d8;
      local_148 = local_360;
      local_180 = PTR___NSConcreteStackBlock_02578660;
      local_178 = 0xc2000000;
      local_174 = 0;
      local_170 = FUN_01bf3bc0;
      local_168 = &DAT_02589ab8;
      (*(code *)PTR__objc_retain_02578638)();
      local_160 = pcVar2;
      _objc_copyWeak(auStack_158,auStack_60);
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_rowActionWithStyle_title_handler_026a2d90,1,local_360,&local_180);
      _objc_retainAutoreleasedReturnValue();
      local_150 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_addObject__0269d180,puVar4);
      _objc_storeStrong(&local_150);
      _objc_destroyWeak(auStack_158);
      _objc_storeStrong(&local_160,0);
      _objc_storeStrong(&local_148,0);
    }
    puVar4 = local_140;
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = puVar4;
    local_184 = 1;
    _objc_storeStrong(&local_140);
    _objc_storeStrong(&local_108,0);
    _objc_storeStrong(&local_118,0);
    _objc_destroyWeak(auStack_110);
    _objc_storeStrong(&local_d0,0);
    _objc_destroyWeak(auStack_d8);
    _objc_storeStrong(&local_e0,0);
    _objc_storeStrong(&local_b8,0);
    _objc_storeStrong(&local_a0,0);
    _objc_storeStrong(local_78,0);
  }
  _objc_destroyWeak(auStack_60);
  _objc_storeStrong(&local_58,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_40;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

