// FUN_0157a0e8 @ 0157a0e8

void FUN_0157a0e8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  long lVar4;
  ulong uVar5;
  char *local_180;
  char *local_178;
  undefined *local_158;
  undefined4 local_14c;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  ulong local_108;
  char *local_100;
  long local_f8;
  char *local_f0;
  undefined *local_e8;
  byte local_d9;
  undefined *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  puVar1 = &DAT_028e38f0;
  _objc_loadWeakRetained();
  local_b8 = puVar1;
  FUN_0157a984();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = DAT_028e38f8;
  local_c0 = puVar1;
  FUN_01528c84();
  _objc_retainAutoreleasedReturnValue();
  local_d0 = (undefined *)0x0;
  local_c8 = puVar2;
  FUN_0152b7ec();
  _objc_retainAutoreleasedReturnValue();
  local_d9 = 0;
  local_d8 = puVar2;
  if ((local_c0 != (undefined *)0x0) &&
     (puVar1 = local_b8,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_b8,PTR_s_respondsToSelector__026ca818,
                PTR_s_getMessageChatContactByMessageWr_026b0750), ((ulong)puVar1 & 1) != 0)) {
    puVar2 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b8,PTR_s_getMessageChatContactByMessageWr_026b0750,local_c0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_d0;
    local_d0 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (local_d0 != (undefined *)0x0) {
      local_d9 = 1;
    }
  }
  if (((local_d0 == (undefined *)0x0) && (local_c0 != (undefined *)0x0)) &&
     (puVar1 = local_b8,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_b8,PTR_s_respondsToSelector__026ca818,
                PTR_s_chatContactForMessageWrap__026b0758), ((ulong)puVar1 & 1) != 0)) {
    puVar2 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b8,PTR_s_chatContactForMessageWrap__026b0758,local_c0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_d0;
    local_d0 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (local_d0 != (undefined *)0x0) {
      local_d9 = 1;
    }
  }
  if (((local_d0 == (undefined *)0x0) && (local_c0 != (undefined *)0x0)) &&
     ((local_d8 != (undefined *)0x0 &&
      (puVar1 = local_d8,
      (*(code *)PTR__objc_msgSend_02578628)
                (local_d8,PTR_s_respondsToSelector__026ca818,
                 PTR_s_getMessageChatContactByMessageWr_026b0750), ((ulong)puVar1 & 1) != 0)))) {
    puVar2 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d8,PTR_s_getMessageChatContactByMessageWr_026b0750,local_c0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_d0;
    local_d0 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (local_d0 != (undefined *)0x0) {
      local_d9 = 1;
    }
  }
  if ((local_d0 == (undefined *)0x0) &&
     (puVar1 = local_c8, (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0),
     puVar1 != (undefined *)0x0)) {
    local_e8 = (undefined *)0x0;
    puVar1 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b8,PTR_s_respondsToSelector__026ca818,PTR_s_GetContact_0269d2c0);
    if (((ulong)puVar1 & 1) != 0) {
      puVar2 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_GetContact_0269d2c0);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = local_e8;
      local_e8 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    pcVar3 = "CContact";
    _objc_getClass();
    local_f0 = pcVar3;
    if (((local_e8 == (undefined *)0x0) && (local_d8 != (undefined *)0x0)) &&
       (puVar1 = local_d8,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_d8,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178),
       ((ulong)puVar1 & 1) != 0)) {
      lVar4 = DAT_028e3900;
      FUN_01528c84();
      _objc_retainAutoreleasedReturnValue();
      local_f8 = lVar4;
      (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_length_0269cca0);
      if (lVar4 != 0) {
        puVar2 = local_d8;
        (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_getContactByName__0269d178,local_f8);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = local_e8;
        local_e8 = puVar2;
        (*(code *)PTR__objc_release_02578630)(puVar1);
      }
      _objc_storeStrong(&local_f8,0);
    }
    if (((local_f0 != (char *)0x0) && (local_e8 != (undefined *)0x0)) &&
       (pcVar3 = local_f0,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_f0,PTR_s_respondsToSelector__026ca818,PTR_s_getChatRoomMember__026b0760),
       ((ulong)pcVar3 & 1) != 0)) {
      pcVar3 = local_f0;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_getChatRoomMember__026b0760,local_e8);
      _objc_retainAutoreleasedReturnValue();
      local_100 = pcVar3;
      _memset(auStack_148,0,0x40);
      pcVar3 = local_100;
      (*(code *)PTR__objc_retain_02578638)();
      local_178 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,0x10)
      ;
      if (local_178 != (char *)0x0) {
        lVar4 = *local_138;
        local_180 = (char *)0x0;
        do {
          do {
            if (*local_138 - lVar4 != 0) {
              _objc_enumerationMutation(*local_138 - lVar4,pcVar3);
            }
            uVar5 = *(ulong *)(local_140 + (long)local_180 * 8);
            local_108 = uVar5;
            FUN_0157abb4(uVar5,local_c8);
            if ((uVar5 & 1) != 0) {
              _objc_storeStrong(&local_d0,local_108);
              local_14c = 2;
              goto LAB_0157a65c;
            }
            local_180 = local_180 + 1;
          } while (local_180 < local_178);
          local_178 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,
                     0x10);
          local_180 = (char *)0x0;
        } while (local_178 != (char *)0x0);
      }
      local_14c = 0;
