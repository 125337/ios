// FUN_01587154 @ 01587154

void FUN_01587154(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  undefined8 local_28;
  ulong local_20;
  cfstringStruct *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_isEqualToString__0269ccc8,&cf___wcr_moments_permissions__);
  if ((uVar1 & 1) == 0) {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_isEqualToString__0269ccc8,&cf___wcr_moments_forward__);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_isEqualToString__0269ccc8,&cf___wcr_moments_delete__);
      if ((uVar1 & 1) == 0) {
        uVar1 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_isEqualToString__0269ccc8,&cf___wcr_moments_fake_engagement__);
        if ((uVar1 & 1) == 0) {
          uVar1 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_20,PTR_s_isEqualToString__0269ccc8,&cf___wcr_moments_complain__);
          if ((uVar1 & 1) == 0) {
            pcVar2 = (cfstringStruct *)PTR_WCRefineProfileCardActionCatalog_026ced78;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineProfileCardActionCatalog_026ced78,
                       PTR_s_displayTitleForActionID_customTi_026b0578,local_20,local_28);
            _objc_retainAutoreleasedReturnValue();
            local_18 = pcVar2;
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_18 = &cf_b;
          }
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = &cf__O_;
        }
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = &cf_Rd;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_lS;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_CgP;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

