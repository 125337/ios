// wcr_noteLifeActiveWrap:createTime: @ 014edf24

/* Function Stack Size: 0x1c bytes */

void WCRefineSessionStatsEngine::wcr_noteLifeActiveWrap_createTime_
               (ID param_1,SEL param_2,ID param_3,unsigned_int param_4)

{
  unsigned_int uVar1;
  undefined8 uVar2;
  ID IVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *local_40;
  undefined *local_38;
  unsigned_int local_2c;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_2c = param_4;
  if (param_4 != 0) {
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_jobActiveDays_026afb90);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
    uVar4 = (ulong)local_2c;
    FUN_014ee1e0(uVar4);
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_numberWithInteger__0269e080,uVar4);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_addObject__0269d180);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(IVar3);
  }
  uVar1 = local_2c;
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_jobLatestCreateTime_026afb98);
  if ((uint)IVar3 < uVar1) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setJobLatestCreateTime__026afa30,local_2c);
  }
  uVar2 = local_28;
  puVar5 = PTR_WCRefineMessageBlockSupport_026ce0f8;
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_jobUsr_026afba0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar5,PTR_s_senderIDForMessageWrap_sessionID_026a41f8,uVar2);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar5;
  (*(code *)PTR__objc_release_02578630)(IVar3);
  puVar5 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineChatRoomKickHelper_026ce2d8,PTR_s_currentUserWxid_0269ec70);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = local_38;
  local_40 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (puVar6 != (undefined *)0x0) {
    puVar5 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    if (puVar5 != (undefined *)0x0) {
      puVar5 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,local_40);
      uVar1 = local_2c;
      if (((ulong)puVar5 & 1) != 0) {
        IVar3 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_jobSelfLatestCreateTime_026afba8);
        if ((uint)IVar3 < uVar1) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_18,PTR_s_setJobSelfLatestCreateTime__026af9e8,local_2c);
        }
      }
    }
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return;
}

