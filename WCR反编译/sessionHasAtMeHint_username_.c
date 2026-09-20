// sessionHasAtMeHint:username: @ 0151ff54

/* Function Stack Size: 0x20 bytes */

bool WCRefineTelegramGroupingStore::sessionHasAtMeHint_username_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  byte local_4a;
  byte local_49;
  undefined *local_48;
  undefined4 local_3c;
  ulong local_38;
  long local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  uVar1 = local_38;
  FUN_01520194();
  if ((uVar1 & 1) == 0) {
    local_11 = 0;
    local_3c = 1;
  }
  else {
    lVar2 = local_30;
    FUN_01520288(local_30,&cf_m_uUnReadCount);
    if (lVar2 < 1) {
      local_11 = 0;
      local_3c = 1;
    }
    else {
      puVar3 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      local_48 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_homeGroupingAtMeGroupIncludeAtMe_026a2e50);
      local_49 = (byte)puVar3;
      puVar4 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_homeGroupingAtMeGroupIncludeAtAl_026a2e58);
      local_4a = (byte)puVar4;
      if ((((ulong)puVar3 & 1) == 0) && (((ulong)puVar4 & 1) == 0)) {
        local_49 = 1;
        local_4a = 1;
      }
      lVar2 = local_30;
      FUN_01520288(local_30,&cf_m_uAtMeCount);
      lVar5 = local_30;
      FUN_01520288(local_30,&cf_mainAtMeCount);
      lVar6 = local_30;
      FUN_01520288(local_30,&cf_m_uAtAllCount);
      lVar7 = local_30;
      FUN_01520288(local_30,&cf_mainAtAllCount);
      if (((local_49 & 1) == 0) || (local_11 = true, lVar2 + lVar5 < 1)) {
        local_11 = (local_4a & 1) != 0 && 0 < lVar6 + lVar7;
      }
      local_3c = 1;
      _objc_storeStrong(&local_48,0);
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

