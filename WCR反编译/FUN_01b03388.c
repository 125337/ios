// FUN_01b03388 @ 01b03388

int FUN_01b03388(undefined8 param_1)

{
  ulong uVar1;
  ulong local_30;
  int local_28;
  undefined4 local_24;
  ulong local_20;
  int local_14;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_14 = 0;
  }
  else {
    local_28 = 0;
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,&cf_m_uUnReadCount);
    _objc_retainAutoreleasedReturnValue();
    local_30 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_unsignedIntValue_0269db10);
    if ((uVar1 & 1) != 0) {
      uVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_unsignedIntValue_0269db10);
      local_28 = (int)uVar1;
    }
    _objc_storeStrong(&local_30,0);
    if (local_28 == 0) {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_m_uUnReadCount_026a6310);
      if ((uVar1 & 1) != 0) {
        uVar1 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_uUnReadCount_026a6310);
        local_28 = (int)uVar1;
      }
    }
    local_14 = local_28;
  }
  local_24 = 1;
  _objc_storeStrong(&local_20,0);
  return local_14;
}

