// FUN_00883768 @ 00883768

void FUN_00883768(undefined8 param_1)

{
  char *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_60;
  undefined *local_58;
  ulong local_50;
  ulong local_48 [3];
  char *local_30;
  undefined4 local_24;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = 0;
    local_24 = 1;
  }
  else {
    pcVar1 = "ContactInfoViewController";
    _objc_getClass();
    uVar3 = local_20;
    local_30 = pcVar1;
    if (pcVar1 == (char *)0x0) {
      local_18 = 0;
      local_24 = 1;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_48[0] = uVar3;
      while (local_48[0] != 0) {
        uVar2 = local_48[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_isKindOfClass__0269cd68,local_30);
        uVar3 = local_48[0];
        if ((uVar2 & 1) != 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_50 = uVar3;
          local_58 = PTR_s_m_contact_026a0b68;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_respondsToSelector__026ca818,PTR_s_m_contact_026a0b68);
          if ((uVar3 & 1) == 0) {
            local_18 = 0;
            local_24 = 1;
          }
          else {
            uVar3 = local_50;
            (*(code *)PTR__objc_msgSend_02578628)(local_50,local_58);
            _objc_retainAutoreleasedReturnValue();
            local_60 = uVar3;
            FUN_00884260(uVar3,&cf_responder);
            uVar3 = local_60;
            (*(code *)PTR__objc_retain_02578638)();
            local_18 = uVar3;
            local_24 = 1;
            _objc_storeStrong(&local_60,0);
          }
          _objc_storeStrong(&local_50,0);
          goto LAB_008839dc;
        }
        uVar2 = local_48[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_nextResponder_0269d0d8);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_48[0];
        local_48[0] = uVar2;
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
      local_18 = 0;
      local_24 = 1;
LAB_008839dc:
      _objc_storeStrong(local_48,0);
    }
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

