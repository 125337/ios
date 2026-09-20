// FUN_001576c4 @ 001576c4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_001576c4(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar3;
  ulong uVar4;
  cfstringStruct *pcVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong local_1a0;
  undefined *local_158;
  undefined4 local_150;
  undefined4 local_14c;
  code *local_148;
  undefined *local_140;
  undefined8 local_138;
  ulong local_130;
  undefined1 auStack_128 [8];
  undefined *local_120;
  undefined4 local_118;
  undefined4 local_114;
  code *local_110;
  undefined *local_108;
  ulong local_100;
  undefined8 local_f8;
  undefined1 auStack_f0 [8];
  ulong local_e8;
  undefined8 local_e0;
  undefined1 auStack_d8 [15];
  byte local_c9;
  ulong local_c8;
  byte local_b9;
  ulong local_b8;
  ulong local_b0;
  ulong local_a8;
  undefined4 local_a0;
  undefined8 local_90;
  undefined8 local_88;
  ulong local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  undefined **local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined **local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  undefined8 *puVar2;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar2 = &local_90;
  local_90 = 0;
  local_88 = param_2;
  local_80 = param_1;
  _objc_storeStrong(puVar2,param_3);
  uVar1 = (uint)puVar2;
  FUN_0015ab30();
  uVar3 = local_80;
  if ((uVar1 & 1) == 0) {
    (*DAT_028c8800)(local_80,local_88,local_90);
    local_a0 = 1;
  }
  else if ((DAT_028c8859 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_a8 = uVar3;
    local_b0 = 0;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR_s_respondsToSelector__026ca818,PTR_s_getGroupContact_0269f648);
    if ((uVar3 & 1) != 0) {
      uVar4 = local_a8;
      (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_getGroupContact_0269f648);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_b0;
      local_b0 = uVar4;
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    if (local_b0 == 0) {
      local_b9 = 0;
      uVar3 = local_a8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_a8,PTR_s_respondsToSelector__026ca818,PTR_s_GetContact_0269d2c0);
      if ((uVar3 & 1) == 0) {
        local_1a0 = 0;
      }
      else {
        local_1a0 = local_a8;
        (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_GetContact_0269d2c0);
        _objc_retainAutoreleasedReturnValue();
        local_b9 = 1;
        local_b8 = local_1a0;
      }
      _objc_storeStrong(&local_b0,local_1a0);
      if ((local_b9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_b8);
      }
    }
    uVar3 = local_a8;
    FUN_0015abcc();
    _objc_retainAutoreleasedReturnValue();
    local_c8 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0);
    if (uVar3 == 0) {
      (*DAT_028c8800)(local_80,local_88,local_90);
      local_a0 = 1;
    }
    else {
      local_c9 = (byte)local_b0;
      FUN_00160d4c();
      FUN_00160e5c(local_a8);
      if ((local_c9 & 1) == 0) {
        uVar3 = local_c8;
        FUN_00161134(local_c8,local_90);
        puVar8 = PTR_WCRefineHelper_026ce000;
        if ((uVar3 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_n_v1Y_);
        }
        else {
          pcVar5 = &cf_ChatRoomTopMessage_SetTop_DoneToast;
          FUN_001604fc(&cf_ChatRoomTopMessage_SetTop_DoneToast,&cf__n_v);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_showModernToast__0269ce78);
          (*(code *)PTR__objc_release_02578630)(pcVar5);
          (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_updateTopMessageInfo_0269f5d0);
        }
        local_a0 = 1;
      }
      else {
        _objc_initWeak(auStack_d8,local_80);
        uVar6 = local_90;
        (*(code *)PTR__objc_retain_02578638)();
        uVar3 = local_c8;
        local_e0 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_copy_0269d150);
        uVar4 = local_a8;
        local_58 = &cf_title;
        local_48 = &cf__g0Wn_vN_S;
        local_50 = &cf_handler;
        ppuVar7 = &local_120;
        local_120 = PTR___NSConcreteStackBlock_02578660;
        local_118 = 0xc2000000;
        local_114 = 0;
        local_110 = FUN_001627b0;
        local_108 = &DAT_0257a630;
        local_e8 = uVar3;
        _objc_copyWeak(auStack_f0,auStack_d8);
        uVar3 = local_e8;
        (*(code *)PTR__objc_retain_02578638)();
        uVar6 = local_e0;
        local_100 = uVar3;
        (*(code *)PTR__objc_retain_02578638)();
        local_f8 = uVar6;
        _objc_retainBlock();
        puVar8 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_40 = ppuVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_48,&local_58,2);
        _objc_retainAutoreleasedReturnValue();
        local_78 = &cf_title;
        local_68 = &cf_hQXTn_v;
        local_70 = &cf_handler;
        ppuVar9 = &local_158;
        local_158 = PTR___NSConcreteStackBlock_02578660;
        local_150 = 0xc2000000;
        local_14c = 0;
        local_148 = FUN_00162938;
        local_140 = &DAT_0257a630;
        local_38 = puVar8;
        _objc_copyWeak(auStack_128,auStack_d8);
        uVar6 = local_e0;
        (*(code *)PTR__objc_retain_02578638)();
        uVar3 = local_e8;
        local_138 = uVar6;
        (*(code *)PTR__objc_retain_02578638)();
        local_130 = uVar3;
        _objc_retainBlock();
        puVar10 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_60 = ppuVar9;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_68,&local_78,2);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_30 = puVar10;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_38,2);
        _objc_retainAutoreleasedReturnValue();
        FUN_00161de0(uVar4,&cf_bn_ve_);
        (*(code *)PTR__objc_release_02578630)(puVar11);
        (*(code *)PTR__objc_release_02578630)(puVar10);
        (*(code *)PTR__objc_release_02578630)(ppuVar9);
        (*(code *)PTR__objc_release_02578630)(puVar8);
        (*(code *)PTR__objc_release_02578630)(ppuVar7);
        _objc_storeStrong(&local_130);
        _objc_storeStrong(&local_138,0);
        _objc_destroyWeak(auStack_128);
        _objc_storeStrong(&local_f8,0);
        _objc_storeStrong(&local_100,0);
        _objc_destroyWeak(auStack_f0);
        _objc_storeStrong(&local_e8,0);
        _objc_storeStrong(&local_e0,0);
        _objc_destroyWeak(auStack_d8);
        local_a0 = 0;
      }
    }
    _objc_storeStrong(&local_c8);
    _objc_storeStrong(&local_b0,0);
    _objc_storeStrong(&local_a8,0);
  }
  else {
    DAT_028c8859 = 0;
    (*DAT_028c8800)(local_80,local_88,local_90);
    local_a0 = 1;
  }
  _objc_storeStrong(&local_90,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

