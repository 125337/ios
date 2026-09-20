// FUN_0039bc40 @ 0039bc40

byte FUN_0039bc40(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_30;
  long local_28;
  ulong local_20;
  bool local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  if ((((local_20 == 0) || (local_28 == 0)) || (local_30 == 0)) ||
     ((uVar1 = local_20,
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_targetSection_026a2d68), param_4 == uVar1
      || (uVar1 = local_30,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_30,PTR_s_respondsToSelector__026ca818,
                    PTR_s_wcrGrouping_tableView_numberOfRo_026a28c8), (uVar1 & 1) == 0)))) {
    local_11 = false;
  }
  else {
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_wcrGrouping_tableView_numberOfRo_026a28c8,local_28,param_4);
    if ((long)uVar1 < 0) {
      local_11 = false;
    }
    else {
      uVar2 = local_20;
      FUN_0039b3c0(local_20,param_4);
      FUN_0039b464(uVar1,local_20,param_4);
      uVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_pinnedAreaTakenOver_026a2e90);
      local_11 = uVar1 == 0;
      if (((uVar3 & 1) == 0) && ((uVar2 & 1) == 0)) {
        local_11 = false;
      }
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

