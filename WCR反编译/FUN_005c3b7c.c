// FUN_005c3b7c @ 005c3b7c

void FUN_005c3b7c(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  char *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong local_1f0;
  ulong local_1e8;
  ulong local_1d0;
  char *local_178;
  char *local_170;
  ulong local_168;
  undefined *local_160;
  ulong local_158;
  long local_150;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  long local_108;
  ulong local_100;
  ulong local_f8;
  ulong local_f0;
  undefined4 local_e4;
  char *local_e0;
  char *local_c8;
  long local_c0;
  ulong local_b8;
  char *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_2);
  pcVar1 = "SightDraft";
  _objc_getClass();
  pcVar2 = "WCUtil";
  local_c8 = pcVar1;
  _objc_getClass();
  local_e0 = pcVar2;
  if (((local_c8 == (char *)0x0) || (pcVar2 == (char *)0x0)) ||
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_uploadTaskFromSightDraft__026a54e8)
     , ((ulong)pcVar2 & 1) == 0)) {
    local_b0 = (char *)0x0;
    local_e4 = 1;
  }
  else {
    uVar3 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_contentObj_026a5990);
    _objc_retainAutoreleasedReturnValue();
    local_f0 = uVar3;
    FUN_0059d260(uVar3,&cf_mediaList);
    _objc_retainAutoreleasedReturnValue();
    local_100 = 0;
    local_f8 = uVar3;
    _memset(auStack_148,0,0x40);
    uVar3 = local_f8;
    puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    if ((uVar3 & 1) == 0) {
      local_1d0 = *(ulong *)PTR____NSArray0___02578280;
    }
    else {
      local_1d0 = local_f8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_1e8 = local_1d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_1d0,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,0x10
              );
    if (local_1e8 != 0) {
      lVar7 = *local_138;
      local_1f0 = 0;
      do {
        do {
          if (*local_138 - lVar7 != 0) {
            _objc_enumerationMutation(*local_138 - lVar7,local_1d0);
          }
          lVar8 = *(long *)(local_140 + local_1f0 * 8);
          local_108 = lVar8;
          FUN_0059d260(lVar8,&cf_type);
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar8;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(lVar8);
          local_150 = lVar5;
          if (((lVar5 == 2) || (lVar5 == 3)) || (lVar5 == 5)) {
            _objc_storeStrong(0,&local_100,local_108);
            local_e4 = 2;
            goto LAB_005c3f74;
          }
          local_1f0 = local_1f0 + 1;
        } while (local_1f0 < local_1e8);
        local_1e8 = local_1d0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1d0,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,
                   0x10);
        local_1f0 = 0;
      } while (local_1e8 != 0);
    }
    local_e4 = 0;
LAB_005c3f74:
    (*(code *)PTR__objc_release_02578630)(local_1d0);
    if (local_100 == 0) {
      local_b0 = (char *)0x0;
      local_e4 = 1;
    }
    else {
      uVar3 = local_100;
      FUN_005c5c10();
      _objc_retainAutoreleasedReturnValue();
      local_158 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0);
      if (uVar3 == 0) {
        local_b0 = (char *)0x0;
        local_e4 = 1;
      }
      else {
        puVar4 = PTR__OBJC_CLASS___NSURL_026ce328;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_158);
        _objc_retainAutoreleasedReturnValue();
        local_168 = 0;
        uVar3 = local_100;
        local_160 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_100,PTR_s_respondsToSelector__026ca818,PTR_s_thumbImage_026a5a60);
        if ((uVar3 & 1) != 0) {
          uVar6 = local_100;
          (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_thumbImage_026a5a60);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = local_168;
          local_168 = uVar6;
          (*(code *)PTR__objc_release_02578630)(uVar3);
        }
        local_170 = (char *)0x0;
        pcVar1 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c8,PTR_s_respondsToSelector__026ca818,
                   PTR_s_draftWithVideoURL_thumbImage__026a5978);
        if (((ulong)pcVar1 & 1) == 0) {
          pcVar1 = local_c8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_c8,PTR_s_respondsToSelector__026ca818,PTR_s_draftWithVideoURL__026a5980);
          if (((ulong)pcVar1 & 1) != 0) {
            pcVar2 = local_c8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_c8,PTR_s_draftWithVideoURL__026a5980,local_160);
            _objc_retainAutoreleasedReturnValue();
            pcVar1 = local_170;
            local_170 = pcVar2;
            (*(code *)PTR__objc_release_02578630)(pcVar1);
          }
        }
        else {
          pcVar2 = local_c8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_c8,PTR_s_draftWithVideoURL_thumbImage__026a5978,local_160,local_168);
          _objc_retainAutoreleasedReturnValue();
          pcVar1 = local_170;
          local_170 = pcVar2;
          (*(code *)PTR__objc_release_02578630)(pcVar1);
        }
        if (local_170 == (char *)0x0) {
          local_b0 = (char *)0x0;
          local_e4 = 1;
        }
        else {
          pcVar1 = local_e0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_e0,PTR_s_uploadTaskFromSightDraft__026a54e8,local_170);
          _objc_retainAutoreleasedReturnValue();
          local_178 = pcVar1;
          if (pcVar1 != (char *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_setIsPrivate__026a5510,0);
            (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_setIsSyncToWeibo__026a54f8,0);
            (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_setIsSyncToFacebook__026a5500,0);
            (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_setWithUserList__026a5a68,0);
            (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_setPostSource__026a54f0,1);
            lVar7 = local_c0;
            (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0);
            if (lVar7 != 0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_178,PTR_s_setContentDesc__026a4a08,local_c0);
            }
          }
          pcVar1 = local_178;
          (*(code *)PTR__objc_retain_02578638)();
          local_b0 = pcVar1;
          local_e4 = 1;
          _objc_storeStrong(&local_178,0);
        }
        _objc_storeStrong(&local_170);
        _objc_storeStrong(&local_168,0);
        _objc_storeStrong(&local_160,0);
      }
      _objc_storeStrong(&local_158,0);
    }
    _objc_storeStrong(&local_100);
    _objc_storeStrong(&local_f8,0);
    _objc_storeStrong(&local_f0,0);
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_b0);
  return;
}

