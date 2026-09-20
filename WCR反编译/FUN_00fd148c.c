// FUN_00fd148c @ 00fd148c

byte FUN_00fd148c(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  byte local_34;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___UITableView_026ce1a8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60)
  ;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_11 = 0;
  }
  else {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isDragging_0269ddf8);
    local_34 = 1;
    if ((uVar2 & 1) == 0) {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isDecelerating_0269e888);
      local_34 = 1;
      if ((uVar2 & 1) == 0) {
        uVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isTracking_0269ddf0);
        local_34 = (byte)uVar2;
      }
    }
    local_11 = local_34 & 1;
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

