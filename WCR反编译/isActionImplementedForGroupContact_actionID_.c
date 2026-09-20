// isActionImplementedForGroupContact:actionID: @ 01cc7a4c

/* Function Stack Size: 0x1c bytes */

bool WCRefineProfileCardActionCatalog::isActionImplementedForGroupContact_actionID_
               (ID param_1,SEL param_2,bool param_3,ID param_4)

{
  ulong uVar1;
  ID IVar2;
  ulong local_38;
  byte local_29;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_29 = (byte)param_3;
  local_38 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_38,param_4);
  uVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_11 = 0;
  }
  else {
    IVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isCustomPageActionID__026b0670,local_38);
    if ((IVar2 & 1) == 0) {
      uVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_isEqualToString__0269ccc8,&cf_theme_delivery);
      if ((uVar1 & 1) == 0) {
        IVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_isActionAvailableForGroupContact_026c3560,local_29 & 1,local_38);
        if ((IVar2 & 1) == 0) {
          local_11 = 0;
        }
        else {
          local_11 = 1;
        }
      }
      else {
        IVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_isActionAvailableForGroupContact_026c3560,local_29 & 1,local_38);
        local_11 = (byte)IVar2 & 1;
      }
    }
    else {
      local_11 = 1;
    }
  }
  _objc_storeStrong(&local_38,0);
  return local_11 & 1;
}

