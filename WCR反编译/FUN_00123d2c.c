// FUN_00123d2c @ 00123d2c

void FUN_00123d2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  cfstringStruct *local_270;
  cfstringStruct *local_240;
  ulong local_208;
  ulong local_200;
  cfstringStruct *local_178;
  ulong local_170;
  undefined4 local_164;
  cfstringStruct *local_160;
  ulong local_158;
  undefined1 auStack_150 [8];
  long local_148;
  long *local_140;
  ulong local_110;
  long local_f8;
  long local_f0;
  ulong local_e8;
  undefined8 local_e0;
  long local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  cfstringStruct *local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  local_b8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_b8,param_2);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_3);
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_4);
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_5);
  local_d8 = 0;
  _objc_storeStrong(&local_d8,param_6);
  local_e8 = 0;
  local_e0 = param_7;
  _objc_storeStrong(&local_e8,param_8);
  local_f0 = 0;
  _objc_storeStrong(&local_f0,param_9);
  lVar6 = local_d8;
  FUN_0010ee50();
  _objc_retainAutoreleasedReturnValue();
  local_f8 = lVar6;
  (*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_length_0269cca0);
  if (lVar6 == 0) {
    lVar1 = local_b0;
    FUN_001237d8(local_b0,local_b8);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = local_f8;
    local_f8 = lVar1;
    (*(code *)PTR__objc_release_02578630)(lVar6);
  }
  uVar2 = local_e8;
  (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_count_0269cfe0);
  if (uVar2 == 0) {
    uVar2 = DAT_028c84c0;
    FUN_0012459c(DAT_028c84c0,local_b8,local_c0,local_b0,local_c8,local_d0,local_f8,local_e0);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = DAT_028c84c0;
    local_170 = uVar2;
    FUN_00124c84();
    if ((uVar5 & 1) == 0) {
      local_270 = &cf___;
    }
    else {
      local_270 = local_b8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_178 = local_270;
    FUN_00124db8(local_170,local_b0,local_270);
    lVar6 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_length_0269cca0);
    if (lVar6 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineVoicePackSender_026ce128,PTR_s_sendRepositoryCode_toChatName__0269efa8,
                 local_f0,local_b0);
    }
    _objc_storeStrong(&local_178);
    _objc_storeStrong(&local_170,0);
    local_164 = 0;
  }
  else {
    _memset(auStack_150,0,0x40);
    uVar2 = local_e8;
    (*(code *)PTR__objc_retain_02578638)();
    local_200 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_a8,0x10);
    if (local_200 != 0) {
      lVar6 = *local_140;
      local_208 = 0;
      do {
        do {
          if (*local_140 - lVar6 != 0) {
            _objc_enumerationMutation(*local_140 - lVar6,uVar2);
          }
          local_110 = *(ulong *)(local_148 + local_208 * 8);
          puVar3 = PTR_WCRefineVoicePackSender_026ce128;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineVoicePackSender_026ce128,
                     PTR_s_sendRepositoryCode_toChatName__0269efa8,local_110,local_b0);
          if (((ulong)puVar3 & 1) == 0) {
            uVar5 = local_110;
            FUN_0012459c(local_110,local_b8,local_c0,local_b0,local_c8,local_d0,local_f8,local_e0);
            _objc_retainAutoreleasedReturnValue();
            uVar4 = local_110;
            local_158 = uVar5;
            FUN_00124c84();
            if ((uVar4 & 1) == 0) {
              local_240 = &cf___;
            }
            else {
              local_240 = local_b8;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_160 = local_240;
            FUN_00124db8(local_158,local_b0,local_240);
            _objc_storeStrong(&local_160);
            _objc_storeStrong(&local_158,0);
          }
          local_208 = local_208 + 1;
        } while (local_208 < local_200);
        local_200 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_a8,0x10
                  );
        local_208 = 0;
      } while (local_200 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    local_164 = 1;
  }
  _objc_storeStrong(&local_f8);
  _objc_storeStrong(&local_f0,0);
  _objc_storeStrong(&local_e8,0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

