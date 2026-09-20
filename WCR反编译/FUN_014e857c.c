// FUN_014e857c @ 014e857c

void FUN_014e857c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 local_88;
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
  if ((((ulong)puVar1 & 1) == 0) && (uVar2 = local_20, FUN_014e76b8(), (uVar2 & 1) == 0)) {
    puVar1 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_isOfficialAccountOrBrandUserName_0269d4e8,local_20)
    ;
    if (((ulong)puVar1 & 1) == 0) {
      uVar2 = local_20;
      FUN_014e78c0();
      if ((uVar2 & 1) == 0) {
        lVar3 = local_28;
        FUN_014e3f08(local_28,*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34));
        local_48 = lVar3;
        if (lVar3 == 0) {
          local_3c = 1;
        }
        else {
          puVar1 = PTR_WCRefineSessionStatsResult_026ced38;
          _objc_alloc_init();
          local_50 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setUsr__026af828,local_20);
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setIsGroup__026af830,0);
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
                    (local_50,PTR_s_setTypeOrder__026af840,*(undefined8 *)PTR____NSArray0___02578280
                    );
          if (*(long *)(param_1 + 0x28) == 0) {
            local_88 = 0x14;
          }
          else {
            local_88 = *(undefined8 *)(param_1 + 0x28);
          }
          FUN_014e8810(*(undefined8 *)(param_1 + 0x20),local_50,local_88,1);
          _objc_storeStrong(&local_50,0);
          local_3c = 0;
        }
      }
      else {
        local_3c = 1;
      }
    }
    else {
      local_3c = 1;
    }
  }
  else {
    local_3c = 1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return;
}

