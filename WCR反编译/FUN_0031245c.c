// FUN_0031245c @ 0031245c

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_0031245c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40 [3];
  undefined *local_28;
  undefined *local_20;
  undefined *local_18;
  
  puVar3 = DAT_028c9ac0;
  if (DAT_028c9ac0 == (undefined *)0x0) {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_20 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_globalCornerBackgroundColorLight_026a2050);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_20;
    local_28 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_globalCornerBackgroundColorDark_026a2058);
    _objc_retainAutoreleasedReturnValue();
    local_40[0] = puVar2;
    if (local_28 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_28;
      local_28 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    if (local_40[0] == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x3fc0000000000000,0x3fc0000000000000,0x3fc0000000000000,0x3ff0000000000000,
                 PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_40[0];
      local_40[0] = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    puVar2 = local_40[0];
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    local_70 = PTR___NSConcreteStackBlock_02578660;
    local_68 = 0xc2000000;
    local_64 = 0;
    local_60 = FUN_0031bab4;
    local_58 = &DAT_0257add8;
    (*(code *)PTR__objc_retain_02578638)();
    puVar1 = local_28;
    local_50 = puVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_colorWithDynamicProvider__0269e538,&local_70)
    ;
    _objc_retainAutoreleasedReturnValue();
    puVar2 = DAT_028c9ac0;
    DAT_028c9ac0 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar3 = DAT_028c9ac0;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar3;
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(local_40,0);
    _objc_storeStrong(&local_28,0);
    _objc_storeStrong(&local_20,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar3;
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

