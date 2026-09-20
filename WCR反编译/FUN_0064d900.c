// FUN_0064d900 @ 0064d900

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0064d900(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong local_2a8;
  ulong local_2a0;
  long local_1a8;
  undefined1 auStack_1a0 [8];
  long local_198;
  long *local_190;
  long local_160;
  ulong local_158;
  ulong local_150;
  undefined1 local_141;
  ulong local_140;
  ulong local_138;
  byte local_129;
  long local_128;
  ulong local_120;
  ulong local_118;
  ulong local_110;
  undefined4 local_104;
  undefined *local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  code *local_f0;
  undefined *local_e8;
  ulong local_e0 [3];
  ulong local_c8;
  undefined1 auStack_c0 [128];
  ulong local_40 [4];
  
  local_40[3] = *(ulong *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_1);
  puVar2 = PTR__OBJC_CLASS___NSThread_026ce0a8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
  puVar4 = PTR___dispatch_main_q_02578680;
  if (((ulong)puVar2 & 1) == 0) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = local_c8;
    local_100 = PTR___NSConcreteStackBlock_02578660;
    local_f8 = 0xc2000000;
    local_f4 = 0;
    local_f0 = FUN_00650550;
    local_e8 = &DAT_02578c20;
    (*(code *)PTR__objc_retain_02578638)();
    local_e0[0] = uVar5;
    _dispatch_async(puVar4,&local_100);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    local_104 = 1;
    _objc_storeStrong(local_e0,0);
  }
  else if (local_c8 == 0) {
    local_104 = 1;
  }
  else {
    uVar5 = local_c8;
    FUN_00650304();
    _objc_retainAutoreleasedReturnValue();
    local_110 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isTracking_0269ddf0);
    if ((((uVar5 & 1) == 0) &&
        (uVar5 = local_110,
        (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_isDragging_0269ddf8), (uVar5 & 1) == 0
        )) && (uVar5 = local_110,
              (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_isDecelerating_0269e888),
              (uVar5 & 1) == 0)) {
      _objc_setAssociatedObject(local_c8,&DAT_028cbc1c,0,1);
      uVar3 = local_c8;
      _objc_getAssociatedObject(local_c8,&DAT_028cbc1d);
      _objc_retainAutoreleasedReturnValue();
      local_118 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_boolValue_026ca540);
      uVar5 = local_c8;
      if ((uVar3 & 1) == 0) {
        puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(uVar5,&DAT_028cbc1d,puVar4,1);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        uVar5 = local_c8;
        FUN_00650580();
        uVar1 = (uint)uVar5;
        FUN_0064cd38();
        if ((uVar1 & 1) == 0) {
          FUN_00650b98(local_c8,0,1);
          FUN_00650b98(local_c8,1,1);
          FUN_006511a0(local_c8);
          uVar5 = local_c8;
          puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
          _objc_retainAutoreleasedReturnValue();
          _objc_setAssociatedObject(uVar5,&DAT_028cbc1d,puVar4,1);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          local_104 = 1;
        }
        else {
          uVar5 = local_c8;
          FUN_0064f9ac();
          _objc_retainAutoreleasedReturnValue();
          local_128 = 0;
          local_129 = 0;
          local_40[1] = _UNK_02324238;
          local_40[0] = _DAT_02324230;
          local_120 = uVar5;
          for (local_138 = 0; local_138 < 2; local_138 = local_138 + 1) {
            uVar5 = local_40[local_138];
            local_140 = uVar5;
            FUN_0064d8b4();
            if ((uVar5 & 1) == 0) {
              FUN_00650b98(local_c8,local_140,1);
            }
            else {
              FUN_0064e414(local_c8,local_140);
              uVar5 = local_c8;
              FUN_006512f4(local_c8,local_140);
              local_141 = (undefined1)uVar5;
              uVar5 = local_c8;
              FUN_0064f7f4(local_c8,local_140);
              _objc_retainAutoreleasedReturnValue();
              local_150 = uVar5;
              (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_count_0269cfe0);
              uVar3 = local_120;
              local_158 = uVar5;
              (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_length_0269cca0);
              uVar1 = 0;
              if (uVar3 != 0) {
                _memset(auStack_1a0,0,0x40);
                uVar5 = local_150;
                (*(code *)PTR__objc_retain_02578638)();
                local_2a0 = uVar5;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,
                           auStack_c0,0x10);
                if (local_2a0 != 0) {
                  lVar6 = *local_190;
                  local_2a8 = 0;
                  do {
                    do {
                      if (*local_190 - lVar6 != 0) {
                        _objc_enumerationMutation(*local_190 - lVar6,uVar5);
                      }
                      lVar7 = *(long *)(local_198 + local_2a8 * 8);
                      local_160 = lVar7;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (lVar7,PTR_s_objectForKeyedSubscript__0269d098,&cf_msg);
                      _objc_retainAutoreleasedReturnValue();
                      local_1a8 = lVar7;
                      if (lVar7 != 0) {
                        FUN_00651de8(local_140,local_120,lVar7);
                      }
                      _objc_storeStrong(&local_1a8,0);
                      local_2a8 = local_2a8 + 1;
                    } while (local_2a8 < local_2a0);
                    local_2a0 = uVar5;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,
                               auStack_c0,0x10);
                    local_2a8 = 0;
                  } while (local_2a0 != 0);
                }
                (*(code *)PTR__objc_release_02578630)(uVar5);
                uVar5 = local_140;
                FUN_006527b0();
                uVar1 = (uint)uVar5;
                if ((uVar5 & 1) != 0) {
                  uVar5 = local_140;
                  FUN_006527fc(local_140,local_120,0);
                  uVar1 = (uint)uVar5;
                }
              }
              if (local_158 == 0) {
                FUN_00650b98(local_c8,local_140,1);
                local_104 = 5;
              }
              else {
                FUN_00652a90();
                if ((uVar1 & 1) == 0) {
                  if ((local_129 & 1) == 0) {
                    FUN_00652b4c(local_c8,local_140,local_158,0);
                    local_129 = 1;
                  }
                }
                else {
                  FUN_00652b4c(local_c8,local_140,local_158,local_128);
                  local_128 = local_128 + 1;
                }
                local_104 = 0;
              }
              _objc_storeStrong(&local_150,0);
            }
          }
          if (((local_129 & 1) == 0) && (local_128 == 0)) {
            FUN_006511a0(local_c8);
          }
          _objc_storeStrong(&local_120,0);
          uVar5 = local_c8;
          puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
          _objc_retainAutoreleasedReturnValue();
          _objc_setAssociatedObject(uVar5,&DAT_028cbc1d,puVar4,1);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          local_104 = 0;
        }
      }
      else {
        local_104 = 1;
      }
      _objc_storeStrong(&local_118,0);
    }
    else {
      uVar5 = local_c8;
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(uVar5,&DAT_028cbc1c,puVar4,1);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      local_104 = 1;
    }
    _objc_storeStrong(&local_110,0);
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_40[3] == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_40[3]);
}

