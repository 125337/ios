// FUN_007b5dec @ 007b5dec

byte FUN_007b5dec(double param_1,undefined8 param_2,double param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  undefined *puVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  ulong local_b0;
  double local_a8;
  double local_a0;
  undefined8 local_98;
  double local_90;
  undefined8 local_88;
  double local_80;
  undefined8 local_78;
  double local_70;
  undefined8 local_68;
  double local_60;
  ulong local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_5);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_6);
  uVar1 = local_30;
  local_40 = param_7;
  FUN_007b5c08();
  _objc_retainAutoreleasedReturnValue();
  local_48 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_bounds_026ca548);
  local_80 = param_1;
  local_78 = param_2;
  local_70 = param_3;
  local_68 = param_4;
  _CGRectGetWidth(param_1,param_2);
  uVar4 = 0x3ff0000000000000;
  dVar3 = param_1;
  local_60 = param_1;
  if (param_1 < 1.0) {
    puVar2 = PTR__OBJC_CLASS___UIScreen_026cdf70;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
    _objc_retainAutoreleasedReturnValue();
    dVar3 = param_3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_a0 = param_1;
    local_98 = uVar4;
    local_90 = dVar3;
    local_88 = param_4;
    local_60 = dVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineTelegramTabStripView_026ce638,PTR_s_preferredHeight_026a8248);
  uVar1 = local_30;
  local_a8 = dVar3;
  FUN_007bd1f4();
  _objc_retainAutoreleasedReturnValue();
  local_b0 = uVar1;
  if ((uVar1 == 0) ||
     ((*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_respondsToSelector__026ca818,
                 PTR_s_addBannerBtn_atIndex_editable_wi_026a8328), (uVar1 & 1) == 0)) {
    local_21 = 0;
  }
  else {
    uVar5 = 0;
    uVar4 = 0;
    dVar3 = local_60;
    dVar6 = local_a8;
    FUN_007b5da0();
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,uVar5,dVar3,dVar6,local_38,PTR_s_setFrame__026ca960)
    ;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setAutoresizingMask__026ca878,2);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b0,PTR_s_addBannerBtn_atIndex_editable_wi_026a8328,local_38,0,0,0);
    uVar1 = local_30;
    uVar4 = DAT_026f4698;
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(uVar1,uVar4,puVar2,1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_21 = 1;
  }
  _objc_storeStrong(&local_b0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

