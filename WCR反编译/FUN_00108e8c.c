// FUN_00108e8c @ 00108e8c

void FUN_00108e8c(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong local_48 [3];
  ulong local_30;
  undefined1 local_21;
  long local_20;
  long local_18;
  
  puVar1 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineChatRoomKickHelper_026ce2d8,PTR_s_removeMember_fromRoom_reason__0269edd8,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),&cf_Deuyd);
  local_21 = SUB81(puVar1,0);
  if (((ulong)puVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_yQ1Y_);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__yQ);
    uVar2 = *(ulong *)(param_1 + 0x30);
    FUN_00108c2c(uVar2,&cf_m_delegate);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___UIViewController_026cdf80;
    local_30 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar2 & 1) != 0) {
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      local_48[0] = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_respondsToSelector__026ca818,PTR_s_popViewControllerAnimated__0269ede0)
      ;
      if ((uVar2 & 1) != 0) {
        uVar2 = local_48[0];
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48[0],PTR_s_popViewControllerAnimated__0269ede0,1);
        _objc_unsafeClaimAutoreleasedReturnValue(uVar2);
      }
      _objc_storeStrong(local_48,0);
    }
    _objc_storeStrong(&local_30,0);
  }
  return;
}

