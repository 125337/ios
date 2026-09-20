// FUN_00107188 @ 00107188

void FUN_00107188(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined4 local_58;
  undefined *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_38 = 0;
  _objc_storeStrong(&local_38,param_1);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_2);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_48 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_chatRoomAutoKickEnabled_0269ed30);
  if ((((ulong)puVar2 & 1) == 0) ||
     (puVar3 = local_48,
     (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_chatRoomAutoKickJoinNameEnabled_0269ed88),
     uVar1 = local_38, puVar2 = PTR_WCRefineChatRoomKickHelper_026ce2d8, ((ulong)puVar3 & 1) == 0))
  {
    local_58 = 1;
  }
  else {
    puVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_chatRoomAutoKickAllGroups_0269ed38);
    puVar4 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_chatRoomAutoKickSelectedGroups_0269ed40);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_room_allowedByAllGroups_selected_0269ed00,uVar1,
               (ulong)puVar3 & 0xffffffff);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    if (((ulong)puVar2 & 1) == 0) {
      local_58 = 1;
    }
    else {
      puVar3 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineChatRoomKickHelper_026ce2d8,PTR_s_isProtectedMember_inRoom__0269ed48,
                 local_40,local_38);
      puVar2 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
      if (((ulong)puVar3 & 1) == 0) {
        puVar3 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_chatRoomAutoKickJoinNameKeywords_0269ed90);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_normalizedKeywordsFromText__0269ecb0);
        _objc_retainAutoreleasedReturnValue();
        local_60 = puVar2;
        (*(code *)PTR__objc_release_02578630)(puVar3);
        puVar2 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_count_0269cfe0);
        if (puVar2 == (undefined *)0x0) {
          local_58 = 1;
        }
        else {
          puVar2 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineChatRoomKickHelper_026ce2d8,
                     PTR_s_displayNameForUser_inRoom__0269ecd0,local_40,local_38);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_68 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_____);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
          local_70 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineChatRoomKickHelper_026ce2d8,
                     PTR_s_firstMatchedKeywordInText_keywor_0269ed58,puVar3,local_60);
          _objc_retainAutoreleasedReturnValue();
          local_78 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_length_0269cca0);
          if (puVar2 == (undefined *)0x0) {
            local_58 = 1;
          }
          else {
            puVar3 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineChatRoomKickHelper_026ce2d8,
                       PTR_s_currentUserCanManageRoom__0269ecc0,local_38);
            puVar2 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
            if (((ulong)puVar3 & 1) == 0) {
              local_58 = 1;
            }
            else {
              DAT_028c84a0 = 1;
              local_30 = local_40;
              puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                         &local_30,1);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar2,PTR_s_kickUsers_fromRoom_reason_keywor_0269ed18,puVar3,local_38,
                         &cf_eQ_5fy,local_78,1,0);
              (*(code *)PTR__objc_release_02578630)(puVar3);
              DAT_028c84a0 = 0;
              local_58 = 0;
            }
          }
          _objc_storeStrong(&local_78);
          _objc_storeStrong(&local_70,0);
          _objc_storeStrong(&local_68,0);
        }
        _objc_storeStrong(&local_60,0);
      }
      else {
        local_58 = 1;
      }
    }
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

