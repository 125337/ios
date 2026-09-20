// FUN_000238a8 @ 000238a8

void FUN_000238a8(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  char *pcVar4;
  ulong uVar5;
  ulong local_1a0;
  ulong local_178;
  ulong local_150;
  ulong local_138;
  ulong local_f0;
  ulong local_d8;
  ulong local_98;
  ulong local_88;
  ulong local_78;
  ulong local_70;
  byte local_61;
  ulong local_60;
  byte local_51;
  ulong local_50;
  ulong local_48;
  undefined4 local_40;
  ulong local_30;
  ulong local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  uVar5 = local_30;
  pcVar4 = "CMessageWrap";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,pcVar4);
  uVar3 = local_30;
  if ((uVar5 & 1) == 0) {
    uVar5 = local_30;
    FUN_0001a198(local_30,PTR_s_getReplyingMessage_0269d370);
    _objc_retainAutoreleasedReturnValue();
    local_51 = 0;
    local_61 = 0;
    local_d8 = uVar5;
    if (uVar5 == 0) {
      local_f0 = local_30;
      FUN_0001a198(local_30,PTR_s_replyingMessage_0269d378);
      _objc_retainAutoreleasedReturnValue();
      local_51 = 1;
      local_50 = local_f0;
      if (local_f0 == 0) {
        local_f0 = local_30;
        FUN_0001a198(local_30,PTR_s_replyingMessageWrap_0269d380);
        _objc_retainAutoreleasedReturnValue();
        local_61 = 1;
        local_60 = local_f0;
      }
      local_d8 = local_f0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_d8;
    if ((local_61 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    if ((local_51 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    (*(code *)PTR__objc_release_02578630)(uVar5);
    uVar5 = local_48;
    pcVar4 = "CMessageWrap";
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,pcVar4);
    uVar3 = local_48;
    if ((uVar5 & 1) == 0) {
      uVar5 = local_30;
      FUN_0001a198(local_30,PTR_s_inputToolView_0269d0e8);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = false;
      bVar1 = false;
      local_138 = uVar5;
      if (uVar5 == 0) {
        local_78 = local_30;
        FUN_0001a198(local_30,PTR_s_m_inputToolView_0269d0f0);
        _objc_retainAutoreleasedReturnValue();
        bVar2 = true;
        bVar1 = local_78 == 0;
        local_150 = local_78;
        if (bVar1) {
          local_88 = local_30;
          FUN_0001a198(local_30,PTR_s_toolView_0269d330);
          _objc_retainAutoreleasedReturnValue();
          local_150 = local_88;
        }
        local_138 = local_150;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_70 = local_138;
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_88);
      }
      if (bVar2) {
        (*(code *)PTR__objc_release_02578630)(local_78);
      }
      (*(code *)PTR__objc_release_02578630)(uVar5);
      uVar5 = local_70;
      FUN_0001a198(local_70,PTR_s_replyingMessage_0269d378);
      _objc_retainAutoreleasedReturnValue();
      local_178 = uVar5;
      if (uVar5 == 0) {
        local_98 = local_70;
        FUN_0001a198(local_70,PTR_s_replyingMessageWrap_0269d380);
        _objc_retainAutoreleasedReturnValue();
        local_178 = local_98;
      }
      _objc_storeStrong(&local_48,local_178);
      if (uVar5 == 0) {
        (*(code *)PTR__objc_release_02578630)(local_98);
      }
      (*(code *)PTR__objc_release_02578630)(uVar5);
      uVar5 = local_48;
      pcVar4 = "CMessageWrap";
      _objc_getClass();
      (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,pcVar4);
      if ((uVar5 & 1) == 0) {
        local_1a0 = 0;
      }
      else {
        local_1a0 = local_48;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = local_1a0;
      local_40 = 1;
      _objc_storeStrong(&local_70,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = uVar3;
      local_40 = 1;
    }
    _objc_storeStrong(&local_48,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = uVar3;
    local_40 = 1;
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

