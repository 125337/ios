// FUN_00f26448 @ 00f26448

void FUN_00f26448(undefined8 param_1)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  char *pcVar5;
  undefined *local_1b0;
  undefined *local_1a8;
  char *local_148;
  undefined1 auStack_140 [8];
  long local_138;
  long *local_130;
  char *local_100;
  char *local_f8;
  char *local_f0;
  char *local_e8;
  int local_dc;
  char *local_d8;
  undefined *local_d0;
  char *local_c8;
  char *local_c0;
  char *local_b8;
  char *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = (char *)0x0;
  _objc_storeStrong(&local_b8,param_1);
  pcVar1 = "VoIPReceiverViewController";
  _objc_getClass();
  pcVar5 = "VoipUIManager";
  local_c0 = pcVar1;
  FUN_00f27d14();
  _objc_retainAutoreleasedReturnValue();
  local_d0 = PTR_s_m_videoVoipReceiverViewControlle_026abec8;
  local_c8 = pcVar5;
  if ((pcVar5 != (char *)0x0) &&
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar5,PTR_s_respondsToSelector__026ca818,
                 PTR_s_m_videoVoipReceiverViewControlle_026abec8), ((ulong)pcVar5 & 1) != 0)) {
    pcVar1 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,local_d0);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = pcVar1;
    if ((local_c0 == (char *)0x0) ||
       ((pcVar1 == (char *)0x0 ||
        ((*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,local_c0),
        pcVar5 = local_d8, ((ulong)pcVar1 & 1) == 0)))) {
      local_dc = 0;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = pcVar5;
      local_dc = 1;
    }
    _objc_storeStrong(&local_d8,0);
    if (local_dc != 0) goto LAB_00f269f0;
  }
  pcVar5 = local_b8;
  FUN_00f292c8();
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_b8;
  local_e8 = pcVar5;
  if (pcVar5 == (char *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((ulong)pcVar1 & 1) != 0) {
      pcVar1 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_window_026cabf0);
      _objc_retainAutoreleasedReturnValue();
      local_f0 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_rootViewController_026ca820);
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = pcVar1;
      FUN_00f2941c();
      _objc_retainAutoreleasedReturnValue();
      local_f8 = pcVar5;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      pcVar1 = local_f8;
      if (local_f8 == (char *)0x0) {
        pcVar5 = local_f0;
        FUN_00f292c8();
        _objc_retainAutoreleasedReturnValue();
        pcVar1 = local_e8;
        local_e8 = pcVar5;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
        pcVar1 = local_e8;
        if (local_e8 == (char *)0x0) {
          local_dc = 0;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_b0 = pcVar1;
          local_dc = 1;
        }
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_b0 = pcVar1;
        local_dc = 1;
      }
      _objc_storeStrong(&local_f8);
      _objc_storeStrong(&local_f0,0);
      if (local_dc != 0) goto LAB_00f269e0;
    }
    _memset(auStack_140,0,0x40);
    puVar2 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_1a8 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,0x10);
    if (local_1a8 != (undefined *)0x0) {
      lVar4 = *local_130;
      local_1b0 = (undefined *)0x0;
      do {
        do {
          if (*local_130 - lVar4 != 0) {
            _objc_enumerationMutation(*local_130 - lVar4,puVar3);
          }
          pcVar5 = *(char **)(local_138 + (long)local_1b0 * 8);
          local_100 = pcVar5;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_rootViewController_026ca820);
          _objc_retainAutoreleasedReturnValue();
          pcVar1 = pcVar5;
          FUN_00f2941c();
          _objc_retainAutoreleasedReturnValue();
          local_148 = pcVar1;
          (*(code *)PTR__objc_release_02578630)(pcVar5);
          pcVar1 = local_148;
          if (local_148 == (char *)0x0) {
            pcVar5 = local_100;
            FUN_00f292c8();
            _objc_retainAutoreleasedReturnValue();
            pcVar1 = local_148;
            local_148 = pcVar5;
            (*(code *)PTR__objc_release_02578630)(pcVar1);
            pcVar1 = local_148;
            if (local_148 == (char *)0x0) {
              local_dc = 0;
            }
            else {
              (*(code *)PTR__objc_retain_02578638)();
              local_b0 = pcVar1;
              local_dc = 1;
            }
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_b0 = pcVar1;
            local_dc = 1;
          }
          _objc_storeStrong(&local_148,0);
          if (local_dc != 0) goto LAB_00f269b0;
          local_1b0 = local_1b0 + 1;
        } while (local_1b0 < local_1a8);
        local_1a8 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,
                   0x10);
        local_1b0 = (undefined *)0x0;
      } while (local_1a8 != (undefined *)0x0);
    }
    local_dc = 0;
LAB_00f269b0:
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (local_dc == 0) {
      local_b0 = (char *)0x0;
      local_dc = 1;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_dc = 1;
    local_b0 = pcVar5;
  }
LAB_00f269e0:
  _objc_storeStrong(&local_e8,0);
LAB_00f269f0:
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

