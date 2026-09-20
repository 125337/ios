// beginVoiceRecordHoldWithInputToolView: @ 00febaf8

/* Function Stack Size: 0x18 bytes */

bool WCRefineInputBoxGestureSupport::beginVoiceRecordHoldWithInputToolView_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  char *pcVar4;
  double in_d0;
  double dVar5;
  double dVar6;
  undefined8 in_d1;
  undefined8 uVar7;
  undefined8 in_d2;
  undefined8 uVar8;
  undefined8 in_d3;
  undefined8 uVar9;
  undefined1 *local_158;
  undefined1 *local_138;
  byte local_12c;
  undefined1 *local_120;
  char *local_110;
  double local_f0;
  double dStack_e8;
  undefined1 *local_d0;
  undefined1 *local_c0;
  undefined1 *local_b8;
  double local_b0;
  double dStack_a8;
  double local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  bool local_79;
  undefined1 *local_78;
  undefined1 *local_70;
  bool local_61;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined4 local_44;
  undefined *local_40;
  SEL local_38;
  ID local_30;
  byte local_21;
  
  local_40 = (undefined1 *)0x0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  if (local_40 == (undefined1 *)0x0) {
    local_21 = 0;
    local_44 = 1;
    goto LAB_00fec59c;
  }
  if ((DAT_028e30d0 & 1) != 0) {
    local_21 = 1;
    local_44 = 1;
    goto LAB_00fec59c;
  }
  FUN_00fec5c0();
  DAT_028e30d8 = DAT_028e30d8 + 1;
  _objc_storeStrong(&DAT_028e30c8);
  _objc_storeWeak(&DAT_028e30b0,0);
  DAT_028e30e0 = 0;
  DAT_028e30e8 = (undefined1 *)0x0;
  DAT_028e30f0 = 0;
  DAT_028e30f1 = 0;
  _objc_storeWeak(&DAT_028e30b8,0);
  _objc_storeWeak(&DAT_028e30c0,0);
  DAT_028e30f2 = 0;
  local_50 = (undefined1 *)0x0;
  puVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_inputMode_0269f4a8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_inputMode_0269f4a8);
    local_50 = puVar2;
  }
  if (local_50 != (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
    DAT_028e30e0 = 1;
    DAT_028e30e8 = local_50;
    puVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_textView_0269d0f8);
    local_61 = false;
    bVar1 = ((ulong)puVar2 & 1) == 0;
    if (bVar1) {
      local_120 = (undefined1 *)0x0;
    }
    else {
      local_120 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_textView_0269d0f8);
      _objc_retainAutoreleasedReturnValue();
      local_60 = local_120;
    }
    local_61 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = local_120;
    if ((local_61 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    puVar3 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_isFirstResponder_0269f488);
    if (((ulong)puVar3 & 1) == 0) {
LAB_00febd90:
      puVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isFirstResponder_0269f488);
      local_12c = (byte)puVar2;
    }
    else {
      puVar3 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_isFirstResponder_0269f488);
      local_12c = 1;
      if (((ulong)puVar3 & 1) == 0) goto LAB_00febd90;
    }
    DAT_028e30f0 = local_12c & 1;
    puVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_setInputMode_animated__026ad530);
    if (((ulong)puVar2 & 1) == 0) {
      puVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_setInputMode__026ad538);
      if (((ulong)puVar2 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setInputMode__026ad538,2);
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setInputMode_animated__026ad530,2,0);
    }
    puVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_setContentMode_animated__026ad540);
    if (((ulong)puVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setContentMode_animated__026ad540,1,0);
    }
    puVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_resignFirstResponder_0269ea18);
    if (((ulong)puVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_resignFirstResponder_0269ea18);
    }
    puVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_setPoisitionMode_animated__026ad548
              );
    if (((ulong)puVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setPoisitionMode_animated__026ad548,1,0);
    }
    _objc_storeStrong(&local_58,0);
  }
  puVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_recordButton_026a0330);
  local_79 = false;
  bVar1 = ((ulong)puVar2 & 1) == 0;
  if (bVar1) {
    local_138 = (undefined1 *)0x0;
  }
  else {
    local_138 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_recordButton_026a0330);
    _objc_retainAutoreleasedReturnValue();
    local_78 = local_138;
  }
  local_79 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_70 = local_138;
  if ((local_79 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_78);
  }
  if (local_70 == (undefined1 *)0x0) {
    FUN_00fec6ac(local_40,0);
    local_21 = 0;
    local_44 = 1;
  }
  else {
    puVar3 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_70,PTR_s_respondsToSelector__026ca818,PTR_s_bounds_026ca548);
    if (((ulong)puVar3 & 1) == 0) {
      uVar7 = 0;
      dVar6 = 0.0;
      uVar9 = 0x4046000000000000;
      uVar8 = 0x4046000000000000;
      FUN_00fec7d4();
      local_a0 = dVar6;
      local_98 = uVar7;
      local_90 = uVar8;
      local_88 = uVar9;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_bounds_026ca548);
      local_a0 = in_d0;
      local_98 = in_d1;
      local_90 = in_d2;
      local_88 = in_d3;
    }
    dVar6 = local_a0;
    _CGRectGetMidX(local_a0,local_98,local_90,local_88);
    dVar5 = local_a0;
    _CGRectGetMidY(local_a0,local_98,local_90,local_88);
    FUN_00fec820();
    puVar3 = local_70;
    local_b0 = dVar6;
    dStack_a8 = dVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_70,PTR_s_respondsToSelector__026ca818,PTR_s_setM_pTouchLocation__026ad550);
    if (((ulong)puVar3 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b0,dStack_a8,local_70,PTR_s_setM_pTouchLocation__026ad550);
    }
    puVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_window_026cabf0);
    _objc_retainAutoreleasedReturnValue();
    local_158 = puVar2;
    if (puVar2 == (undefined1 *)0x0) {
      local_c0 = PTR__OBJC_CLASS___UIApplication_026ce010;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
      _objc_retainAutoreleasedReturnValue();
      local_d0 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_158 = local_d0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_b8 = local_158;
    if (puVar2 == (undefined1 *)0x0) {
      (*(code *)PTR__objc_release_02578630)(local_d0);
      (*(code *)PTR__objc_release_02578630)(local_c0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    dStack_e8 = dStack_a8;
    local_f0 = local_b0;
    puVar3 = local_70;
    dVar6 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_70,PTR_s_respondsToSelector__026ca818,PTR_s_convertPoint_toView__0269e548);
    if (((ulong)puVar3 & 1) != 0) {
      dVar6 = local_b0;
      dStack_e8 = dStack_a8;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_convertPoint_toView__0269e548,local_b8);
      local_f0 = dVar6;
    }
    puVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_setPointInScreen__026ad558);
    if (((ulong)puVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_f0,dStack_e8,local_40,PTR_s_setPointInScreen__026ad558);
      dVar6 = local_f0;
    }
    puVar3 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_70,PTR_s_respondsToSelector__026ca818,PTR_s_setHighlighted__0269fd50);
    if (((ulong)puVar3 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setHighlighted__0269fd50,1);
    }
    puVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_setTouchBeginTimestamp__026ad560);
    if (((ulong)puVar2 & 1) != 0) {
      local_110 = "CUtility";
      _objc_getClass();
      if ((local_110 == (char *)0x0) ||
         (pcVar4 = local_110,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_110,PTR_s_respondsToSelector__026ca818,PTR_s_genCurrentTimeInMs_026ad568),
         ((ulong)pcVar4 & 1) == 0)) {
        _CFAbsoluteTimeGetCurrent();
        dVar6 = dVar6 * 1000.0;
        local_110 = (char *)(long)dVar6;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_genCurrentTimeInMs_026ad568);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_setTouchBeginTimestamp__026ad560,local_110);
    }
    puVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_startRecording__026a9b88);
    bVar1 = ((ulong)puVar2 & 1) != 0;
    if (bVar1) {
      DAT_028e30d0 = 1;
      _objc_storeWeak(&DAT_028e30a8,local_40);
      puVar2 = local_40;
      FUN_00fec84c();
      _objc_retainAutoreleasedReturnValue();
      _objc_storeWeak(&DAT_028e30c0);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      _CFAbsoluteTimeGetCurrent();
      DAT_028e30f8 = dVar6;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_startRecording__026a9b88,local_70);
      _WCRefineVoiceRippleSetPressToTalkActive(local_40,1);
    }
    else {
      FUN_00fec6ac(local_40,local_70);
    }
    local_44 = 1;
    local_21 = bVar1;
    _objc_storeStrong(&local_b8,0);
  }
  _objc_storeStrong(&local_70,0);
LAB_00fec59c:
  _objc_storeStrong(&local_40,0);
  return local_21 & 1;
}

