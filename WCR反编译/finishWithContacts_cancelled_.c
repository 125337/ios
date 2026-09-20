// finishWithContacts:cancelled: @ 01bb4f50

/* Function Stack Size: 0x1c bytes */

void WCRMessageSyncRoomMemberPickerBridge::finishWithContacts_cancelled_
               (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined **ppuVar5;
  long lVar6;
  ulong uVar7;
  undefined *local_368;
  ulong local_318;
  ulong local_310;
  ulong local_2f8;
  undefined *local_2d0;
  undefined *local_2c8;
  ID local_2a8;
  ID local_278;
  ID local_260;
  undefined *local_258;
  undefined4 local_250;
  undefined4 local_24c;
  code *local_248;
  undefined *local_240;
  ID local_238;
  ID local_230;
  undefined **local_228;
  ID local_220 [4];
  ulong local_200;
  undefined1 auStack_1f8 [8];
  long local_1f0;
  long *local_1e8;
  ulong local_1b8;
  undefined1 auStack_1b0 [8];
  long local_1a8;
  long *local_1a0;
  undefined8 local_170;
  undefined *local_168;
  undefined *local_160;
  ID local_158;
  ID local_150;
  undefined4 local_148;
  byte local_141;
  ulong local_140;
  SEL local_138;
  ID local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_140 = 0;
  local_138 = param_2;
  local_130 = param_1;
  _objc_storeStrong(&local_140,param_3);
  local_141 = (byte)param_4;
  IVar2 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_finished_026a15b0);
  if ((IVar2 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setFinished__026a15b8,1);
    IVar2 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_completion_0269fb98);
    _objc_retainAutoreleasedReturnValue();
    local_150 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setCompletion__0269fdc8,0);
    IVar2 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_baselineSelected_026c0458);
    _objc_retainAutoreleasedReturnValue();
    local_278 = IVar2;
    if (IVar2 == 0) {
      local_278 = *(ID *)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_158 = local_278;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    puVar3 = PTR_WCRefineMessageSyncRule_026ce708;
    if ((local_141 & 1) == 0) {
      IVar2 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_roomID_026c0460);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_chatRoomMemberIDsForRoom__026c0468);
      _objc_retainAutoreleasedReturnValue();
      local_160 = puVar3;
      (*(code *)PTR__objc_release_02578630)(IVar2);
      puVar3 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
      IVar2 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_baselineSelected_026c0458);
      _objc_retainAutoreleasedReturnValue();
      local_2a8 = IVar2;
      if (IVar2 == 0) {
        local_2a8 = *(ID *)PTR____NSArray0___02578280;
      }
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_orderedSetWithArray__026a4b80,local_2a8);
      _objc_retainAutoreleasedReturnValue();
      local_168 = puVar3;
      (*(code *)PTR__objc_release_02578630)(IVar2);
      _memset(auStack_1b0,0,0x40);
      puVar3 = local_160;
      (*(code *)PTR__objc_retain_02578638)();
      local_2c8 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b0,auStack_a8,0x10)
      ;
      if (local_2c8 != (undefined *)0x0) {
        lVar6 = *local_1a0;
        local_2d0 = (undefined *)0x0;
        do {
          do {
            if (*local_1a0 - lVar6 != 0) {
              _objc_enumerationMutation(*local_1a0 - lVar6,puVar3);
            }
            local_170 = *(undefined8 *)(local_1a8 + (long)local_2d0 * 8);
            (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_removeObject__0269d678,local_170);
            local_2d0 = local_2d0 + 1;
          } while (local_2d0 < local_2c8);
          local_2c8 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b0,auStack_a8,
                     0x10);
          local_2d0 = (undefined *)0x0;
        } while (local_2c8 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar3);
      _memset(auStack_1f8,0,0x40);
      if (local_140 == 0) {
        local_2f8 = *(ulong *)PTR____NSArray0___02578280;
      }
      else {
        local_2f8 = local_140;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_310 = local_2f8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_2f8,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f8,auStack_128,
                 0x10);
      if (local_310 != 0) {
        lVar6 = *local_1e8;
        local_318 = 0;
        do {
          do {
            if (*local_1e8 - lVar6 != 0) {
              _objc_enumerationMutation(*local_1e8 - lVar6,local_2f8);
            }
            uVar7 = *(ulong *)(local_1f0 + local_318 * 8);
            local_200 = 0;
            local_1b8 = uVar7;
            (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_valueForKey__0269d128,&cf_m_nsUsrName)
            ;
            _objc_retainAutoreleasedReturnValue();
            uVar4 = local_200;
            local_200 = uVar7;
            (*(code *)PTR__objc_release_02578630)(uVar4);
            uVar4 = local_200;
            puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
            if (((uVar4 & 1) != 0) &&
               (uVar4 = local_200,
               (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_length_0269cca0), uVar4 != 0))
            {
              (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_addObject__0269d180,local_200);
            }
            _objc_storeStrong(&local_200,0);
            local_318 = local_318 + 1;
          } while (local_318 < local_310);
          local_310 = local_2f8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_2f8,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f8,
                     auStack_128,0x10);
          local_318 = 0;
        } while (local_310 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(local_2f8);
      puVar3 = local_168;
      (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_368 = puVar3;
      if (puVar3 == (undefined *)0x0) {
        local_368 = *(undefined **)PTR____NSArray0___02578280;
      }
      _objc_storeStrong(&local_158,local_368);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      _objc_storeStrong(&local_168);
      _objc_storeStrong(&local_160,0);
    }
    IVar2 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_picker_026ab880);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_150;
    ppuVar5 = &local_258;
    local_258 = PTR___NSConcreteStackBlock_02578660;
    local_250 = 0xc2000000;
    local_24c = 0;
    local_248 = FUN_01bb5888;
    local_240 = &DAT_0257ca68;
    local_220[0] = IVar2;
    (*(code *)PTR__objc_retain_02578638)();
    IVar2 = local_158;
    local_230 = IVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_238 = IVar2;
    _objc_retainBlock();
    IVar2 = local_220[0];
    local_228 = ppuVar5;
    (*(code *)PTR__objc_msgSend_02578628)(local_220[0],PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    local_260 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_presentingViewController_026a0db0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (IVar2 == 0) {
      IVar2 = local_220[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_220[0],PTR_s_presentingViewController_026a0db0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (IVar2 == 0) {
        (*(code *)local_228[2])();
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_220[0],PTR_s_dismissViewControllerAnimated_co_0269cf98,1,local_228);
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_260,PTR_s_dismissViewControllerAnimated_co_0269cf98,1,local_228);
    }
    _objc_storeStrong(&local_260);
    _objc_storeStrong(&local_228,0);
    _objc_storeStrong(&local_238,0);
    _objc_storeStrong(&local_230,0);
    _objc_storeStrong(local_220,0);
    _objc_storeStrong(&local_158,0);
    _objc_storeStrong(&local_150,0);
    local_148 = 0;
  }
  else {
    local_148 = 1;
  }
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