LAB_0157a65c:
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      _objc_storeStrong(&local_100,0);
    }
    _objc_storeStrong(&local_e8,0);
  }
  if (((local_d0 == (undefined *)0x0) && (local_d8 != (undefined *)0x0)) &&
     ((puVar1 = local_c8, (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0),
      puVar1 != (undefined *)0x0 &&
      (puVar1 = local_d8,
      (*(code *)PTR__objc_msgSend_02578628)
                (local_d8,PTR_s_respondsToSelector__026ca818,
                 PTR_s_getContactForSearchByName__0269f828), ((ulong)puVar1 & 1) != 0)))) {
    puVar2 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d8,PTR_s_getContactForSearchByName__0269f828,local_c8);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_d0;
    local_d0 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  uVar5 = local_b0;
  if (local_d0 == (undefined *)0x0) {
    pcVar3 = "CContact";
    _objc_getClass("CContact");
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,pcVar3);
    if ((uVar5 & 1) != 0) {
      _objc_storeStrong(&local_d0,local_b0);
    }
  }
  if (((((local_d9 & 1) == 0) && (local_d0 != (undefined *)0x0)) &&
      (puVar1 = local_c8, (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0),
      puVar1 != (undefined *)0x0)) &&
     (puVar2 = local_d0, FUN_0157abb4(puVar1,local_d0,local_c8), ((ulong)puVar2 & 1) == 0)) {
    _objc_storeStrong(&local_d0,0);
  }
  if ((local_d0 == (undefined *)0x0) &&
     (puVar1 = local_c8, (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0),
     puVar1 != (undefined *)0x0)) {
    puVar2 = local_c8;
    FUN_0155771c(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_d0;
    local_d0 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  if ((local_d0 != (undefined *)0x0) &&
     (puVar1 = local_c8, (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0),
     puVar1 != (undefined *)0x0)) {
    puVar2 = local_c8;
    FUN_0155771c(puVar1);
    _objc_retainAutoreleasedReturnValue();
    local_158 = puVar2;
    FUN_0156471c();
    puVar1 = local_d0;
    FUN_0156471c();
    if ((long)puVar2 - (long)puVar1 != 0 && (long)puVar1 <= (long)puVar2) {
      _objc_storeStrong((long)puVar2 - (long)puVar1,&local_d0,local_158);
    }
    _objc_storeStrong(&local_158,0);
  }
  puVar1 = local_d0;
  (*(code *)PTR__objc_retain_02578638)();
  local_14c = 1;
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,puVar1);
  return;
}

