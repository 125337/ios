// FUN_019cb3bc @ 019cb3bc

/* WARNING: Removing unreachable block (ram,0x019cb550) */

void FUN_019cb3bc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  undefined *local_18;
  
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_02323d18,0x3fd0a3d700000000,DAT_02339e08,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_20 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_02339e00,DAT_02324330,DAT_02324358,0x3ff0000000000000,
             PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_58 = PTR___NSConcreteStackBlock_02578660;
  local_50 = 0xc2000000;
  local_4c = 0;
  local_48 = FUN_019e0b50;
  local_40 = &DAT_0258aa60;
  local_28 = puVar3;
  (*(code *)PTR__objc_retain_02578638)();
  puVar1 = local_20;
  local_38 = puVar3;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_colorWithDynamicProvider__0269e538,&local_58);
  _objc_retainAutoreleasedReturnValue();
  local_18 = puVar2;
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

