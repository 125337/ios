// FUN_00203300 @ 00203300

void FUN_00203300(undefined8 param_1)

{
  double dVar1;
  undefined8 ***pppuVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 ****ppppuVar5;
  undefined8 ****ppppuVar6;
  double dVar7;
  undefined8 ***local_70;
  undefined8 ***local_68;
  double local_60;
  double local_58;
  byte local_49;
  undefined8 ***local_48;
  undefined4 local_2c;
  undefined8 ***local_28;
  
  dVar1 = DAT_02323d70;
  local_28 = (undefined8 ****)0x0;
  dVar7 = DAT_02323d70;
  _objc_storeStrong(&local_28,param_1);
  ppppuVar5 = (undefined8 ****)local_28;
  if ((undefined8 ****)local_28 == (undefined8 ****)0x0) {
    local_2c = 1;
    goto LAB_00203bf4;
  }
  puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(ppppuVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
  if (((ulong)ppppuVar5 & 1) == 0) {
    local_2c = 1;
    goto LAB_00203bf4;
  }
  ppppuVar5 = (undefined8 ****)local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (ppppuVar5 == (undefined8 ****)0x0) {
    local_2c = 1;
    goto LAB_00203bf4;
  }
  local_49 = 0;
  ppppuVar5 = (undefined8 ****)local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_window_026cabf0);
  _objc_retainAutoreleasedReturnValue();
  bVar3 = false;
  if (ppppuVar5 == (undefined8 ****)0x0) {
    ppppuVar6 = (undefined8 ****)local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    local_49 = 1;
    bVar3 = ppppuVar6 == (undefined8 ****)0x0;
    local_48 = ppppuVar6;
  }
  if ((local_49 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  (*(code *)PTR__objc_release_02578630)();
  if (bVar3) {
    local_2c = 1;
    goto LAB_00203bf4;
  }
  FUN_00203d0c();
  if (((ulong)ppppuVar5 & 1) != 0) {
    FUN_00203da8();
    ppppuVar5 = (undefined8 ****)local_28;
    local_58 = dVar7;
    FUN_001d5a74();
    local_58 = dVar7;
    FUN_00203ea0();
    local_60 = dVar7;
    FUN_00203f80();
    _objc_retainAutoreleasedReturnValue();
    if ((local_58 < 0.0) || (100.0 < local_58)) {
      local_58 = 10.0;
    }
    if ((local_60 < 0.0) || (10.0 < local_60)) {
      local_60 = 0.0;
    }
    local_68 = ppppuVar5;
    if (ppppuVar5 == (undefined8 ****)0x0) {
LAB_0020367c:
      ppppuVar5 = (undefined8 ****)PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (dVar1,dVar1,0x3fe6666666666666,0x3ff0000000000000,
                 PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
      _objc_retainAutoreleasedReturnValue();
      pppuVar2 = local_68;
      local_68 = ppppuVar5;
      (*(code *)PTR__objc_release_02578630)(pppuVar2);
    }
    else {
      puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(ppppuVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
      if (((ulong)ppppuVar5 & 1) == 0) goto LAB_0020367c;
    }
    ppppuVar5 = (undefined8 ****)local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    dVar1 = local_58;
    if (ppppuVar5 != (undefined8 ****)0x0) {
      ppppuVar5 = (undefined8 ****)local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(dVar1);
      (*(code *)PTR__objc_release_02578630)(ppppuVar5);
      ppppuVar5 = (undefined8 ****)local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(ppppuVar5);
      dVar1 = local_60;
      if (local_60 <= 0.0) {
        ppppuVar5 = (undefined8 ****)local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(0);
        (*(code *)PTR__objc_release_02578630)(ppppuVar5);
        puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
        _objc_retainAutoreleasedReturnValue();
        _objc_retainAutorelease();
        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_CGColor_026ca470);
        ppppuVar5 = (undefined8 ****)local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(ppppuVar5);
        (*(code *)PTR__objc_release_02578630)(puVar4);
      }
      else {
        ppppuVar5 = (undefined8 ****)local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(dVar1);
        (*(code *)PTR__objc_release_02578630)(ppppuVar5);
        pppuVar2 = local_68;
        _objc_retainAutorelease();
        (*(code *)PTR__objc_msgSend_02578628)(pppuVar2,PTR_s_CGColor_026ca470);
        ppppuVar5 = (undefined8 ****)local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(ppppuVar5);
      }
    }
    ppppuVar5 = &local_68;
    _objc_storeStrong(ppppuVar5,0);
  }
  FUN_00203c70();
  if ((((ulong)ppppuVar5 & 1) != 0) && (_WCRFrostedBubbleEnabled(), ((ulong)ppppuVar5 & 1) == 0)) {
    FUN_00204200();
    _objc_retainAutoreleasedReturnValue();
    local_70 = ppppuVar5;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setBackgroundColor__026ca888,ppppuVar5);
    _objc_storeStrong(&local_70,0);
  }
  local_2c = 0;
LAB_00203bf4:
  _objc_storeStrong(&local_28,0);
  return;
}

