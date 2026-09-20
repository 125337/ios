// FUN_003b5374 @ 003b5374

/* WARNING: Restarted to delay deadcode elimination for space: stack */

long FUN_003b5374(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 uVar5;
  ulong local_1d0;
  ulong local_1c0;
  ulong local_188;
  ulong local_178;
  long local_160;
  long local_140;
  bool local_f9;
  ulong local_f8;
  ulong local_f0;
  bool local_e1;
  ulong local_e0;
  ulong local_d8;
  int local_d0;
  undefined1 local_cb;
  undefined1 local_ca;
  bool local_c9;
  ulong local_c8;
  ulong local_c0;
  bool local_b1;
  ulong local_b0;
  ulong local_a8;
  byte local_99;
  long local_98;
  byte local_89;
  long local_88;
  long local_80;
  byte local_71;
  long local_70;
  byte local_61;
  long local_60;
  long local_58;
  undefined8 local_50;
  ulong local_48;
  ulong local_40;
  long local_38;
  long local_30;
  long local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  lVar2 = local_30;
  local_50 = param_5;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_username_026a2238);
  _objc_retainAutoreleasedReturnValue();
  local_61 = 0;
  local_71 = 0;
  local_140 = lVar2;
  if (lVar2 == 0) {
    local_140 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_session_0269d000);
    _objc_retainAutoreleasedReturnValue();
    local_61 = 1;
    local_60 = local_140;
    FUN_00366324();
    _objc_retainAutoreleasedReturnValue();
    local_70 = local_140;
  }
  local_71 = lVar2 == 0;
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = local_140;
  if ((local_71 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_70);
  }
  if ((local_61 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  (*(code *)PTR__objc_release_02578630)(lVar2);
  lVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_username_026a2238);
  _objc_retainAutoreleasedReturnValue();
  local_89 = 0;
  local_99 = 0;
  local_160 = lVar2;
  if (lVar2 == 0) {
    local_160 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_session_0269d000);
    _objc_retainAutoreleasedReturnValue();
    local_89 = 1;
    local_88 = local_160;
    FUN_00366324();
    _objc_retainAutoreleasedReturnValue();
    local_98 = local_160;
  }
  local_99 = lVar2 == 0;
  (*(code *)PTR__objc_retain_02578638)();
  local_80 = local_160;
  if ((local_99 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_98);
  }
  if ((local_89 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_88);
  }
  (*(code *)PTR__objc_release_02578630)(lVar2);
  uVar3 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_count_0269cfe0);
  if (uVar3 != 0) {
    lVar2 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
    local_b1 = false;
    if (lVar2 == 0) {
      local_178 = 0;
    }
    else {
      local_178 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_objectForKeyedSubscript__0269d098,local_58);
      _objc_retainAutoreleasedReturnValue();
      local_b0 = local_178;
    }
    local_b1 = lVar2 != 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_a8 = local_178;
    if ((local_b1 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_b0);
    }
    lVar2 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0);
    local_c9 = false;
    if (lVar2 == 0) {
      local_188 = 0;
    }
    else {
      local_188 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_objectForKeyedSubscript__0269d098,local_80);
      _objc_retainAutoreleasedReturnValue();
      local_c8 = local_188;
    }
    local_c9 = lVar2 != 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_c0 = local_188;
    if ((local_c9 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_c8);
    }
    local_ca = local_a8 != 0;
    local_cb = local_c0 != 0;
    if (local_ca == local_cb) {
      if (((bool)local_ca) && ((bool)local_cb)) {
        uVar3 = local_a8;
        (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_unsignedIntegerValue_026cabb8);
        uVar4 = local_c0;
        (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_unsignedIntegerValue_026cabb8);
        if (uVar3 != uVar4) {
          uVar3 = local_a8;
          (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_unsignedIntegerValue_026cabb8);
          uVar4 = local_c0;
          (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_unsignedIntegerValue_026cabb8);
          local_28 = 1;
          if (uVar3 < uVar4) {
            local_28 = -1;
          }
          uVar5 = 1;
          local_d0 = 1;
          goto LAB_003b5958;
        }
      }
      uVar5 = 0;
      local_d0 = 0;
    }
    else {
      uVar5 = 1;
      local_28 = 1;
      if ((bool)local_ca) {
        local_28 = -1;
      }
      local_d0 = 1;
    }
LAB_003b5958:
    _objc_storeStrong(uVar5,&local_c0);
    _objc_storeStrong(&local_a8,0);
    if (local_d0 != 0) goto LAB_003b5c80;
  }
  lVar2 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
  local_e1 = false;
  if (lVar2 == 0) {
    local_1c0 = 0;
  }
  else {
    local_1c0 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_objectForKeyedSubscript__0269d098,local_58)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_e0 = local_1c0;
  }
  local_e1 = lVar2 != 0;
  (*(code *)PTR__objc_retain_02578638)();
  local_d8 = local_1c0;
  if ((local_e1 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_e0);
  }
  lVar2 = local_80;
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    local_1d0 = 0;
  }
  else {
    local_1d0 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_objectForKeyedSubscript__0269d098,local_80)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_f8 = local_1d0;
  }
  local_f9 = lVar2 != 0;
  (*(code *)PTR__objc_retain_02578638)();
  local_f0 = local_1d0;
  if (local_f9) {
    (*(code *)PTR__objc_release_02578630)(local_f8);
  }
  bVar1 = local_d8 != 0;
  if (bVar1 == (local_f0 != 0)) {
    if ((bVar1) && (local_f0 != 0)) {
      uVar3 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_unsignedIntegerValue_026cabb8);
      uVar4 = local_f0;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_unsignedIntegerValue_026cabb8);
      if (uVar3 != uVar4) {
        uVar3 = local_d8;
        (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_unsignedIntegerValue_026cabb8);
        uVar4 = local_f0;
        (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_unsignedIntegerValue_026cabb8);
        local_28 = 1;
        if (uVar3 < uVar4) {
          local_28 = -1;
        }
        goto LAB_003b5c60;
      }
    }
    lVar2 = local_30;
    FUN_003b5d74(local_30,local_38,local_50);
    local_28 = lVar2;
  }
  else {
    local_28 = 1;
    if (bVar1) {
      local_28 = -1;
    }
  }
LAB_003b5c60:
  local_d0 = 1;
  _objc_storeStrong(&local_f0);
  _objc_storeStrong(&local_d8,0);
LAB_003b5c80:
  _objc_storeStrong(&local_80);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_28;
}

