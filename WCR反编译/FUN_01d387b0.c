// FUN_01d387b0 @ 01d387b0

void FUN_01d387b0(long param_1)

{
  long local_40;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_40 = *(long *)(param_1 + 0x20);
  if (local_40 == 0) {
    local_40 = *(long *)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_setObject_forKeyedSubscript__0269d248,local_40,
             _kWCRScheduledTaskKeyTargets);
  _objc_storeStrong(&local_20,0);
  return;
}

