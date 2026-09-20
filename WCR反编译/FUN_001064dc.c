// FUN_001064dc @ 001064dc

void FUN_001064dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_70;
  undefined *local_68;
  undefined4 local_60;
  undefined *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_38 = 0;
  _objc_storeStrong(&local_38,param_1);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_2);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_3);
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_50 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_chatRoomAutoKickEnabled_0269ed30);
  uVar1 = local_38;
  puVar5 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
  if (((ulong)puVar3 & 1) == 0) {
    local_60 = 1;
  }
  else {
    puVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_chatRoomAutoKickAllGroups_0269ed38);
    puVar4 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_chatRoomAutoKickSelectedGroups_0269ed40);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_room_allowedByAllGroups_selected_0269ed00,uVar1,
               (ulong)puVar3 & 0xffffffff);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    if (((ulong)puVar5 & 1) == 0) {
      local_60 = 1;
    }
    else {
      puVar3 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineChatRoomKickHelper_026ce2d8,PTR_s_isProtectedMember_inRoom__0269ed48,
                 local_40,local_38);
      puVar5 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
      if (((ulong)puVar3 & 1) == 0) {
        puVar3 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_chatRoomAutoKickKeywords_0269ed50);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_normalizedKeywordsFromText__0269ecb0);
        _objc_retainAutoreleasedReturnValue();
        local_68 = puVar5;
        (*(code *)PTR__objc_release_02578630)(puVar3);
        puVar5 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineChatRoomKickHelper_026ce2d8,
                   PTR_s_firstMatchedKeywordInText_keywor_0269ed58,local_48,local_68);
        _objc_retainAutoreleasedReturnValue();
        local_70 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_length_0269cca0);
        if (puVar5 == (undefined *)0x0) {
          local_60 = 1;
        }
        else {
          puVar3 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineChatRoomKickHelper_026ce2d8,
                     PTR_s_currentUserCanManageRoom__0269ecc0,local_38);
          uVar2 = local_38;
          uVar1 = local_40;
          puVar5 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
          if (((ulong)puVar3 & 1) == 0) {
            local_60 = 1;
          }
          else {
            puVar3 = local_50;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_50,PTR_s_chatRoomAutoKickWindowHours_0269ed60);
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar5,PTR_s_recordAutoKickHitForRoom_user_wi_0269ed68,uVar2,uVar1,puVar3);
            puVar4 = local_50;
            (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_chatRoomAutoKickHitCount_0269ed70);
            puVar3 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
            if ((long)puVar5 < (long)puVar4) {
              local_60 = 1;
            }
            else {
              DAT_028c84a0 = 1;
              local_30 = local_40;
              puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                         &local_30,1);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar3,PTR_s_kickUsers_fromRoom_reason_keywor_0269ed18,puVar4,local_38,
                         &cf_sQ_R_,local_70,puVar5,0);
              (*(code *)PTR__objc_release_02578630)(puVar4);
              DAT_028c84a0 = 0;
              local_60 = 0;
            }
          }
        }
        _objc_storeStrong(&local_70);
        _objc_storeStrong(&local_68,0);
      }
      else {
        local_60 = 1;
      }
    }
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

