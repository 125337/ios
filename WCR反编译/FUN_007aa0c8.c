// FUN_007aa0c8 @ 007aa0c8

void FUN_007aa0c8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **local_c8;
  undefined **local_c0;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined4 local_5c;
  undefined *local_58;
  undefined *local_50 [3];
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  
  uVar1 = DAT_02323d70;
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_systemPopupCornerBorderColorLigh_026a8160);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = local_30;
  local_38 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_systemPopupCornerBorderColorDark_026a8168);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_50[0] = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,uVar1,0x3fe6666666666666,0x3fe0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  local_58 = puVar3;
  if ((local_38 == (undefined *)0x0) && (local_50[0] == (undefined *)0x0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = puVar3;
  }
  else {
    if (local_38 == (undefined *)0x0) {
      if (local_50[0] == (undefined *)0x0) {
        local_c0 = &local_58;
      }
      else {
        local_c0 = local_50;
      }
      _objc_storeStrong(&local_38,*local_c0);
    }
    if (local_50[0] == (undefined *)0x0) {
      if (local_38 == (undefined *)0x0) {
        local_c8 = &local_58;
      }
      else {
        local_c8 = &local_38;
      }
      _objc_storeStrong(local_50,*local_c8);
    }
    puVar4 = local_50[0];
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    local_90 = PTR___NSConcreteStackBlock_02578660;
    local_88 = 0xc2000000;
    local_84 = 0;
    local_80 = FUN_007aa588;
    local_78 = &DAT_0257add8;
    (*(code *)PTR__objc_retain_02578638)();
    puVar2 = local_38;
    local_70 = puVar4;
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_colorWithDynamicProvider__0269e538,&local_90)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_28 = puVar3;
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_70,0);
  }
  local_5c = 1;
  _objc_storeStrong(&local_58);
  _objc_storeStrong(local_50,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

