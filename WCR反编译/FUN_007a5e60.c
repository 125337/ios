// FUN_007a5e60 @ 007a5e60

byte FUN_007a5e60(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  char *pcVar4;
  char *pcVar5;
  char *local_80;
  char *local_78;
  char *local_70;
  char *local_68;
  char *local_60;
  byte local_51;
  undefined *local_50;
  undefined1 *local_48;
  undefined4 local_40;
  undefined1 *local_30;
  byte local_21;
  
  puVar2 = PTR_WCRefineTelegramGroupingStore_026ce5a8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineTelegramGroupingStore_026ce5a8,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isFilteringActive_026a30c8);
  if (((ulong)puVar2 & 1) == 0) {
    local_21 = 0;
    local_40 = 1;
  }
  else {
    puVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_selectedTab_026a2a78);
    _objc_retainAutoreleasedReturnValue();
    local_51 = 0;
    local_48 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_hidePinned_026a30d0);
    bVar1 = false;
    if (((ulong)puVar3 & 1) == 0) {
      puVar2 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      local_51 = 1;
      local_50 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = false;
      if (((ulong)puVar2 & 1) == 0) {
        puVar3 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_kind_026a27e8);
        bVar1 = false;
        if (puVar3 != (undefined1 *)((long)&MACH_HEADER.cputype + 1)) {
          puVar3 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_kind_026a27e8);
          bVar1 = puVar3 != (undefined1 *)((long)&MACH_HEADER.magic + 2);
        }
      }
    }
    if ((local_51 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    if (bVar1) {
      local_21 = 0;
      local_40 = 1;
    }
    else {
      pcVar4 = "MMContext";
      _objc_getClass();
      pcVar5 = "MainSessionMgr";
      local_60 = pcVar4;
      _objc_getClass();
      pcVar4 = local_60;
      local_68 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_respondsToSelector__026ca818,PTR_s_currentContext_0269d5f8);
      if ((((ulong)pcVar4 & 1) == 0) || (local_68 == (char *)0x0)) {
        local_21 = 0;
        local_40 = 1;
      }
      else {
        pcVar4 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_currentContext_0269d5f8);
        _objc_retainAutoreleasedReturnValue();
        local_70 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar4,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170);
        if (((ulong)pcVar4 & 1) == 0) {
          local_21 = 0;
          local_40 = 1;
        }
        else {
          pcVar4 = local_70;
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_getService__0269d170,local_68);
          _objc_retainAutoreleasedReturnValue();
          local_78 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar4,PTR_s_respondsToSelector__026ca818,PTR_s_allTopSessions_026a8100);
          if (((ulong)pcVar4 & 1) == 0) {
            local_21 = 0;
            local_40 = 1;
          }
          else {
            pcVar4 = local_78;
            (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_allTopSessions_026a8100);
            _objc_retainAutoreleasedReturnValue();
            puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
            local_80 = pcVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
            local_21 = true;
            if (((ulong)pcVar4 & 1) != 0) {
              pcVar4 = local_80;
              (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_count_0269cfe0);
              local_21 = pcVar4 == (char *)0x0;
            }
            local_40 = 1;
            _objc_storeStrong(&local_80,0);
          }
          _objc_storeStrong(&local_78,0);
        }
        _objc_storeStrong(&local_70,0);
      }
    }
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

