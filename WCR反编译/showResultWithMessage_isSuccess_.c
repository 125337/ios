// showResultWithMessage:isSuccess: @ 017691f8

/* WARNING: Removing unreachable block (ram,0x017695ec) */
/* WARNING: Removing unreachable block (ram,0x0176965c) */
/* WARNING: Removing unreachable block (ram,0x01769614) */
/* WARNING: Removing unreachable block (ram,0x017696a0) */
/* WARNING: Removing unreachable block (ram,0x017696fc) */
/* WARNING: Removing unreachable block (ram,0x01769714) */
/* WARNING: Removing unreachable block (ram,0x0176971c) */
/* WARNING: Removing unreachable block (ram,0x01769734) */
/* Function Stack Size: 0x1c bytes */

void ThemeProRedeemViewController::showResultWithMessage_isSuccess_
               (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  undefined8 uVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  dispatch_time_t dVar5;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  code *local_b8;
  undefined *local_b0;
  ID local_a8 [5];
  byte local_79;
  undefined *local_78;
  byte local_69;
  undefined *local_68;
  byte local_59;
  undefined *local_58;
  byte local_49;
  undefined *local_48;
  byte local_39;
  long local_38;
  SEL local_30;
  ID local_28;
  
  uVar1 = DAT_02324020;
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_39 = (byte)param_4;
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_resultLabel_026b32d0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_traitCollection_026caba8);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if (IVar3 == 2) {
    local_49 = 0;
    local_59 = 0;
    if ((local_39 & 1) == 0) {
      puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_02323c60,uVar1,uVar1,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
                 PTR_s_colorWithRed_green_blue_alpha__0269cc48);
      _objc_retainAutoreleasedReturnValue();
      local_59 = 1;
      local_58 = puVar4;
    }
    else {
      puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,DAT_02323d00,uVar1,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
                 PTR_s_colorWithRed_green_blue_alpha__0269cc48);
      _objc_retainAutoreleasedReturnValue();
      local_49 = 1;
      local_48 = puVar4;
    }
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_resultLabel_026b32d0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    if ((local_59 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    if ((local_49 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
  }
  else {
    local_69 = 0;
    local_79 = 0;
    if ((local_39 & 1) == 0) {
      puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemRedColor_0269ee10);
      _objc_retainAutoreleasedReturnValue();
      local_79 = 1;
      local_78 = puVar4;
    }
    else {
      puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemGreenColor_026cab70);
      _objc_retainAutoreleasedReturnValue();
      local_69 = 1;
      local_68 = puVar4;
    }
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_resultLabel_026b32d0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    if ((local_79 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    if ((local_69 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
  }
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_resultLabel_026b32d0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if ((local_39 & 1) == 0) {
    dVar5 = _dispatch_time(0,5000000000);
    puVar4 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_28;
    local_c8 = PTR___NSConcreteStackBlock_02578660;
    local_c0 = 0xc2000000;
    local_bc = 0;
    local_b8 = FUN_01769968;
    local_b0 = &DAT_0257a800;
    (*(code *)PTR__objc_retain_02578638)();
    local_a8[0] = IVar2;
    _dispatch_after(dVar5,puVar4,&local_c8);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_storeStrong(local_a8,0);
  }
  else {
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_redeemButton_026b32d8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3fe0000000000000,0x3fe6666666666666,0x3fe0000000000000,0x3ff0000000000000,
               PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_redeemButton_026b32d8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_release_02578630)(puVar4);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

