// FUN_001f7b30 @ 001f7b30

byte FUN_001f7b30(undefined8 param_1)

{
  ulong uVar1;
  ulong local_30;
  byte local_21;
  undefined8 local_20;
  long *local_18;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  if (local_30 == 0) {
    local_21 = 0;
  }
  else {
    local_18 = &DAT_028c9138;
    local_20 = 0;
    _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257ae48);
    if (*local_18 + 1 != 0) {
      _dispatch_once(*local_18 + 1,local_18,local_20);
    }
    _objc_storeStrong(&local_20,0);
    if ((DAT_028c9130 == 0) ||
       (uVar1 = local_30,
       (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isKindOfClass__0269cd68,DAT_028c9130),
       (uVar1 & 1) == 0)) {
      if ((DAT_028c9128 == 0) ||
         (uVar1 = local_30,
         (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isKindOfClass__0269cd68,DAT_028c9128),
         (uVar1 & 1) == 0)) {
        local_21 = 0;
      }
      else {
        uVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_isHBC2CMsg_026a03b8);
        if ((uVar1 & 1) == 0) {
          local_21 = 1;
        }
        else {
          uVar1 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isHBC2CMsg_026a03b8);
          local_21 = (byte)uVar1 & 1;
        }
      }
    }
    else {
      local_21 = 1;
    }
  }
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

