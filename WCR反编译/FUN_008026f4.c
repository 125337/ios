// FUN_008026f4 @ 008026f4

void FUN_008026f4(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_2c;
  ulong local_28;
  long local_20;
  long local_18;
  
  uVar1 = param_1 + 0x20;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_28 = uVar1;
  if ((uVar1 == 0) ||
     (puVar2 = PTR_WCRefineHomeHeaderUnstick_026ce568,
     (*(code *)PTR__objc_msgSend_02578628)
               (PTR_WCRefineHomeHeaderUnstick_026ce568,PTR_s_isHoldingAtViewportTop_026a89e8),
     ((ulong)puVar2 & 1) == 0)) {
    local_2c = 1;
  }
  else {
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isDragging_0269ddf8);
    if (((uVar1 & 1) == 0) &&
       (uVar3 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isTracking_0269ddf0),
       uVar1 = local_28, puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8, (uVar3 & 1) == 0)) {
      (*(code *)PTR__objc_retain_02578638)();
      local_48 = uVar1;
      uStack_38 = *(undefined8 *)(param_1 + 0x30);
      local_40 = *(undefined8 *)(param_1 + 0x28);
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_performWithoutAnimation__0269e7e0);
      _objc_storeStrong(&local_48,0);
      local_2c = 0;
    }
    else {
      local_2c = 1;
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

