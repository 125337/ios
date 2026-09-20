// FUN_0066b2cc @ 0066b2cc

void FUN_0066b2cc(double param_1,undefined8 param_2)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  long lVar5;
  ulong uVar6;
  cfstringStruct *local_378;
  cfstringStruct *local_360;
  uint local_320;
  cfstringStruct **local_310;
  cfstringStruct **local_300;
  uint local_29c;
  cfstringStruct *local_270;
  cfstringStruct *local_268;
  cfstringStruct *local_220;
  cfstringStruct *local_210;
  cfstringStruct *local_1e8;
  byte local_19c;
  cfstringStruct *local_180;
  cfstringStruct *local_178;
  undefined1 local_16a;
  byte local_169;
  cfstringStruct *local_168;
  byte local_159;
  cfstringStruct *local_158;
  undefined1 auStack_150 [8];
  long local_148;
  long *local_140;
  ulong local_110;
  byte local_101;
  cfstringStruct *local_100;
  byte local_f1;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  byte local_c7;
  byte local_c6;
  byte local_c5;
  undefined4 local_b4;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_b0,param_2);
  if (local_b0 == (cfstringStruct *)0x0) {
    local_b4 = 1;
  }
  else {
    FUN_006668c8(local_b0);
    FUN_0066c02c(local_b0);
    pcVar4 = local_b0;
    FUN_00662c28();
    local_c5 = (byte)pcVar4;
    pcVar4 = local_b0;
    FUN_00662c98();
    local_c6 = (byte)pcVar4;
    local_19c = 1;
    if ((local_c5 & 1) == 0) {
      local_19c = local_c6;
    }
    local_c7 = local_19c & 1;
    pcVar4 = local_b0;
    FUN_00662d08();
    _objc_retainAutoreleasedReturnValue();
    local_d0 = pcVar4;
    if ((local_c7 & 1) != 0) {
      FUN_00662ff8(pcVar4);
    }
    pcVar4 = local_b0;
    FUN_00664010();
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_b0;
    local_d8 = pcVar4;
    FUN_00655d64(local_b0,"_m_textForGreenLabel");
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_e0 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((ulong)pcVar2 & 1) == 0) {
      _objc_storeStrong(&local_e0,&cf___);
    }
    pcVar4 = local_d0;
    FUN_00663124(local_d0,local_b0);
    _objc_retainAutoreleasedReturnValue();
    local_1e8 = pcVar4;
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_1e8 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_e8 = local_1e8;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    pcVar4 = local_e0;
    FUN_006638c8();
    if (((ulong)pcVar4 & 1) != 0) {
      _objc_storeStrong(&local_e0,&cf___);
    }
    pcVar4 = local_d8;
    FUN_006638c8();
    if (((ulong)pcVar4 & 1) != 0) {
      _objc_storeStrong(&local_d8,&cf___);
    }
    pcVar4 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0);
    if (pcVar4 == (cfstringStruct *)0x0) {
      pcVar4 = local_e0;
      FUN_00665300();
      if (((ulong)pcVar4 & 1) == 0) {
        local_220 = local_e0;
      }
      else {
        local_220 = &cf___;
      }
      local_210 = local_220;
    }
    else {
      local_210 = local_d8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_f0 = local_210;
    pcVar4 = local_d0;
    FUN_0066641c();
    local_f1 = (byte)pcVar4;
    if ((((ulong)pcVar4 & 1) == 0) &&
       (pcVar4 = local_f0, (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_length_0269cca0),
       pcVar4 != (cfstringStruct *)0x0)) {
      pcVar2 = local_f0;
      FUN_00666f68(pcVar4);
      _objc_retainAutoreleasedReturnValue();
      local_100 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_count_0269cfe0);
      local_101 = pcVar2 != (cfstringStruct *)0x0;
      _memset(auStack_150,0,0x40);
      pcVar4 = local_100;
      (*(code *)PTR__objc_retain_02578638)();
      local_268 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_a8,0x10)
      ;
      if (local_268 != (cfstringStruct *)0x0) {
        lVar5 = *local_140;
        local_270 = (cfstringStruct *)0x0;
        do {
          do {
            if (*local_140 - lVar5 != 0) {
              _objc_enumerationMutation(*local_140 - lVar5,pcVar4);
            }
            uVar6 = *(ulong *)(local_148 + (long)local_270 * 8);
            local_110 = uVar6;
            FUN_006677a8();
            if ((uVar6 & 1) == 0) {
              local_101 = 0;
              local_b4 = 2;
              goto LAB_0066b888;
            }
            local_270 = (cfstringStruct *)((long)&local_270->field0_0x0 + 1);
          } while (local_270 < local_268);
          local_268 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_a8,
                     0x10);
          local_270 = (cfstringStruct *)0x0;
        } while (local_268 != (cfstringStruct *)0x0);
      }
      local_b4 = 0;
