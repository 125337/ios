// wcr_effectiveTargetAccountUsesWechat: @ 0172a58c

/* Function Stack Size: 0x14 bytes */

ID ThemeBoxAirDropThemePickViewController::wcr_effectiveTargetAccountUsesWechat_
             (ID param_1,SEL param_2,bool param_3)

{
  undefined8 local_18;
  
  if ((param_3 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_targetWxid_026b3bd0);
    _objc_retainAutoreleasedReturnValue();
    local_18 = param_1;
    FUN_01725ed0();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcr_targetWechatAliasValue_026b3c20);
    _objc_retainAutoreleasedReturnValue();
    local_18 = param_1;
  }
  _objc_autoreleaseReturnValue();
  return local_18;
}

