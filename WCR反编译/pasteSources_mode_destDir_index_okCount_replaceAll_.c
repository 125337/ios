// pasteSources:mode:destDir:index:okCount:replaceAll: @ 019979e8

/* Function Stack Size: 0x3c bytes */

void WCRefineFileManagerViewController::pasteSources_mode_destDir_index_okCount_replaceAll_
               (ID param_1,SEL param_2,ID param_3,long_long param_4,ID param_5,
               unsigned_long_long param_6,unsigned_long_long param_7,bool param_8)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  dispatch_queue_t pdVar5;
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  code *local_c8;
  undefined *local_c0;
  ulong local_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [8];
  unsigned_long_long local_a0;
  unsigned_long_long local_98;
  long_long local_90;
  byte local_88;
  undefined1 auStack_80 [12];
  undefined4 local_74;
  cfstringStruct *local_70;
  undefined *local_68;
  byte local_59;
  unsigned_long_long local_58;
  unsigned_long_long local_50;
  undefined8 local_48;
  long_long local_40;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_48 = 0;
  local_40 = param_4;
  _objc_storeStrong(&local_48,param_5);
  local_59 = (byte)param_8;
  uVar2 = local_38;
  local_58 = param_7;
  local_50 = param_6;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
  if (param_6 < uVar2) {
    _objc_initWeak(param_6 - uVar2,auStack_80,local_28);
    pdVar5 = _dispatch_get_global_queue(0x19,0);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = PTR___NSConcreteStackBlock_02578660;
    local_d0 = 0xc2000000;
    local_cc = 0;
    local_c8 = FUN_01997d40;
    local_c0 = &DAT_0258a758;
    _objc_copyWeak(auStack_a8,auStack_80);
    uVar2 = local_38;
    local_a0 = local_50;
    local_98 = local_58;
    local_88 = local_59 & 1;
    (*(code *)PTR__objc_retain_02578638)();
    uVar1 = local_48;
    local_b8 = uVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = uVar1;
    local_90 = local_40;
    _dispatch_async(pdVar5,&local_d8);
    (*(code *)PTR__objc_release_02578630)(pdVar5);
    _objc_storeStrong(&local_b0);
    _objc_storeStrong(&local_b8,0);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_80);
    local_74 = 0;
  }
  else {
    puVar3 = PTR_WCRFileManagerState_026cf1c8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRFileManagerState_026cf1c8,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_70 = &cf_yR;
    if (local_40 != 2) {
      local_70 = &cf_Y6R;
    }
    local_68 = puVar3;
    (*(code *)PTR__objc_retain_02578638)();
    puVar3 = PTR_WCRefineHelper_026ce000;
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_showModernToast__0269ce78);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_clearClipboard_026ba668);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_updateBottomBarBadge_026ba2b8);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reload_026af6c8);
    local_74 = 1;
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_38,0);
  return;
}

