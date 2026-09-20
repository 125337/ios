// FUN_0110ca2c @ 0110ca2c

void FUN_0110ca2c(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  undefined *puVar7;
  ulong local_f8;
  undefined8 local_90;
  undefined8 local_88;
  cfstringStruct *local_80;
  long local_78;
  ulong local_70;
  cfstringStruct *local_68;
  ulong local_60;
  undefined8 local_58;
  ulong local_50;
  ulong local_48;
  long local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_48 = 0;
  _objc_storeStrong(&local_48,param_1);
  local_58 = 0;
  local_50 = param_2;
  _objc_storeStrong(&local_58,param_3);
  uVar3 = local_50;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  local_68 = (cfstringStruct *)0x0;
  local_60 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar3,PTR_s_hasPrefix__0269d320,&cf_WCRefine_onCustomLongPressMenuItem_);
  if ((uVar3 & 1) != 0) {
    uVar4 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_hasSuffix__0269d018,&cf__);
    uVar3 = local_60;
    if ((uVar4 & 1) != 0) {
      pcVar5 = &cf_WCRefine_onCustomLongPressMenuItem_;
      (*(code *)PTR__objc_msgSend_02578628)
                (&cf_WCRefine_onCustomLongPressMenuItem_,PTR_s_length_0269cca0);
      uVar4 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
      pcVar6 = &cf_WCRefine_onCustomLongPressMenuItem_;
      (*(code *)PTR__objc_msgSend_02578628)
                (&cf_WCRefine_onCustomLongPressMenuItem_,PTR_s_length_0269cca0);
      local_78 = (uVar4 - (long)pcVar6) + -1;
      local_80 = pcVar5;
      local_40 = local_78;
      local_38 = pcVar5;
      local_30 = pcVar5;
      local_28 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_substringWithRange__0269d138,pcVar5,local_78);
      _objc_retainAutoreleasedReturnValue();
      local_70 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0);
      if (uVar3 != 0) {
        pcVar5 = &cf_lp_custom_;
        (*(code *)PTR__objc_msgSend_02578628)
                  (&cf_lp_custom_,PTR_s_stringByAppendingString__0269d398,local_70);
        _objc_retainAutoreleasedReturnValue();
        pcVar6 = local_68;
        local_68 = pcVar5;
        (*(code *)PTR__objc_release_02578630)(pcVar6);
      }
      _objc_storeStrong(&local_70,0);
    }
  }
  uVar1 = DAT_028e3500;
  (*(code *)PTR__objc_retain_02578638)();
  uVar2 = DAT_028e3510;
  local_88 = uVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_90 = uVar2;
  _objc_storeStrong(&DAT_028e3500,local_68);
  uVar3 = local_48;
  puVar7 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar7);
  if ((uVar3 & 1) == 0) {
    local_f8 = 0;
  }
  else {
    local_f8 = local_48;
  }
  _objc_storeStrong(&DAT_028e3510,local_f8);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePluginIconCatalog_026ce4e0,PTR_s_dispatchLongPressCustomMenuItem__026aeeb0,
             local_58);
  _objc_storeStrong(&DAT_028e3500,local_88);
  _objc_storeStrong(&DAT_028e3510,local_90);
  _objc_storeStrong(&local_90);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_48,0);
  return;
}

