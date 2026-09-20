// FUN_01afb824 @ 01afb824

void FUN_01afb824(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *local_210;
  undefined *local_208;
  cfstringStruct *local_1d0;
  cfstringStruct *local_1c8;
  cfstringStruct *local_1c0;
  cfstringStruct *local_1b8;
  cfstringStruct *local_1b0 [4];
  undefined8 local_190;
  undefined1 auStack_188 [8];
  long local_180;
  long *local_178;
  undefined8 local_148;
  cfstringStruct *local_140;
  cfstringStruct *local_138;
  undefined4 local_12c;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_128 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_128,param_1);
  pcVar1 = local_128;
  (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_120 = &cf___;
    local_12c = 1;
  }
  else {
    pcVar1 = (cfstringStruct *)PTR_WCRefineGroupDataProvider_026ce540;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineGroupDataProvider_026ce540,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_138 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    if (local_138 == (cfstringStruct *)0x0) {
      pcVar1 = local_128;
      FUN_01b02e60();
      _objc_retainAutoreleasedReturnValue();
      local_140 = pcVar1;
      if (pcVar1 != (cfstringStruct *)0x0) {
        pcVar2 = (cfstringStruct *)PTR_WCRefineGroupDataProvider_026ce540;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineGroupDataProvider_026ce540,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        pcVar1 = local_138;
        local_138 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
      _objc_storeStrong(&local_140,0);
    }
    if (local_138 != (cfstringStruct *)0x0) {
      _memset(auStack_188,0,0x40);
      local_b8 = &cf_makeTextForNameLabel;
      local_b0 = &cf_updateDataFieldForUI;
      puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_b8
                 ,2);
      _objc_retainAutoreleasedReturnValue();
      local_208 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_208 != (undefined *)0x0) {
        lVar5 = *local_178;
        local_210 = (undefined *)0x0;
        do {
          do {
            if (*local_178 - lVar5 != 0) {
              _objc_enumerationMutation(*local_178 - lVar5,puVar4);
            }
            uVar6 = *(undefined8 *)(local_180 + (long)local_210 * 8);
            local_148 = uVar6;
            _NSSelectorFromString();
            pcVar1 = local_138;
            local_190 = uVar6;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_138,PTR_s_respondsToSelector__026ca818,uVar6);
            if (((ulong)pcVar1 & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_138,local_190);
            }
            local_210 = local_210 + 1;
          } while (local_210 < local_208);
          local_208 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_188,auStack_a8,
                     0x10);
          local_210 = (undefined *)0x0;
        } while (local_208 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
    pcVar1 = local_138;
    local_c8 = &cf_m_textForNameLabel;
    local_c0 = &cf_textForNameLabel;
    puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c8,2
              );
    _objc_retainAutoreleasedReturnValue();
    FUN_01b02a20();
    _objc_retainAutoreleasedReturnValue();
    local_1b0[0] = pcVar1;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    pcVar1 = local_1b0[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_1b0[0],PTR_s_length_0269cca0);
    if ((pcVar1 == (cfstringStruct *)0x0) ||
       (pcVar2 = local_1b0[0], FUN_01af8544(pcVar1,local_1b0[0],local_128), pcVar1 = local_1b0[0],
       ((ulong)pcVar2 & 1) != 0)) {
      pcVar1 = local_128;
      FUN_01b02770();
      _objc_retainAutoreleasedReturnValue();
      local_e8 = &cf_m_nsRemark;
      local_e0 = &cf_m_nsRemarkName;
      local_d8 = &cf_getRemark;
      local_d0 = &cf_getRemarkName;
      puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_1b8 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_e8
                 ,4);
      _objc_retainAutoreleasedReturnValue();
      FUN_01b02a20();
      _objc_retainAutoreleasedReturnValue();
      local_1c0 = pcVar1;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      pcVar1 = local_1c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_length_0269cca0);
      if ((pcVar1 == (cfstringStruct *)0x0) ||
         (pcVar2 = local_1c0, FUN_01af8544(pcVar1,local_1c0,local_128), pcVar1 = local_1c0,
         ((ulong)pcVar2 & 1) != 0)) {
        pcVar1 = local_1b8;
        local_f8 = &cf_getContactDisplayName;
        local_f0 = &cf_getDisplayName;
        puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_f8,2);
        _objc_retainAutoreleasedReturnValue();
        FUN_01b02a20();
        _objc_retainAutoreleasedReturnValue();
        local_1c8 = pcVar1;
        (*(code *)PTR__objc_release_02578630)(puVar4);
        pcVar1 = local_1c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_length_0269cca0);
        if ((pcVar1 == (cfstringStruct *)0x0) ||
           (pcVar2 = local_1c8, FUN_01af8544(pcVar1,local_1c8,local_128), pcVar1 = local_1c8,
           ((ulong)pcVar2 & 1) != 0)) {
          pcVar1 = local_1b8;
          local_118 = &cf_m_nsNickName;
          local_110 = &cf_nickname;
          local_108 = &cf_getNickname;
          local_100 = &cf_getChatRoomName;
          puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                     &local_118,4);
          _objc_retainAutoreleasedReturnValue();
          FUN_01b02a20();
          _objc_retainAutoreleasedReturnValue();
          local_1d0 = pcVar1;
          (*(code *)PTR__objc_release_02578630)(puVar4);
          pcVar1 = local_1d0;
          (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_length_0269cca0);
          if ((pcVar1 == (cfstringStruct *)0x0) ||
             (pcVar2 = local_1d0, FUN_01af8544(pcVar1,local_1d0,local_128), pcVar1 = local_1d0,
             ((ulong)pcVar2 & 1) != 0)) {
            pcVar2 = local_1b0[0];
            (*(code *)PTR__objc_msgSend_02578628)(local_1b0[0],PTR_s_length_0269cca0);
            pcVar1 = local_1b0[0];
            if (pcVar2 == (cfstringStruct *)0x0) {
              pcVar2 = local_1c8;
              (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_length_0269cca0);
              pcVar1 = local_1c8;
              if (pcVar2 == (cfstringStruct *)0x0) {
                pcVar2 = local_1d0;
                (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_length_0269cca0);
                local_120 = local_128;
                pcVar1 = local_1d0;
                if (pcVar2 == (cfstringStruct *)0x0) {
                  (*(code *)PTR__objc_retain_02578638)();
                }
                else {
                  (*(code *)PTR__objc_retain_02578638)();
                  local_120 = pcVar1;
                }
              }
              else {
                (*(code *)PTR__objc_retain_02578638)();
                local_120 = pcVar1;
              }
            }
            else {
              (*(code *)PTR__objc_retain_02578638)();
              local_120 = pcVar1;
            }
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_120 = pcVar1;
          }
          local_12c = 1;
          _objc_storeStrong(&local_1d0,0);
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_120 = pcVar1;
          local_12c = 1;
        }
        _objc_storeStrong(&local_1c8,0);
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_120 = pcVar1;
        local_12c = 1;
      }
      _objc_storeStrong(&local_1c0);
      _objc_storeStrong(&local_1b8,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_120 = pcVar1;
      local_12c = 1;
    }
    _objc_storeStrong(local_1b0);
    _objc_storeStrong(&local_138,0);
  }
  _objc_storeStrong(&local_128,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_120);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

