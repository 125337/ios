// FUN_004d77e8 @ 004d77e8

void FUN_004d77e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *local_b8;
  long local_48;
  long local_40;
  undefined4 local_38;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  puVar1 = PTR_WCRefineMessageBlockSupport_026ce0f8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineMessageBlockSupport_026ce0f8,PTR_s_isChatRoomID__0269ec68,local_28);
  lVar3 = local_28;
  if (((ulong)puVar1 & 1) == 0) {
    lVar3 = local_20;
    FUN_004da094(local_20,&cf_m_nsFromUsr);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_WCRefineMessageBlockSupport_026ce0f8;
    local_40 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineMessageBlockSupport_026ce0f8,PTR_s_isChatRoomID__0269ec68,lVar3);
    lVar3 = local_40;
    if (((ulong)puVar1 & 1) == 0) {
      lVar3 = local_20;
      FUN_004da094(local_20,&cf_m_nsToUsr);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR_WCRefineMessageBlockSupport_026ce0f8;
      local_48 = lVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineMessageBlockSupport_026ce0f8,PTR_s_isChatRoomID__0269ec68,lVar3);
      lVar3 = local_48;
      if (((ulong)puVar1 & 1) == 0) {
        lVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
        lVar3 = local_28;
        if (lVar2 == 0) {
          lVar3 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
          if (lVar3 == 0) {
            local_b8 = &local_48;
          }
          else {
            local_b8 = &local_40;
          }
          lVar3 = *local_b8;
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = lVar3;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = lVar3;
        }
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = lVar3;
      }
      local_38 = 1;
      _objc_storeStrong(&local_48,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = lVar3;
      local_38 = 1;
    }
    _objc_storeStrong(&local_40,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = lVar3;
    local_38 = 1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

