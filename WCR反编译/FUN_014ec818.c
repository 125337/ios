// FUN_014ec818 @ 014ec818

void FUN_014ec818(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined *local_50;
  long local_48;
  undefined4 local_3c;
  long local_38;
  undefined8 local_30;
  long local_28;
  ulong local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  puVar1 = PTR_WCRefineMessageBlockSupport_026ce0f8;
  local_38 = param_1;
  local_30 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineMessageBlockSupport_026ce0f8,PTR_s_isChatRoomID__0269ec68,local_20);
  if (((ulong)puVar1 & 1) == 0) {
    local_3c = 1;
  }
  else {
    uVar2 = local_20;
    FUN_014e78c0();
    if ((uVar2 & 1) == 0) {
      lVar3 = local_28;
      FUN_014e3f08(local_28,*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
      local_48 = lVar3;
      if (lVar3 == 0) {
        local_3c = 1;
      }
      else {
        puVar1 = PTR_WCRefineSessionStatsResult_026ced38;
        _objc_alloc_init();
        local_50 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setUsr__026af828,local_20);
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setIsGroup__026af830,1);
        uVar2 = local_20;
        FUN_014e7d88(local_20,local_20);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setDisplayName__026ae2f8);
        (*(code *)PTR__objc_release_02578630)(uVar2);
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setVisitCount__026af7f0,local_48);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_setTypeCounts__026af838,
                   *(undefined8 *)PTR____NSDictionary0___02578288);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_setTypeOrder__026af840,*(undefined8 *)PTR____NSArray0___02578280);
        FUN_014e8810(*(undefined8 *)(param_1 + 0x20),local_50,0x32,1);
        _objc_storeStrong(&local_50,0);
        local_3c = 0;
      }
    }
    else {
      local_3c = 1;
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return;
}

