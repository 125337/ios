// FUN_003d857c @ 003d857c

byte FUN_003d857c(undefined8 param_1,long *param_2,byte *param_3)

{
  undefined *puVar1;
  long lVar2;
  byte local_6c;
  byte local_49;
  long local_48;
  undefined *local_40;
  undefined4 local_34;
  byte *local_30;
  long *local_28;
  long local_20;
  bool local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_30 = param_3;
  local_28 = param_2;
  if (local_20 == 0) {
    if (param_2 != (long *)0x0) {
      *param_2 = 0;
    }
    if (param_3 != (byte *)0x0) {
      *param_3 = 0;
    }
    local_11 = false;
    local_34 = 1;
  }
  else {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_homeGroupingHideGroupBadgeEnable_026a3230);
    if (((ulong)puVar1 & 1) == 0) {
      lVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_unreadCount_026a3080);
      puVar1 = local_40;
      local_48 = lVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_homeGroupingUnreadRedDotEnabled_026a3238)
      ;
      local_6c = 0;
      if (((ulong)puVar1 & 1) == 0) {
        lVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_hasRedDotUnread_026a3088);
        local_6c = (byte)lVar2;
      }
      local_49 = local_6c & 1;
      FUN_003db9fc(local_48,local_49,&local_48,&local_49);
      if (local_28 != (long *)0x0) {
        *local_28 = local_48;
      }
      if (local_30 != (byte *)0x0) {
        *local_30 = local_49 & 1;
      }
      local_11 = local_48 != 0;
    }
    else {
      if (local_28 != (long *)0x0) {
        *local_28 = 0;
      }
      if (local_30 != (byte *)0x0) {
        *local_30 = 0;
      }
      local_11 = false;
    }
    local_34 = 1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

