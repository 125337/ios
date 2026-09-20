// FUN_016c38d8 @ 016c38d8

void FUN_016c38d8(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  char *pcVar5;
  long lVar6;
  ulong uVar7;
  undefined *local_210;
  undefined *local_208;
  undefined *local_1d8;
  ulong local_160;
  char *local_158;
  char *local_150;
  ulong local_148;
  int local_13c;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  ulong local_f8;
  undefined *local_f0 [2];
  int local_dc;
  ulong local_d8;
  ulong local_d0;
  int local_c8;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  uVar2 = local_b0;
  FUN_016aa360();
  _objc_retainAutoreleasedReturnValue();
  local_b8 = uVar2;
  if ((uVar2 == 0) || (FUN_016aa590(), (uVar2 & 1) != 0)) {
    FUN_016abf68(&cf_elSmo_);
    local_c8 = 1;
    goto LAB_016c428c;
  }
  uVar2 = local_b8;
  FUN_016ae6d4();
  _objc_retainAutoreleasedReturnValue();
  local_d0 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
  if (uVar2 == 0) {
    FUN_016abf68(&cf_fN_ec___WReQOSVY);
    local_c8 = 1;
  }
  else {
    uVar2 = local_b0;
    FUN_016b15dc();
    _objc_retainAutoreleasedReturnValue();
    local_dc = 0;
    uVar7 = local_b8;
    local_d8 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b8,PTR_s_respondsToSelector__026ca818,PTR_s_m_uiMesLocalID_0269d238);
    if ((uVar7 & 1) != 0) {
      uVar2 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_valueForKey__0269d128,&cf_m_uiMesLocalID)
      ;
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_dc = (int)uVar7;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_1d8 = puVar4;
    if (puVar4 == (undefined *)0x0) {
      local_1d8 = *(undefined **)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_f0[0] = local_1d8;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if ((local_dc == 0) ||
       (uVar2 = local_d8, (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0),
       uVar2 == 0)) {
LAB_016c3fd0:
      pcVar5 = "WCUIAlertView";
      _objc_getClass(0);
      local_150 = pcVar5;
      if (pcVar5 == (char *)0x0) {
        FUN_016c4340(local_b0,&cf___);
        local_c8 = 1;
      }
      else {
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar5,PTR_s_initWithTitle_message__0269d260,&cf_mROSVY,&cf_kXQYlkXYuzzRNOX_Yl);
        local_158 = pcVar5;
        if (pcVar5 == (char *)0x0) {
          FUN_016c4340(local_b0,&cf___);
          local_c8 = 1;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar5,PTR_s_respondsToSelector__026ca818,
                     PTR_s_showTextFieldWithMaxLen__0269e5e0);
          if (((ulong)pcVar5 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_158,PTR_s_showTextFieldWithMaxLen__0269e5e0,0x50);
          }
          _objc_setAssociatedObject(local_b0,&DAT_028e3f01,local_158,1);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_158,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
          uVar2 = local_b0;
          FUN_016aed70();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR_s_WCRefine_onMessageRepositoryRema_026b2d50;
          local_160 = uVar2;
          if (uVar2 == 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_158,PTR_s_addBtnTitle_target_sel__0269d278,&cf_mR,local_b0,
                       PTR_s_WCRefine_confirmMessageRepositor_026b2b18);
          }
          else {
            FUN_016c54e0(uVar2);
            _objc_setAssociatedObject(local_160,&DAT_028e3f02,local_b0,1);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_158,PTR_s_addBtnTitle_target_sel__0269d278,&cf_mR,local_160,puVar3);
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_show_0269d280);
          _objc_storeStrong(&local_160,0);
          local_c8 = 0;
        }
        _objc_storeStrong(&local_158,0);
      }
    }
    else {
      _memset(auStack_138,0,0x40);
      puVar3 = local_f0[0];
      (*(code *)PTR__objc_retain_02578638)();
      local_208 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10)
      ;
      if (local_208 != (undefined *)0x0) {
        lVar6 = *local_128;
        local_210 = (undefined *)0x0;
        do {
          do {
            if (*local_128 - lVar6 != 0) {
              _objc_enumerationMutation(*local_128 - lVar6,puVar3);
            }
            uVar7 = *(ulong *)(local_130 + (long)local_210 * 8);
            local_f8 = uVar7;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar7,PTR_s_objectForKeyedSubscript__0269d098,&cf_localId);
            _objc_retainAutoreleasedReturnValue();
            uVar2 = uVar7;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(uVar7);
            local_13c = (int)uVar2;
            uVar2 = local_f8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_f8,PTR_s_objectForKeyedSubscript__0269d098,&cf_sessionUserName);
            _objc_retainAutoreleasedReturnValue();
            iVar1 = local_13c - local_dc;
            local_148 = uVar2;
            if (iVar1 == 0) {
              puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
              iVar1 = (int)uVar2;
              if ((uVar2 & 1) == 0) goto LAB_016c3f04;
              uVar2 = local_148;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_148,PTR_s_isEqualToString__0269ccc8,local_d8);
              iVar1 = (int)uVar2;
              if ((uVar2 & 1) == 0) goto LAB_016c3f04;
              FUN_016abf68(&cf_mo__mR);
              iVar1 = 1;
              local_c8 = 1;
            }
            else {
LAB_016c3f04:
              local_c8 = 0;
            }
            _objc_storeStrong(iVar1,&local_148,0);
            if (local_c8 != 0) goto LAB_016c3f98;
            local_210 = local_210 + 1;
          } while (local_210 < local_208);
          local_208 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,
                     0x10);
          local_210 = (undefined *)0x0;
        } while (local_208 != (undefined *)0x0);
      }
      local_c8 = 0;
LAB_016c3f98:
      (*(code *)PTR__objc_release_02578630)(puVar3);
      if (local_c8 == 0) goto LAB_016c3fd0;
    }
    _objc_storeStrong(local_f0);
    _objc_storeStrong(&local_d8,0);
  }
  _objc_storeStrong(&local_d0,0);
LAB_016c428c:
  _objc_storeStrong(&local_b8);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

