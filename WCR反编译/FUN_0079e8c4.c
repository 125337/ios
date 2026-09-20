// FUN_0079e8c4 @ 0079e8c4

void FUN_0079e8c4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38 [3];
  undefined *local_20;
  undefined *local_18;
  
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_18 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_globalCornerBackgroundColorLight_026a2050);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = local_18;
  local_20 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_globalCornerBackgroundColorDark_026a2058);
  _objc_retainAutoreleasedReturnValue();
  local_38[0] = puVar3;
  if (local_20 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_20;
    local_20 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  if (local_38[0] == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3fc0000000000000,0x3fc0000000000000,0x3fc0000000000000,0x3ff0000000000000,
               PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_38[0];
    local_38[0] = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  puVar3 = local_38[0];
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_68 = PTR___NSConcreteStackBlock_02578660;
  local_60 = 0xc2000000;
  local_5c = 0;
  local_58 = FUN_0079ebc8;
  local_50 = &DAT_0257add8;
  (*(code *)PTR__objc_retain_02578638)();
  puVar1 = local_20;
  local_48 = puVar3;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_colorWithDynamicProvider__0269e538,&local_68);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(local_38,0);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(puVar2);
  return;
}

