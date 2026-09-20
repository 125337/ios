// editItemAtCell: @ 01a0b8a0

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

void WCRefineKeywordMultiReplyEditorViewController::editItemAtCell_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ID IVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong local_168;
  ulong local_158;
  undefined *local_130;
  undefined4 local_128;
  undefined4 local_124;
  code *local_120;
  undefined *local_118;
  undefined1 auStack_110 [8];
  ulong local_108;
  undefined *local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  code *local_f0;
  undefined *local_e8;
  undefined1 auStack_e0 [8];
  ulong local_d8;
  undefined *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  code *local_c0;
  undefined *local_b8;
  undefined1 auStack_b0 [8];
  ulong local_a8;
  undefined1 auStack_90 [8];
  uint local_88;
  byte local_81;
  ID local_80;
  ulong local_78;
  bool local_69;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  SEL local_50;
  ID local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_58 = 0;
  local_50 = param_2;
  local_48 = param_1;
  _objc_storeStrong(&local_58,param_3);
  uVar2 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_userInfo_0269f138);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
  uVar4 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  local_69 = false;
  bVar1 = (uVar4 & 1) == 0;
  if (bVar1) {
    local_158 = 0;
  }
  else {
    local_158 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_userInfo_0269f138);
    _objc_retainAutoreleasedReturnValue();
    local_68 = local_158;
  }
  local_69 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_60 = local_158;
  if ((local_69 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  if (local_60 == 0) {
    local_168 = 0x7fffffffffffffff;
  }
  else {
    local_168 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_unsignedIntegerValue_026cabb8);
  }
  local_78 = local_168;
  local_81 = 0;
  bVar1 = true;
  if (local_168 != 0x7fffffffffffffff) {
    IVar5 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_items_0269e4b0);
    _objc_retainAutoreleasedReturnValue();
    local_81 = 1;
    local_80 = IVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = IVar5 <= local_168;
  }
  if ((local_81 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_80);
  }
  if (!bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setEditingItemIndex__026bb6b0,local_78);
    _objc_initWeak(auStack_90,local_48);
    IVar5 = local_48;
    puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf____);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_WCRKeywordAutoReplySheetAction_026cf258;
    local_d0 = PTR___NSConcreteStackBlock_02578660;
    local_c8 = 0xc2000000;
    local_c4 = 0;
    local_c0 = FUN_01a0c000;
    local_b8 = &DAT_025799c0;
    _objc_copyWeak(auStack_b0,auStack_90);
    local_a8 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_actionWithTitle_handler__026b9738,&cf_fbc_Ne_g,&local_d0);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_WCRKeywordAutoReplySheetAction_026cf258;
    local_100 = PTR___NSConcreteStackBlock_02578660;
    local_f8 = 0xc2000000;
    local_f4 = 0;
    local_f0 = FUN_01a0c064;
    local_e8 = &DAT_025799c0;
    local_40 = puVar3;
    _objc_copyWeak(auStack_e0,auStack_90);
    local_d8 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar7,PTR_s_actionWithTitle_handler__026b9738,&cf_fbc_Nmo_N_,&local_100);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_WCRKeywordAutoReplySheetAction_026cf258;
    local_130 = PTR___NSConcreteStackBlock_02578660;
    local_128 = 0xc2000000;
    local_124 = 0;
    local_120 = FUN_01a0c0c8;
    local_118 = &DAT_025799c0;
    local_38 = puVar7;
    _objc_copyWeak(auStack_110,auStack_90);
    local_108 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar8,PTR_s_actionWithTitle_handler__026b9738,&cf_Rddkag,&local_130);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_30 = puVar8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_40,3
              );
    _objc_retainAutoreleasedReturnValue();
    FUN_01a0aaac(IVar5,puVar6,&cf_wcrKeywordMultiItemSheet);
    (*(code *)PTR__objc_release_02578630)(puVar9);
    (*(code *)PTR__objc_release_02578630)(puVar8);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    _objc_destroyWeak(auStack_110);
    _objc_destroyWeak(auStack_e0);
    _objc_destroyWeak(auStack_b0);
    _objc_destroyWeak(auStack_90);
  }
  local_88 = (uint)bVar1;
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

