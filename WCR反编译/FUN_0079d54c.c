// FUN_0079d54c @ 0079d54c

void FUN_0079d54c(undefined8 param_1)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  ulong local_30;
  uint local_28;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar3 = local_18;
  if (local_18 != 0) {
    pcVar2 = &cf_MainFrameTableView;
    _NSClassFromString();
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,pcVar2);
    if ((uVar3 & 1) != 0) {
      uVar4 = local_18;
      _objc_getAssociatedObject(local_18,&_kWCGlobalCornerFollowRelayoutScheduledKey);
      _objc_retainAutoreleasedReturnValue();
      local_30 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_boolValue_026ca540);
      uVar3 = local_18;
      bVar1 = (uVar4 & 1) == 0;
      if (bVar1) {
        puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(uVar3,&_kWCGlobalCornerFollowRelayoutScheduledKey,puVar5,1);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        _objc_initWeak(auStack_38,local_18);
        puVar5 = PTR___dispatch_main_q_02578680;
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        local_60 = PTR___NSConcreteStackBlock_02578660;
        local_58 = 0xc2000000;
        local_54 = 0;
        local_50 = FUN_007a12b8;
        local_48 = &DAT_02578da0;
        _objc_copyWeak(auStack_40,auStack_38);
        _dispatch_async(puVar5,&local_60);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        _objc_destroyWeak(auStack_40);
        _objc_destroyWeak(auStack_38);
      }
      local_28 = (uint)!bVar1;
      _objc_storeStrong(&local_30,0);
      goto LAB_0079d778;
    }
  }
  local_28 = 1;
LAB_0079d778:
  _objc_storeStrong(&local_18,0);
  return;
}

