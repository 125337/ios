// FUN_010796d4 @ 010796d4

byte FUN_010796d4(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong local_40;
  ulong local_38;
  ulong local_30;
  undefined4 local_24;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 1;
    local_24 = 1;
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    local_30 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_containsString__0269d0b0,&cf_Alert);
    if ((((uVar1 & 1) == 0) &&
        (uVar1 = local_30,
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_containsString__0269d0b0,&cf_Action),
        (uVar1 & 1) == 0)) &&
       (uVar1 = local_30,
       (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_containsString__0269d0b0,&cf_Keyboard),
       (uVar1 & 1) == 0)) {
      uVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_containsString__0269d0b0,&cf_WCRSuperFloat);
      if ((((uVar1 & 1) == 0) &&
          (uVar1 = local_30,
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_containsString__0269d0b0,&cf_SuperFloatBall), (uVar1 & 1) == 0))
         && (uVar1 = local_30,
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_30,PTR_s_containsString__0269d0b0,&cf_WCRQuickChat), (uVar1 & 1) == 0))
      {
        uVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_containsString__0269d0b0,&cf_WCRefineFloat);
        if (((uVar1 & 1) == 0) &&
           (uVar1 = local_30,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_30,PTR_s_containsString__0269d0b0,&cf_WCRefineOverlay), (uVar1 & 1) == 0
           )) {
          uVar1 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_rootViewController_026ca820);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR__OBJC_CLASS___UIAlertController_026ce178;
          local_38 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIAlertController_026ce178,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
          if ((uVar1 & 1) == 0) {
            uVar1 = local_38;
            (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_class_0269cd60);
            _NSStringFromClass();
            _objc_retainAutoreleasedReturnValue();
            local_40 = uVar1;
            (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_containsString__0269d0b0,&cf_Alert);
            if (((uVar1 & 1) == 0) &&
               (uVar1 = local_40,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_40,PTR_s_containsString__0269d0b0,&cf_ActionSheet), (uVar1 & 1) == 0
               )) {
              local_11 = 0;
            }
            else {
              local_11 = 1;
            }
            local_24 = 1;
            _objc_storeStrong(&local_40,0);
          }
          else {
            local_11 = 1;
            local_24 = 1;
          }
          _objc_storeStrong(&local_38,0);
        }
        else {
          local_11 = 1;
          local_24 = 1;
        }
      }
      else {
        local_11 = 1;
        local_24 = 1;
      }
    }
    else {
      local_11 = 1;
      local_24 = 1;
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

