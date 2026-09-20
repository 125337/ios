// _WCRefineForwardMomentFromCellView @ 0059c604

void _WCRefineForwardMomentFromCellView(undefined8 param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  undefined *local_90;
  bool local_49;
  undefined *local_48;
  long local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  pcVar2 = &cf_WCRefine_forwardMoment_;
  _NSSelectorFromString();
  if (((local_18 == 0) || (local_20 == 0)) ||
     (uVar3 = local_18,
     (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_respondsToSelector__026ca818,pcVar2),
     lVar1 = local_20, (uVar3 & 1) == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_S_MRub_g_b0RgSWlSeQS)
    ;
  }
  else {
    local_49 = (param_3 & 1) == 0;
    if (local_49) {
      local_90 = (undefined *)0x0;
    }
    else {
      local_90 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      local_48 = local_90;
    }
    local_49 = !local_49;
    _objc_setAssociatedObject(lVar1,&DAT_028cb638,local_90,1);
    if (local_49) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_18,pcVar2,local_20);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

