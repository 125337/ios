// sendAudioAtPath:toUsr: @ 01009500

/* Function Stack Size: 0x20 bytes */

bool WCRefineLinkMediaSender::sendAudioAtPath_toUsr_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined *local_1a0;
  undefined *local_198;
  undefined *local_168 [3];
  ulong local_150;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  ulong local_108;
  undefined *local_100;
  ID local_f8;
  int local_ec;
  long local_e8;
  long local_e0;
  SEL local_d8;
  ID local_d0;
  byte local_c1;
  undefined1 auStack_c0 [128];
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_e0 = 0;
  local_d8 = param_2;
  local_d0 = param_1;
  _objc_storeStrong(&local_e0,param_3);
  local_e8 = 0;
  _objc_storeStrong(&local_e8,param_4);
  lVar4 = local_e0;
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_length_0269cca0);
  if ((lVar4 == 0) ||
     (lVar4 = local_e8, (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_length_0269cca0),
     lVar4 == 0)) {
    local_c1 = 0;
    local_ec = 1;
  }
  else {
    IVar1 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_logicControllerForChat__026ad0a8,local_e8);
    _objc_retainAutoreleasedReturnValue();
    local_40 = &cf_SendFileMessage_withData_;
    local_38 = &cf_SendFileMessage_;
    local_30 = &cf_processInsertedFile_;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_f8 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_40,3
              );
    _objc_retainAutoreleasedReturnValue();
    local_100 = puVar2;
    _memset(auStack_148,0,0x40);
    puVar2 = local_100;
    (*(code *)PTR__objc_retain_02578638)();
    local_198 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_c0,0x10);
    if (local_198 != (undefined *)0x0) {
      lVar4 = *local_138;
      local_1a0 = (undefined *)0x0;
      do {
        do {
          if (*local_138 - lVar4 != 0) {
            _objc_enumerationMutation(*local_138 - lVar4,puVar2);
          }
          uVar5 = *(ulong *)(local_140 + (long)local_1a0 * 8);
          local_108 = uVar5;
          _NSSelectorFromString();
          local_150 = uVar5;
          if ((local_f8 != 0) &&
             (IVar1 = local_f8,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_f8,PTR_s_respondsToSelector__026ca818,uVar5), (IVar1 & 1) != 0)) {
            uVar5 = local_108;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_108,PTR_s_hasSuffix__0269d018,&cf__withData_);
            if ((uVar5 & 1) == 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_f8,local_150,local_e0);
              local_c1 = 1;
              local_ec = 1;
            }
            else {
              puVar3 = PTR__OBJC_CLASS___NSData_026ce1d0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile__0269e0b8,
                         local_e0);
              _objc_retainAutoreleasedReturnValue();
              local_168[0] = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)(local_f8,local_150,local_e0,puVar3);
              local_c1 = 1;
              local_ec = 1;
              _objc_storeStrong(local_168,0);
            }
            goto LAB_010098e8;
          }
          local_1a0 = local_1a0 + 1;
        } while (local_1a0 < local_198);
        local_198 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_c0,
                   0x10);
        local_1a0 = (undefined *)0x0;
      } while (local_198 != (undefined *)0x0);
    }
    local_ec = 0;
LAB_010098e8:
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (local_ec == 0) {
      IVar1 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_d0,PTR_s_sendVoiceAtPath_toUsr__026ada48,local_e0,local_e8);
      local_c1 = (byte)IVar1 & 1;
      local_ec = 1;
    }
    _objc_storeStrong(&local_100);
    _objc_storeStrong(&local_f8,0);
  }
  _objc_storeStrong(&local_e8);
  _objc_storeStrong(&local_e0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_c1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

