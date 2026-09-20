// FUN_0052ec34 @ 0052ec34

void FUN_0052ec34(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 *local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_20 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_momentsSpecialFollowAction_026a4ba8);
  local_38 = puVar2;
  if ((puVar2 == (undefined1 *)0x0) || (puVar2 == (undefined1 *)((long)&MACH_HEADER.magic + 2))) {
    _WCRefineSpecialFollowRepostMoment(0,local_18);
  }
  if ((local_38 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) ||
     (local_38 == (undefined1 *)((long)&MACH_HEADER.magic + 2))) {
    puVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_momentsSpecialFollowTargetSessio_026a4bb0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    if (puVar3 == (undefined1 *)0x0) {
      _objc_storeStrong(&local_40,&cf_filehelper);
    }
    uVar1 = local_18;
    puVar3 = local_40;
    uVar5 = local_18;
    FUN_0052f9d8();
    _objc_retainAutoreleasedReturnValue();
    _WCRefineSpecialFollowForwardMomentToChat(uVar1,puVar3);
    (*(code *)PTR__objc_release_02578630)(uVar5);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

