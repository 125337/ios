// _WCRefineCurrentChatSessionFromView @ 00f1bad4

void _WCRefineCurrentChatSessionFromView(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong local_50;
  int local_44;
  ulong local_40;
  ulong local_38;
  long local_30;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = uVar1;
  for (local_30 = 0; local_30 < 0x3c && local_28 != 0; local_30 = local_30 + 1) {
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if ((uVar2 & 1) != 0) {
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_GetContact_0269d2c0);
      if ((uVar1 & 1) != 0) {
        uVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_GetContact_0269d2c0);
        _objc_retainAutoreleasedReturnValue();
        local_38 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsUsrName_0269d638);
        if ((uVar1 & 1) == 0) {
LAB_00f1bd04:
          local_44 = 0;
        }
        else {
          uVar1 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_m_nsUsrName_0269d638);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_40 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
          if (((uVar1 & 1) == 0) ||
             (uVar2 = local_40,
             (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0), uVar1 = local_40
             , uVar2 == 0)) {
            local_44 = 0;
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_18 = uVar1;
            local_44 = 1;
          }
          _objc_storeStrong(&local_40,0);
          if (local_44 == 0) goto LAB_00f1bd04;
        }
        _objc_storeStrong(&local_38,0);
        if (local_44 != 0) goto LAB_00f1be8c;
      }
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_getCurrentChatName_0269ec28);
      if ((uVar1 & 1) != 0) {
        uVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_getCurrentChatName_0269ec28);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_50 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
        if (((uVar1 & 1) == 0) ||
           (uVar2 = local_50, (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0),
           uVar1 = local_50, uVar2 == 0)) {
          local_44 = 0;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = uVar1;
          local_44 = 1;
        }
        _objc_storeStrong(&local_50,0);
        if (local_44 != 0) goto LAB_00f1be8c;
      }
    }
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_nextResponder_0269d0d8);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_28;
    local_28 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  local_18 = 0;
  local_44 = 1;
LAB_00f1be8c:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

