// FUN_00fec9bc @ 00fec9bc

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00fec9bc(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined1 uVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_138;
  undefined *local_110;
  long local_f8;
  undefined *local_d8;
  bool local_a9;
  undefined *local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined1 local_89;
  undefined *local_88;
  byte local_79;
  undefined *local_78;
  bool local_69;
  undefined *local_68;
  undefined *local_60;
  long local_58;
  byte local_49;
  undefined *local_48;
  undefined *local_40;
  undefined4 local_34;
  long local_30;
  undefined *local_28;
  
  local_28 = (undefined *)0x0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  if ((DAT_028e30d0 & 1) == 0) {
    local_34 = 1;
  }
  else {
    DAT_028e30d0 = 0;
    local_d8 = local_28;
    local_49 = 0;
    bVar1 = local_28 == (undefined *)0x0;
    if (bVar1) {
      local_d8 = &DAT_028e30a8;
      _objc_loadWeakRetained();
      local_48 = local_d8;
    }
    local_49 = bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = local_d8;
    if ((local_49 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    _objc_storeWeak(&DAT_028e30a8);
    _objc_storeWeak(&DAT_028e30b0,0);
    if (local_30 == 0) {
      local_f8 = DAT_028e30c8;
    }
    else {
      local_f8 = local_30;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = local_f8;
    _objc_storeStrong(&DAT_028e30c8,0);
    if (local_40 == (undefined *)0x0) {
      _WCRefineVoiceRippleSetPressToTalkActive(0,0);
      DAT_028e30e0 = 0;
      local_34 = 1;
    }
    else {
      puVar4 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_recordButton_026a0330);
      local_69 = false;
      bVar1 = ((ulong)puVar4 & 1) == 0;
      if (bVar1) {
        local_110 = (undefined *)0x0;
      }
      else {
        local_110 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_recordButton_026a0330);
        _objc_retainAutoreleasedReturnValue();
        local_68 = local_110;
      }
      local_69 = !bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_60 = local_110;
      if ((local_69 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_68);
      }
      puVar4 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_respondsToSelector__026ca818,PTR_s_setHighlighted__0269fd50);
      if (((ulong)puVar4 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setHighlighted__0269fd50,0);
      }
      FUN_00fee6f8(local_40);
      puVar4 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_setPointInScreen__026ad558);
      if (((ulong)puVar4 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (*(undefined8 *)PTR__CGPointZero_025782e0,
                   *(undefined8 *)(PTR__CGPointZero_025782e0 + 8),local_40,
                   PTR_s_setPointInScreen__026ad558);
      }
      puVar4 = local_40;
      FUN_00fec84c();
      _objc_retainAutoreleasedReturnValue();
      local_89 = 0;
      uVar2 = puVar4 != (undefined *)0x0;
      local_78 = puVar4;
      local_79 = false;
      if ((bool)uVar2) {
        puVar5 = &DAT_028e30c0;
        _objc_loadWeakRetained();
        local_89 = uVar2;
        local_88 = puVar5;
        (*(code *)PTR__objc_release_02578630)(puVar5);
        uVar2 = local_89;
        local_79 = puVar4 != puVar5;
      }
      local_89 = uVar2;
      local_98 = (undefined *)0xffffffffffffffff;
      puVar4 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_78,PTR_s_respondsToSelector__026ca818,PTR_s_recordView_026ad5e0);
      local_a9 = ((ulong)puVar4 & 1) == 0;
      if (local_a9) {
        local_138 = (undefined *)0x0;
      }
      else {
        local_138 = local_78;
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_recordView_026ad5e0);
        _objc_retainAutoreleasedReturnValue();
        local_a8 = local_138;
      }
      local_a9 = !local_a9;
      (*(code *)PTR__objc_retain_02578638)();
      local_a0 = local_138;
      if (local_a9) {
        (*(code *)PTR__objc_release_02578630)(local_a8);
      }
      puVar4 = local_a0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_a0,PTR_s_respondsToSelector__026ca818,PTR_s_getRecordState_026ad5e8);
      if (((ulong)puVar4 & 1) != 0) {
        puVar4 = local_a0;
        (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_getRecordState_026ad5e8);
        local_98 = puVar4;
      }
      _objc_storeWeak(&DAT_028e30c0,0);
      if ((local_79 & 1) != 0) {
        puVar4 = local_78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_78,PTR_s_respondsToSelector__026ca818,PTR_s_setIsTouchEnd__026ad5f0);
        if (((ulong)puVar4 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setIsTouchEnd__026ad5f0,1);
        }
        puVar4 = local_78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_78,PTR_s_respondsToSelector__026ca818,PTR_s_onTouchEndWithTouches__026a9c50
                  );
        if (((ulong)puVar4 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_78,PTR_s_onTouchEndWithTouches__026a9c50,local_58);
        }
      }
      _WCRefineVoiceRippleSetPressToTalkActive(local_40,0);
      if (((local_79 & 1) == 0) || (local_98 == (undefined *)0x7)) {
        pcVar3 = &cf_recordState7;
        if (local_98 != (undefined *)0x7) {
          pcVar3 = &cf_notStarted;
        }
        FUN_00fed348(local_40,pcVar3);
      }
      _objc_storeStrong(&local_a0);
      _objc_storeStrong(&local_78,0);
      _objc_storeStrong(&local_60,0);
      local_34 = 0;
    }
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

