// FUN_001044cc @ 001044cc

void FUN_001044cc(double param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  double dVar5;
  uint local_ec;
  undefined *local_80;
  byte local_71;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  double local_50;
  uint local_48;
  int local_38;
  int local_34;
  undefined8 local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  if (((DAT_028c84a0 & 1) != 0) || (local_28 == 0)) {
    local_34 = 1;
    goto LAB_00104ae4;
  }
  uVar1 = local_28;
  FUN_00104bb0();
  local_38 = (int)uVar1;
  if ((local_38 != 1) && (local_38 != 0x31)) {
    local_34 = 1;
    goto LAB_00104ae4;
  }
  uVar1 = local_28;
  FUN_00104d18(0);
  local_48 = (uint)uVar1;
  puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_50 = param_1;
  if ((local_48 != 0) && (dVar5 = (double)NEON_ucvtf((ulong)local_48), 90.0 < param_1 - dVar5)) {
    local_34 = 1;
    goto LAB_00104ae4;
  }
  puVar2 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineChatRoomKickHelper_026ce2d8,PTR_s_sessionIDFromWrap_sessionHint__0269ec60,
             local_28,local_30);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
  local_58 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineChatRoomKickHelper_026ce2d8,PTR_s_isChatRoomID__0269ec68,puVar2);
  if (((ulong)puVar3 & 1) == 0) {
    local_34 = 1;
  }
  else {
    puVar2 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineChatRoomKickHelper_026ce2d8,PTR_s_currentUserWxid_0269ec70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
    local_60 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineChatRoomKickHelper_026ce2d8,PTR_s_senderIDFromWrap_roomId__0269ec78,
               local_28,local_58);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
    local_68 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineChatRoomKickHelper_026ce2d8,PTR_s_plainTextFromWrap__0269ec80,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_70 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_length_0269cca0);
    if (puVar2 == (undefined *)0x0) {
      local_34 = 1;
    }
    else {
      puVar2 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
      local_ec = 0;
      if (puVar2 != (undefined *)0x0) {
        puVar2 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_isEqualToString__0269ccc8,local_60);
        local_ec = (uint)puVar2;
      }
      local_71 = (byte)local_ec & 1;
      if ((local_ec & 1) == 0) {
        puVar2 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
        if (puVar2 != (undefined *)0x0) {
          uVar1 = local_28;
          FUN_001050f4(puVar2,local_28,local_58);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar1;
          FUN_00104e80();
          (*(code *)PTR__objc_release_02578630)(uVar1);
          if ((uVar4 & 1) == 0) {
            local_34 = 1;
            goto LAB_00104aa8;
          }
          FUN_001064dc(local_58,local_68,local_70);
        }
      }
      else {
        puVar2 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineChatRoomKickHelper_026ce2d8,PTR_s_atUserListFromWrap__0269ec88,
                   local_28);
        _objc_retainAutoreleasedReturnValue();
        local_80 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_count_0269cfe0);
        if (puVar2 == (undefined *)0x0) {
          local_34 = 1;
        }
        else {
          uVar1 = local_28;
          FUN_001050f4(local_28,local_58);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar1;
          FUN_00104e80();
          (*(code *)PTR__objc_release_02578630)(uVar1);
          if ((uVar4 & 1) == 0) {
            local_34 = 1;
          }
          else {
            FUN_00105420(local_58,local_60,local_28,local_70);
            local_34 = 0;
          }
        }
        _objc_storeStrong(&local_80,0);
        if (local_34 != 0) goto LAB_00104aa8;
      }
      local_34 = 0;
    }
LAB_00104aa8:
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_58,0);
LAB_00104ae4:
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

