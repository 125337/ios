// FUN_00392c04 @ 00392c04

long FUN_00392c04(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long local_58;
  long local_38;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  if ((local_20 == 0) || (local_28 == 0)) {
    local_18 = -1;
  }
  else {
    local_38 = 0;
    lVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_wcrGrouping_numberOfSectionsInTa_026a28c0,local_28);
    for (local_58 = 0; local_58 < lVar1; local_58 = local_58 + 1) {
      lVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_wcrGrouping_tableView_numberOfRo_026a28c8,local_28,local_58);
      local_38 = local_38 + lVar2;
    }
    local_18 = local_38;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_18;
}