LAB_0066b888:
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      local_159 = 0;
      local_29c = 1;
      if ((local_101 & 1) == 0) {
        pcVar4 = local_f0;
        FUN_006653e8();
        _objc_retainAutoreleasedReturnValue();
        local_159 = 1;
        local_158 = pcVar4;
        FUN_006677a8();
        local_29c = (uint)pcVar4;
      }
      if ((local_159 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_158);
      }
      if ((local_29c & 1) != 0) {
        _objc_setAssociatedObject(local_b0,&DAT_028cbc80,0,3);
        _objc_storeStrong(&local_f0);
        _objc_storeStrong(&local_d8,&cf___);
      }
      _objc_storeStrong(&local_100,0);
    }
    pcVar4 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_length_0269cca0);
    if ((pcVar4 != (cfstringStruct *)0x0) &&
       (pcVar2 = local_f0, FUN_00665300(pcVar4), ((ulong)pcVar2 & 1) == 0)) {
      FUN_0066426c(local_b0,local_f0,&cf_apply);
    }
    pcVar4 = local_f0;
    FUN_006627f0();
    if (((ulong)pcVar4 & 1) != 0) {
      _objc_storeStrong(&local_f0,&cf___);
    }
    pcVar4 = local_f0;
    FUN_00669558(local_f0,0,0,local_f1 & 1);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_e0;
    local_168 = pcVar4;
    FUN_00665300();
    local_169 = (byte)pcVar2;
    if (((local_c7 & 1) == 0) && (((ulong)pcVar2 & 1) == 0)) {
      local_b4 = 1;
    }
    else {
      local_16a = true;
      if (((local_c7 & 1) == 0) && (local_16a = true, ((ulong)pcVar2 & 1) == 0)) {
        pcVar4 = local_168;
        (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_length_0269cca0);
        local_16a = false;
        if (pcVar4 != (cfstringStruct *)0x0) {
          pcVar4 = local_f0;
          (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_length_0269cca0);
          local_16a = pcVar4 != (cfstringStruct *)0x0;
        }
      }
      if ((((bool)local_16a == false) &&
          (pcVar4 = local_168,
          (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_length_0269cca0),
          pcVar4 == (cfstringStruct *)0x0)) && ((local_169 & 1) == 0)) {
        local_b4 = 1;
      }
      else {
        if ((local_c7 & 1) == 0) {
          pcVar4 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0);
          if (pcVar4 == (cfstringStruct *)0x0) {
            local_310 = &local_168;
          }
          else {
            local_310 = &local_d8;
          }
          local_300 = local_310;
        }
        else {
          local_300 = &local_168;
        }
        pcVar4 = *local_300;
        (*(code *)PTR__objc_retain_02578638)();
        local_178 = pcVar4;
        if (((local_c7 & 1) == 0) && (FUN_006627f0(), ((ulong)pcVar4 & 1) != 0)) {
          _objc_storeStrong(&local_178,&cf___);
        }
        bVar1 = false;
        local_320 = 0;
        if (((local_c7 & 1) == 0) && (local_320 = 0, (local_f1 & 1) == 0)) {
          local_180 = local_178;
          FUN_006653e8();
          _objc_retainAutoreleasedReturnValue();
          bVar1 = true;
          pcVar4 = local_180;
          FUN_006677a8();
          local_320 = (uint)pcVar4;
        }
        if (bVar1) {
          (*(code *)PTR__objc_release_02578630)(local_180);
        }
        if ((local_320 & 1) != 0) {
          _objc_storeStrong(&local_178,&cf___);
        }
        pcVar4 = local_178;
        FUN_006638c8();
        if ((((ulong)pcVar4 & 1) != 0) &&
           (pcVar4 = local_e8, FUN_00663614(), ((ulong)pcVar4 & 1) != 0)) {
          _objc_storeStrong(&local_178,&cf___);
        }
        FUN_0066b094(local_178);
        if (local_178 == (cfstringStruct *)0x0) {
          local_360 = &cf___;
        }
        else {
          local_360 = local_178;
        }
        FUN_00663c28(local_b0,PTR_s_setM_textForGreenLabel__026a62f8,local_360);
        if (local_178 == (cfstringStruct *)0x0) {
          local_378 = &cf___;
        }
        else {
          local_378 = local_178;
        }
        FUN_00663d9c(local_b0,"_m_textForGreenLabel",local_378);
        FUN_0066c2ac((float)param_1,local_b0,PTR_s_setM_widthForGreenLabelText__026a6378);
        FUN_0066c3f8((float)param_1,local_b0,"_m_widthForGreenLabelText");
        _objc_storeStrong(&local_178,0);
        local_b4 = 0;
      }
    }
    _objc_storeStrong(&local_168);
    _objc_storeStrong(&local_f0,0);
    _objc_storeStrong(&local_e8,0);
    _objc_storeStrong(&local_e0,0);
    _objc_storeStrong(&local_d8,0);
    _objc_storeStrong(&local_d0,0);
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

