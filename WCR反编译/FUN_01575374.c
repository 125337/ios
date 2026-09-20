// FUN_01575374 @ 01575374

byte FUN_01575374(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  char *pcVar2;
  cfstringStruct *pcVar3;
  char *pcVar4;
  undefined *puVar5;
  long lVar6;
  dispatch_time_t dVar7;
  uint local_ec;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  code *local_a8;
  undefined *local_a0;
  char *local_98;
  long local_90;
  byte local_81;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  char *local_60;
  undefined4 local_54;
  cfstringStruct *local_50;
  char *local_48;
  long local_40;
  undefined8 local_38;
  long local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  lVar1 = local_30;
  FUN_015769f8();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = "WCNewCommitViewController";
  local_40 = lVar1;
  _objc_getClass();
  pcVar3 = &cf_initWithImages_contacts_;
  local_48 = pcVar2;
  _NSSelectorFromString();
  lVar1 = local_40;
  local_50 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_count_0269cfe0);
  if (((lVar1 == 0) || (local_48 == (char *)0x0)) ||
     (pcVar2 = local_48,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_48,PTR_s_instancesRespondToSelector__0269da90,local_50),
     ((ulong)pcVar2 & 1) == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__QVlSNS_u);
    local_21 = 0;
    local_54 = 1;
  }
  else {
    pcVar2 = local_48;
    _objc_alloc();
    pcVar4 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_60 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_60;
    puVar5 = PTR__OBJC_CLASS___UIViewController_026cdf80;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar5);
    if (((ulong)pcVar2 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_R_lSub1Y_);
      local_21 = 0;
      local_54 = 1;
    }
    else {
      _WCRefineMarkMomentsForwardEditor(local_60,local_30);
      pcVar2 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_respondsToSelector__026ca818,PTR_s_setType__026a3cb8);
      if (((ulong)pcVar2 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setType__026a3cb8,1);
      }
      lVar1 = local_30;
      FUN_01566074(local_30,&cf_locationInfo);
      _objc_retainAutoreleasedReturnValue();
      local_68 = lVar1;
      if (lVar1 != 0) {
        FUN_01563e1c(local_60,&cf_poiInfo,lVar1);
      }
      pcVar2 = local_60;
      pcVar3 = &cf_setBNeedAnimation_;
      _NSSelectorFromString(&cf_setBNeedAnimation_);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_respondsToSelector__026ca818,pcVar3);
      pcVar4 = local_60;
      if (((ulong)pcVar2 & 1) != 0) {
        pcVar3 = &cf_setBNeedAnimation_;
        _NSSelectorFromString(&cf_setBNeedAnimation_);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar4,pcVar3,0);
      }
      lVar1 = local_30;
      FUN_01533eb8(local_30,&cf_contentDesc);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = local_30;
      local_70 = lVar1;
      FUN_01566074(local_30,&cf_contentObj);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_70;
      local_78 = lVar6;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
      if (lVar1 == 0) {
        lVar6 = local_78;
        FUN_01533eb8(local_78,&cf_desc);
        _objc_retainAutoreleasedReturnValue();
        lVar1 = local_70;
        local_70 = lVar6;
        (*(code *)PTR__objc_release_02578630)(lVar1);
      }
      lVar1 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_lowercaseString_0269d9c0);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = local_70;
      local_80 = lVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
      local_ec = 1;
      if (lVar6 != 0) {
        lVar1 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_isEqualToString__0269ccc8,&cf_sight);
        local_ec = (uint)lVar1;
      }
      local_81 = (byte)local_ec & 1;
      if ((local_ec & 1) == 0) {
        dVar7 = _dispatch_time(0,300000000);
        puVar5 = PTR___dispatch_main_q_02578680;
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_60;
        local_b8 = PTR___NSConcreteStackBlock_02578660;
        local_b0 = 0xc2000000;
        local_ac = 0;
        local_a8 = FUN_0157701c;
        local_a0 = &DAT_0257a7a0;
        (*(code *)PTR__objc_retain_02578638)();
        lVar1 = local_70;
        local_98 = pcVar2;
        (*(code *)PTR__objc_retain_02578638)();
        local_90 = lVar1;
        _dispatch_after(dVar7,puVar5,&local_b8);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        _objc_storeStrong(&local_90);
        _objc_storeStrong(&local_98,0);
      }
      FUN_01572904(local_38,local_60);
      local_21 = 1;
      local_54 = 1;
      _objc_storeStrong(&local_80);
      _objc_storeStrong(&local_78,0);
      _objc_storeStrong(&local_70,0);
      _objc_storeStrong(&local_68,0);
    }
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

