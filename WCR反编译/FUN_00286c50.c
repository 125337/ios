// FUN_00286c50 @ 00286c50

void FUN_00286c50(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_f0;
  ulong local_90 [2];
  ulong local_80 [2];
  ulong local_70 [2];
  ulong local_60;
  undefined4 local_54;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  uVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,&cf_dataItem);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_38;
  local_38 = uVar1;
  (*(code *)PTR__objc_release_02578630)(uVar3);
  if (local_38 == 0) {
    local_28 = 0;
    local_54 = 1;
    goto LAB_00287124;
  }
  local_60 = 0;
  uVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_valueForKey__0269d128,&cf_media);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_60;
  local_60 = uVar1;
  (*(code *)PTR__objc_release_02578630)(uVar3);
  local_70[0] = 0;
  uVar1 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_60,PTR_s_valueForKey__0269d128,&cf_finderObjectBGMInfo);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_70[0];
  local_70[0] = uVar1;
  (*(code *)PTR__objc_release_02578630)(uVar3);
  local_80[0] = 0;
  uVar1 = local_70[0];
  (*(code *)PTR__objc_msgSend_02578628)(local_70[0],PTR_s_valueForKey__0269d128,&cf_musicInfo);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_80[0];
  local_80[0] = uVar1;
  (*(code *)PTR__objc_release_02578630)(uVar3);
  local_90[0] = 0;
  uVar1 = local_80[0];
  (*(code *)PTR__objc_msgSend_02578628)
            (local_80[0],PTR_s_valueForKey__0269d128,&cf_mediaStreamingUrl);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_90[0];
  local_90[0] = uVar1;
  (*(code *)PTR__objc_release_02578630)(uVar3);
  uVar3 = local_90[0];
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar3 & 1) == 0) {
LAB_00286f1c:
    local_f0 = 0;
  }
  else {
    uVar3 = local_90[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_90[0],PTR_s_length_0269cca0);
    if (uVar3 == 0) goto LAB_00286f1c;
    local_f0 = local_90[0];
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_f0;
  local_54 = 1;
  _objc_storeStrong(local_90);
  _objc_storeStrong(local_80,0);
  _objc_storeStrong(local_70,0);
  _objc_storeStrong(&local_60,0);
LAB_00287124:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

