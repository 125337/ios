// FUN_00fee7b8 @ 00fee7b8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00fee7b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  bool bVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined *local_158;
  undefined *local_140;
  undefined *local_130;
  undefined *local_128;
  undefined *local_f0;
  bool local_c1;
  undefined *local_c0;
  undefined *local_b8;
  bool local_a9;
  undefined *local_a8;
  undefined *local_a0;
  bool local_91;
  undefined *local_90;
  undefined *local_88;
  undefined *local_80;
  byte local_71;
  long local_70;
  undefined4 local_68;
  byte local_61;
  undefined *local_60;
  byte local_51;
  undefined *local_50;
  byte local_41;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  
  local_28 = (undefined *)0x0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = (undefined *)0x0;
  _objc_storeStrong(&local_30,param_2);
  local_f0 = local_28;
  local_41 = 0;
  bVar2 = local_28 == (undefined *)0x0;
  if (bVar2) {
    local_f0 = &DAT_028e30b8;
    _objc_loadWeakRetained();
    local_40 = local_f0;
  }
  local_41 = bVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_f0;
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  local_51 = 0;
  local_61 = 0;
  bVar2 = true;
  if (((DAT_028e30f1 & 1) != 0) && (bVar2 = true, local_38 != (undefined *)0x0)) {
    puVar3 = &DAT_028e30b8;
    _objc_loadWeakRetained();
    puVar1 = local_38;
    local_51 = 1;
    bVar2 = false;
    local_50 = puVar3;
    if (puVar3 != (undefined *)0x0) {
      puVar3 = &DAT_028e30b8;
      _objc_loadWeakRetained();
      local_61 = 1;
      bVar2 = puVar1 != puVar3;
      local_60 = puVar3;
    }
  }
  if ((local_61 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  if (bVar2) {
    local_68 = 1;
  }
  else if (((DAT_028e30d0 & 1) == 0) && (DAT_028e3120 == DAT_028e30d8)) {
    local_70 = DAT_028e30e8;
    local_71 = DAT_028e30f0 & 1;
    if (DAT_028e30e8 == 2) {
      local_70 = 0;
    }
    DAT_028e30f1 = 0;
    _objc_storeWeak(&DAT_028e30b8);
    _objc_storeWeak(&DAT_028e30c0,0);
    DAT_028e30f2 = 0;
    DAT_028e30e0 = 0;
    DAT_028e30e8 = 0;
    DAT_028e30f0 = 0;
    puVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_window_026cabf0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (puVar3 == (undefined *)0x0) {
      local_68 = 1;
    }
    else {
      puVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_inputMode_0269f4a8);
      if (((ulong)puVar3 & 1) == 0) {
        local_128 = (undefined *)0xffffffffffffffff;
      }
      else {
        local_128 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_inputMode_0269f4a8);
      }
      local_80 = local_128;
      if (local_128 == (undefined *)0x2) {
        puVar3 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_textView_0269d0f8);
        local_91 = false;
        bVar2 = ((ulong)puVar3 & 1) == 0;
        if (bVar2) {
          local_130 = (undefined *)0x0;
        }
        else {
          local_130 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_textView_0269d0f8);
          _objc_retainAutoreleasedReturnValue();
          local_90 = local_130;
        }
        local_91 = !bVar2;
        (*(code *)PTR__objc_retain_02578638)();
        local_88 = local_130;
        if ((local_91 & 1U) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_90);
        }
        if (((local_71 & 1) != 0) &&
           (puVar3 = local_38,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_38,PTR_s_respondsToSelector__026ca818,
                      PTR_s_onInputModeChangeButtonClicked__026ad5d0), ((ulong)puVar3 & 1) != 0)) {
          puVar3 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_38,PTR_s_respondsToSelector__026ca818,
                     PTR_s_inputModeChangeButton_026a9620);
          local_a9 = false;
          bVar2 = ((ulong)puVar3 & 1) == 0;
          if (bVar2) {
            local_140 = (undefined *)0x0;
          }
          else {
            local_140 = local_38;
            (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_inputModeChangeButton_026a9620);
            _objc_retainAutoreleasedReturnValue();
            local_a8 = local_140;
          }
          local_a9 = !bVar2;
          (*(code *)PTR__objc_retain_02578638)();
          local_a0 = local_140;
          if ((local_a9 & 1U) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_a8);
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_38,PTR_s_onInputModeChangeButtonClicked__026ad5d0,local_a0);
          _objc_storeStrong(&local_a0,0);
        }
        if (((local_71 & 1) == 0) ||
           (puVar3 = local_88,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_88,PTR_s_respondsToSelector__026ca818,
                      PTR_s_becomeFirstResponder_0269d108), ((ulong)puVar3 & 1) == 0)) {
          if (((local_71 & 1) == 0) &&
             (puVar3 = local_88,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_88,PTR_s_respondsToSelector__026ca818,
                        PTR_s_resignFirstResponder_0269ea18), ((ulong)puVar3 & 1) != 0)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_resignFirstResponder_0269ea18);
          }
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_becomeFirstResponder_0269d108);
        }
        puVar3 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_setInputMode_animated__026ad530
                  );
        if (((ulong)puVar3 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_38,PTR_s_setInputMode_animated__026ad530,local_70,0);
        }
        puVar3 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_respondsToSelector__026ca818,
                   PTR_s_setContentMode_animated__026ad540);
        if (((ulong)puVar3 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_38,PTR_s_setContentMode_animated__026ad540,1,0);
        }
        puVar3 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_respondsToSelector__026ca818,
                   PTR_s_setPoisitionMode_animated__026ad548);
        if (((ulong)puVar3 & 1) != 0) {
          uVar4 = 2;
          if ((local_71 & 1) == 0) {
            uVar4 = 1;
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_38,PTR_s_setPoisitionMode_animated__026ad548,uVar4,0);
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setNeedsLayout_0269deb8);
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_layoutIfNeeded_026ca790);
        puVar3 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_recordButton_026a0330);
        local_c1 = ((ulong)puVar3 & 1) == 0;
        if (local_c1) {
          local_158 = (undefined *)0x0;
        }
        else {
          local_158 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_recordButton_026a0330);
          _objc_retainAutoreleasedReturnValue();
          local_c0 = local_158;
        }
        local_c1 = !local_c1;
        (*(code *)PTR__objc_retain_02578638)();
        local_b8 = local_158;
        if (local_c1) {
          (*(code *)PTR__objc_release_02578630)(local_c0);
        }
        _objc_storeStrong(&local_b8);
        _objc_storeStrong(&local_88,0);
        local_68 = 0;
      }
      else {
        local_68 = 1;
      }
    }
  }
  else {
    local_68 = 1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

