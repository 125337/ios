// FUN_0011f468 @ 0011f468

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0011f468(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char *pcVar4;
  cfstringStruct *pcVar5;
  long lVar6;
  cfstringStruct *pcVar7;
  uint local_234;
  char *local_1f0;
  char *local_1e8;
  cfstringStruct *local_160;
  cfstringStruct *local_150;
  cfstringStruct *local_140;
  cfstringStruct *local_138;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  cfstringStruct *local_f0;
  char *local_e8;
  char *local_e0;
  char *local_d8;
  int local_d0;
  long local_c0;
  long local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_2);
  lVar6 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0);
  if ((lVar6 == 0) ||
     (lVar6 = local_c0, (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0),
     lVar6 == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = &cf___;
    local_d0 = 1;
  }
  else {
    pcVar4 = "CContactMgr";
    _objc_getClass();
    FUN_0010f1e0();
    _objc_retainAutoreleasedReturnValue();
    local_d8 = pcVar4;
    if (pcVar4 == (char *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = &cf___;
      local_d0 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_getContactByName__0269d178,local_b8);
      _objc_retainAutoreleasedReturnValue();
      local_e0 = pcVar4;
      if (pcVar4 == (char *)0x0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_b0 = &cf___;
        local_d0 = 1;
      }
      else {
        FUN_0010dca0(pcVar4,&cf_m_nsChatRoomMemList);
        _objc_retainAutoreleasedReturnValue();
        local_e8 = pcVar4;
        _memset(auStack_130,0,0x40);
        pcVar4 = local_e8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_e8,PTR_s_componentsSeparatedByString__0269d3c0,&cf__);
        _objc_retainAutoreleasedReturnValue();
        local_1e8 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_1e8 != (char *)0x0) {
          lVar6 = *local_120;
          local_1f0 = (char *)0x0;
          do {
            do {
              if (*local_120 - lVar6 != 0) {
                _objc_enumerationMutation(*local_120 - lVar6,pcVar4);
              }
              pcVar7 = *(cfstringStruct **)(local_128 + (long)local_1f0 * 8);
              local_f0 = pcVar7;
              FUN_0010ee50();
              _objc_retainAutoreleasedReturnValue();
              local_138 = pcVar7;
              (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_length_0269cca0);
              if (pcVar7 == (cfstringStruct *)0x0) {
                local_d0 = 3;
              }
              else {
                bVar3 = false;
                bVar2 = false;
                bVar1 = false;
                pcVar7 = local_138;
                FUN_00116ae8(local_138,local_b8);
                _objc_retainAutoreleasedReturnValue();
                pcVar5 = pcVar7;
                (*(code *)PTR__objc_msgSend_02578628)();
                local_234 = 1;
                if (((ulong)pcVar5 & 1) == 0) {
                  local_140 = local_138;
                  FUN_001172d8(local_138,local_b8);
                  _objc_retainAutoreleasedReturnValue();
                  bVar3 = true;
                  pcVar5 = local_140;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  local_234 = 1;
                  if (((ulong)pcVar5 & 1) == 0) {
                    local_150 = local_138;
                    FUN_00117c9c();
                    _objc_retainAutoreleasedReturnValue();
                    bVar2 = true;
                    pcVar5 = local_150;
                    (*(code *)PTR__objc_msgSend_02578628)();
                    local_234 = 1;
                    if (((ulong)pcVar5 & 1) == 0) {
                      local_160 = local_138;
                      FUN_00117ed8();
                      _objc_retainAutoreleasedReturnValue();
                      bVar1 = true;
                      pcVar5 = local_160;
                      (*(code *)PTR__objc_msgSend_02578628)();
                      local_234 = (uint)pcVar5;
                    }
                  }
                }
                if (bVar1) {
                  (*(code *)PTR__objc_release_02578630)(local_160);
                }
                if (bVar2) {
                  (*(code *)PTR__objc_release_02578630)(local_150);
                }
                if (bVar3) {
                  (*(code *)PTR__objc_release_02578630)(local_140);
                }
                (*(code *)PTR__objc_release_02578630)(pcVar7);
                pcVar7 = local_138;
                if ((local_234 & 1) == 0) {
                  local_d0 = 0;
                }
                else {
                  (*(code *)PTR__objc_retain_02578638)();
                  local_b0 = pcVar7;
                  local_d0 = 1;
                }
              }
              _objc_storeStrong(&local_138,0);
              if ((local_d0 != 0) && (local_d0 != 3)) goto LAB_0011fc20;
              local_1f0 = local_1f0 + 1;
            } while (local_1f0 < local_1e8);
            local_1e8 = pcVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8
                       ,0x10);
            local_1f0 = (char *)0x0;
          } while (local_1e8 != (char *)0x0);
        }
        local_d0 = 0;
LAB_0011fc20:
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        if (local_d0 == 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_b0 = &cf___;
          local_d0 = 1;
        }
        _objc_storeStrong(&local_e8,0);
      }
      _objc_storeStrong(&local_e0,0);
    }
    _objc_storeStrong(&local_d8,0);
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

