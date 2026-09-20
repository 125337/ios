// FUN_0089b48c @ 0089b48c

void FUN_0089b48c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined8 local_48;
  uint local_40;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  FUN_0088fb40();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  uVar4 = local_30;
  bVar1 = puVar3 == (undefined1 *)((long)&MACH_HEADER.magic + 1);
  if (bVar1) {
    puVar2 = PTR__OBJC_CLASS___UIImage_026cdfd0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_class_0269cd60);
    local_68 = PTR___NSConcreteStackBlock_02578660;
    local_60 = 0xc0000000;
    local_5c = 0;
    local_58 = FUN_008a61ec;
    local_50 = &DAT_02580c80;
    local_48 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar4,PTR_s_loadObjectsOfClass_completion__026a9890,puVar2,&local_68);
    _objc_unsafeClaimAutoreleasedReturnValue(uVar4);
  }
  local_40 = (uint)!bVar1;
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

