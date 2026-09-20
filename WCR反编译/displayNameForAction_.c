// displayNameForAction: @ 00fe848c

/* Function Stack Size: 0x18 bytes */

ID WCRefineInputBoxGestureSupport::displayNameForAction_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID local_38;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  IVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_normalizedAction__026a3438,local_30);
  _objc_retainAutoreleasedReturnValue();
  local_38 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_isEqualToString__0269ccc8,&cf_undo);
  if ((IVar1 & 1) == 0) {
    IVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_paste);
    if ((IVar1 & 1) == 0) {
      IVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_clipboard);
      if ((IVar1 & 1) == 0) {
        IVar1 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_isEqualToString__0269ccc8,&cf_quickReply);
        if ((IVar1 & 1) == 0) {
          IVar1 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_clear);
          if ((IVar1 & 1) == 0) {
            IVar1 = local_38;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_38,PTR_s_isEqualToString__0269ccc8,&cf_copyAll);
            if ((IVar1 & 1) == 0) {
              IVar1 = local_38;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_38,PTR_s_isEqualToString__0269ccc8,&cf_cut);
              if ((IVar1 & 1) == 0) {
                IVar1 = local_38;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_38,PTR_s_isEqualToString__0269ccc8,&cf_hideKeyboard);
                if ((IVar1 & 1) == 0) {
                  (*(code *)PTR__objc_retain_02578638)();
                  local_18 = &cf_eR_O;
                }
                else {
                  (*(code *)PTR__objc_retain_02578638)();
                  local_18 = &cf_6ew_v;
                }
              }
              else {
                (*(code *)PTR__objc_retain_02578638)();
                local_18 = &cf_jRR;
              }
            }
            else {
              (*(code *)PTR__objc_retain_02578638)();
              local_18 = &cf_Y6RhQ;
            }
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_18 = &cf_nzzeQFh;
          }
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = &cf__wcVY;
        }
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = &cf__4_g;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf__4;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_d;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

