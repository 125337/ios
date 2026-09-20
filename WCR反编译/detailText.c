// detailText @ 01516ab8

/* Function Stack Size: 0x10 bytes */

ID WCRefineTelegramTab::detailText(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  cfstringStruct *local_18;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_tabId_026a8270);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if ((IVar2 & 1) == 0) {
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_kind_026a27e8);
    if (IVar1 == 4) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_bSvJ_YeQS;
    }
    else {
      IVar1 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_kind_026a27e8);
      if (IVar1 == 5) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = &cf__STUS;
      }
      else {
        IVar1 = param_1;
        (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_kind_026a27e8);
        if (IVar1 == 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = &cf_hQO;
        }
        else {
          IVar1 = param_1;
          (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_kind_026a27e8);
          if (IVar1 == 3) {
            IVar1 = param_1;
            (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_recentDays_026b0128);
            if (0 < (long)IVar1) {
              (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_recentDays_026b0128);
            }
            local_18 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf___
                      );
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            IVar1 = param_1;
            (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_kind_026a27e8);
            if (IVar1 == 2) {
              IVar1 = param_1;
              (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_linkedGroupIds_026b00e8);
              _objc_retainAutoreleasedReturnValue();
              IVar2 = IVar1;
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(IVar1);
              if (IVar2 == 0) {
                (*(code *)PTR__objc_retain_02578638)();
                local_18 = &cf__INR_;
              }
              else {
                (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_preserveLinkedGroups_026a2a80);
                local_18 = &cf_TRR_;
                if ((param_1 & 1) == 0) {
                  local_18 = &cf_TRJ_Y;
                }
                (*(code *)PTR__objc_retain_02578638)();
              }
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_scopeMask_026a8338);
              if (param_1 == 1) {
                (*(code *)PTR__objc_retain_02578638)();
                local_18 = &cf__YS;
              }
              else if (param_1 == 2) {
                (*(code *)PTR__objc_retain_02578638)();
                local_18 = &cf__J;
              }
              else if (param_1 == 4) {
                (*(code *)PTR__objc_retain_02578638)();
                local_18 = &cf_ON_O;
              }
              else if (param_1 == 0x20) {
                (*(code *)PTR__objc_retain_02578638)();
                local_18 = &cf_n_vO;
              }
              else if (param_1 == 0x40) {
                (*(code *)PTR__objc_retain_02578638)();
                local_18 = &cf__gO;
              }
              else if (param_1 == 0x80) {
                (*(code *)PTR__objc_retain_02578638)();
                local_18 = &cf__QcS;
              }
              else if ((((param_1 & 0x18) == 0) || ((param_1 & 1) != 0)) ||
                      (((uint)param_1 >> 1 & 1) != 0)) {
                (*(code *)PTR__objc_retain_02578638)();
                local_18 = &cf__INR_;
              }
              else {
                (*(code *)PTR__objc_retain_02578638)();
                local_18 = &cf_lQOSTgRS;
              }
            }
          }
        }
      }
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_yJ0_JNYvO;
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

