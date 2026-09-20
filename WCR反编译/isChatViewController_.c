// isChatViewController: @ 010f0b64

/* Function Stack Size: 0x18 bytes */

bool WCRefinePageLockGuard::isChatViewController_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  byte local_48;
  long local_40;
  SEL local_38;
  ID local_30;
  byte local_21;
  undefined8 local_20;
  long *local_18;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  if (local_40 == 0) {
    local_21 = 0;
  }
  else {
    local_18 = &DAT_028e3488;
    local_20 = 0;
    _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_025855d0);
    if (*local_18 + 1 != 0) {
      _dispatch_once(*local_18 + 1,local_18,local_20);
    }
    _objc_storeStrong(&local_20,0);
    local_48 = 0;
    if (DAT_028e3480 != 0) {
      lVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isKindOfClass__0269cd68,DAT_028e3480);
      local_48 = (byte)lVar1;
    }
    local_21 = local_48 & 1;
  }
  _objc_storeStrong(&local_40,0);
  return local_21 & 1;
}

