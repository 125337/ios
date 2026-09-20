// FUN_006b3914 @ 006b3914

byte FUN_006b3914(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  int local_6c;
  undefined8 local_40;
  ulong local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  bool local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_30 = 0;
  local_28 = param_2;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  uVar1 = local_30;
  FUN_006b20e0(local_30,local_38);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_WCRefinePrivateFriendManager_026ce160;
  local_40 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_shouldConcealUsername__0269fef8,uVar1);
  if (((ulong)puVar2 & 1) == 0) {
    if (DAT_028cc058 == (code *)0x0) {
      local_6c = 1;
    }
    else {
      uVar1 = local_20;
      (*DAT_028cc058)(local_20,local_28,local_30,local_38);
      local_6c = (int)uVar1;
    }
    local_11 = local_6c != 0;
  }
  else {
    uVar3 = local_38;
    FUN_006b2384();
    if ((uVar3 & 1) == 0) {
      FUN_006b2660(local_40);
      puVar2 = PTR_WCRefinePrivateFriendManager_026ce160;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefinePrivateFriendManager_026ce160,
                 PTR_s_shouldPresentForegroundDisguiseN_026a6868);
      if (((ulong)puVar2 & 1) != 0) {
        FUN_006b3d90(local_20);
      }
    }
    local_11 = false;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

