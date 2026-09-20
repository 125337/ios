// FUN_014f20cc @ 014f20cc

byte FUN_014f20cc(undefined8 param_1,undefined8 param_2,byte param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte local_a0;
  byte local_9c;
  undefined *local_60;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  undefined4 local_3c;
  long local_38;
  byte local_29;
  long local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  lVar1 = local_28;
  local_29 = param_3;
  FUN_014dfa54();
  _objc_retainAutoreleasedReturnValue();
  local_38 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if ((lVar1 == 0) || (local_20 == 0)) {
    local_11 = 0;
    local_3c = 1;
    goto LAB_014f2464;
  }
  uVar2 = local_20;
  FUN_014efbac(local_20,&cf_m_nsFromUsr);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_014dfa54();
  _objc_retainAutoreleasedReturnValue();
  local_48 = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar2 = local_20;
  FUN_014efbac(local_20,&cf_m_nsToUsr);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_014dfa54();
  _objc_retainAutoreleasedReturnValue();
  local_50 = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar2 = local_20;
  FUN_014efbac(local_20,&cf_m_nsChatName);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_014dfa54();
  _objc_retainAutoreleasedReturnValue();
  local_58 = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar2 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isEqualToString__0269ccc8,local_38);
  if (((uVar2 & 1) == 0) &&
     ((uVar2 = local_50,
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isEqualToString__0269ccc8,local_38),
      (uVar2 & 1) == 0 &&
      (uVar2 = local_58,
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_isEqualToString__0269ccc8,local_38),
      (uVar2 & 1) == 0)))) {
    if ((local_29 & 1) == 0) {
      puVar4 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineChatRoomKickHelper_026ce2d8,PTR_s_currentUserWxid_0269ec70);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      FUN_014dfa54();
      _objc_retainAutoreleasedReturnValue();
      local_60 = puVar5;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar4 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
      if (puVar4 == (undefined *)0x0) {
        local_11 = 0;
      }
      else {
        uVar2 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isEqualToString__0269ccc8,local_60);
        if ((uVar2 & 1) == 0) {
LAB_014f23b0:
          uVar2 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isEqualToString__0269ccc8,local_38);
          local_a0 = 0;
          if ((uVar2 & 1) != 0) {
            uVar2 = local_50;
            (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isEqualToString__0269ccc8,local_60)
            ;
            local_a0 = (byte)uVar2;
          }
          local_9c = local_a0;
        }
        else {
          uVar2 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isEqualToString__0269ccc8,local_38);
          local_9c = 1;
          if ((uVar2 & 1) == 0) goto LAB_014f23b0;
        }
        local_11 = local_9c & 1;
      }
      local_3c = 1;
      _objc_storeStrong(&local_60,0);
    }
    else {
      local_11 = 0;
      local_3c = 1;
    }
  }
  else {
    local_11 = 1;
    local_3c = 1;
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
LAB_014f2464:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

