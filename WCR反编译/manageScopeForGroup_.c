// manageScopeForGroup: @ 01ac3d8c

/* Function Stack Size: 0x18 bytes */

long_long WCRefineGroupManagementViewController::manageScopeForGroup_
                    (ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ulong local_30;
  SEL local_28;
  ID local_20;
  long_long local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar1 = local_30;
  FUN_01ab51b4();
  if ((uVar1 & 1) == 0) {
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_scope_0269ea90);
    if ((((uint)uVar1 >> 1 & 1) == 0) &&
       (uVar1 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_scope_0269ea90),
       uVar1 != 0x80)) {
      uVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_scope_0269ea90);
      if ((uVar1 & 1) == 0) {
        local_18 = 2;
      }
      else {
        local_18 = 0;
      }
    }
    else {
      local_18 = 1;
    }
  }
  else {
    local_18 = 2;
  }
  _objc_storeStrong(&local_30,0);
  return local_18;
}

