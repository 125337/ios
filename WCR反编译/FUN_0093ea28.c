// FUN_0093ea28 @ 0093ea28

void FUN_0093ea28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_88;
  undefined *local_50;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  undefined *local_18;
  
  local_20 = (undefined *)0x0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = (undefined *)0x0;
  _objc_storeStrong(&local_28,param_2);
  puVar1 = PTR_WCRefineEmoticonToolsHelper_026ce448;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineEmoticonToolsHelper_026ce448,PTR_s_emoticonMD5FromMessageWrap__026aa7d0,
             local_20);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_WCRefineEmoticonToolsHelper_026ce448;
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineEmoticonToolsHelper_026ce448,
             PTR_s_emoticonDataForMD5_convertWxAMTo_026a3db0,puVar1,1);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_length_0269cca0);
  if (puVar2 != (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___UIImage_026cdfd0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithData__0269d4c8,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar1;
    if (puVar1 != (undefined *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = puVar1;
    }
    _objc_storeStrong(&local_40,0);
    if (puVar1 != (undefined *)0x0) goto LAB_0093ec2c;
  }
  puVar1 = local_20;
  FUN_0093e394(0);
  _objc_retainAutoreleasedReturnValue();
  local_88 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    local_50 = local_28;
    FUN_0093e70c();
    _objc_retainAutoreleasedReturnValue();
    local_88 = local_50;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_88;
  if (puVar1 == (undefined *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
LAB_0093ec2c:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

