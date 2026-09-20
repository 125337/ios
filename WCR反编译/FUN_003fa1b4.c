// FUN_003fa1b4 @ 003fa1b4

byte FUN_003fa1b4(ulong param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *local_1f0;
  undefined *local_1e8;
  cfstringStruct *local_1c0;
  cfstringStruct *local_1a8;
  cfstringStruct *local_190;
  cfstringStruct *local_178;
  cfstringStruct *local_160;
  undefined1 auStack_140 [8];
  long local_138;
  long *local_130;
  undefined8 local_100;
  undefined *local_f8;
  int local_f0;
  cfstringStruct *local_e0;
  byte local_d1;
  undefined1 auStack_d0 [128];
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  FUN_003f4598();
  if ((param_1 & 1) == 0) {
    local_d1 = 0;
  }
  else {
    pcVar1 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_inputBoxGestureEnabled_026a3428);
    if (((ulong)pcVar1 & 1) == 0) {
      local_d1 = 0;
      local_f0 = 1;
    }
    else {
      pcVar1 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_inputBoxSwipeLeftAction_026a3450);
      _objc_retainAutoreleasedReturnValue();
      local_160 = pcVar1;
      if (pcVar1 == (cfstringStruct *)0x0) {
        local_160 = &cf___;
      }
      local_50 = local_160;
      pcVar2 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_inputBoxSwipeRightAction_026a3458);
      _objc_retainAutoreleasedReturnValue();
      local_178 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_178 = &cf___;
      }
      local_48 = local_178;
      pcVar3 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_inputBoxSwipeUpAction_026a3448);
      _objc_retainAutoreleasedReturnValue();
      local_190 = pcVar3;
      if (pcVar3 == (cfstringStruct *)0x0) {
        local_190 = &cf___;
      }
      local_40 = local_190;
      pcVar4 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_inputBoxLongPressAction_026a3430);
      _objc_retainAutoreleasedReturnValue();
      local_1a8 = pcVar4;
      if (pcVar4 == (cfstringStruct *)0x0) {
        local_1a8 = &cf___;
      }
      local_38 = local_1a8;
      pcVar5 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_inputBoxDoubleTapAction_026a3460);
      _objc_retainAutoreleasedReturnValue();
      local_1c0 = pcVar5;
      if (pcVar5 == (cfstringStruct *)0x0) {
        local_1c0 = &cf___;
      }
      local_30 = local_1c0;
      puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_50
                 ,5);
      _objc_retainAutoreleasedReturnValue();
      local_f8 = puVar6;
      (*(code *)PTR__objc_release_02578630)(pcVar5);
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      _memset(auStack_140,0,0x40);
      puVar6 = local_f8;
      (*(code *)PTR__objc_retain_02578638)();
      local_1e8 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_d0,0x10)
      ;
      if (local_1e8 != (undefined *)0x0) {
        lVar9 = *local_130;
        local_1f0 = (undefined *)0x0;
        do {
          do {
            if (*local_130 - lVar9 != 0) {
              _objc_enumerationMutation(*local_130 - lVar9,puVar6);
            }
            local_100 = *(undefined8 *)(local_138 + (long)local_1f0 * 8);
            puVar7 = PTR_WCRefineInputBoxGestureSupport_026ce678;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineInputBoxGestureSupport_026ce678,PTR_s_normalizedAction__026a3438,
                       local_100);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar7;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(puVar7);
            if (((ulong)puVar8 & 1) == 0) {
              local_d1 = 1;
              local_f0 = 1;
              goto LAB_003fa788;
            }
            local_1f0 = local_1f0 + 1;
          } while (local_1f0 < local_1e8);
          local_1e8 = puVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_d0,
                     0x10);
          local_1f0 = (undefined *)0x0;
        } while (local_1e8 != (undefined *)0x0);
      }
      local_f0 = 0;
LAB_003fa788:
      (*(code *)PTR__objc_release_02578630)(puVar6);
      if (local_f0 == 0) {
        local_d1 = 0;
        local_f0 = 1;
      }
      _objc_storeStrong(&local_f8,0);
    }
    _objc_storeStrong(&local_e0,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_d1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

