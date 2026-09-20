// _WCRNameplateHostIsSessionPicker @ 010d68a0

byte _WCRNameplateHostIsSessionPicker(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  ulong local_40;
  int local_34;
  ulong local_30;
  byte local_21;
  undefined8 local_20;
  long *local_18;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  if (local_30 == 0) {
    iVar3 = 1;
    local_21 = 0;
    local_34 = 1;
  }
  else {
    local_18 = &DAT_028e33b8;
    local_20 = 0;
    _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_025854b8);
    if (*local_18 + 1 != 0) {
      _dispatch_once(*local_18 + 1,local_18,local_20);
    }
    _objc_storeStrong(&local_20,0);
    uVar1 = local_30;
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = uVar1;
    while (local_40 != 0) {
      if ((DAT_028e3398 != 0) &&
         (uVar1 = local_40,
         (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isKindOfClass__0269cd68,DAT_028e3398),
         (uVar1 & 1) != 0)) {
        local_21 = 1;
        local_34 = 1;
        goto LAB_010d6af0;
      }
      if ((DAT_028e33a0 != 0) &&
         (uVar1 = local_40,
         (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isKindOfClass__0269cd68,DAT_028e33a0),
         (uVar1 & 1) != 0)) {
        local_21 = 1;
        local_34 = 1;
        goto LAB_010d6af0;
      }
      if ((DAT_028e33a8 != 0) &&
         (uVar1 = local_40,
         (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isKindOfClass__0269cd68,DAT_028e33a8),
         (uVar1 & 1) != 0)) {
        local_21 = 1;
        local_34 = 1;
        goto LAB_010d6af0;
      }
      if ((DAT_028e33b0 != 0) &&
         (uVar1 = local_40,
         (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isKindOfClass__0269cd68,DAT_028e33b0),
         (uVar1 & 1) != 0)) {
        local_21 = 1;
        local_34 = 1;
        goto LAB_010d6af0;
      }
      uVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_nextResponder_0269d0d8);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_40;
      local_40 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    local_34 = 2;
LAB_010d6af0:
    _objc_storeStrong(&local_40,0);
    iVar3 = local_34 + -2;
    if (iVar3 == 0) {
      iVar3 = 1;
      local_21 = 0;
      local_34 = 1;
    }
  }
  _objc_storeStrong(iVar3,&local_30,0);
  return local_21 & 1;
}

