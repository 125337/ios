// FUN_014e7bb0 @ 014e7bb0

void FUN_014e7bb0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 local_78;
  undefined *local_40;
  long local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  puVar1 = PTR_WCRefineSessionStatsResult_026ced38;
  local_38 = param_1;
  local_30 = param_4;
  _objc_alloc_init();
  local_40 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setUsr__026af828,local_20);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setIsGroup__026af830,0);
  uVar2 = local_20;
  FUN_014e7d88(local_20,local_20);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setDisplayName__026ae2f8);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_unsignedIntegerValue_026cabb8);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setCommonGroupCount__026af818,uVar2);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_setTypeCounts__026af838,*(undefined8 *)PTR____NSDictionary0___02578288);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_setTypeOrder__026af840,*(undefined8 *)PTR____NSArray0___02578280);
  if (*(long *)(param_1 + 0x28) == 0) {
    local_78 = 0x14;
  }
  else {
    local_78 = *(undefined8 *)(param_1 + 0x28);
  }
  FUN_014e8180(*(undefined8 *)(param_1 + 0x20),local_40,local_78);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return;
}

