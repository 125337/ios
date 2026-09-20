// FUN_005b0b48 @ 005b0b48

void FUN_005b0b48(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  dispatch_queue_t pdVar4;
  ulong uVar5;
  ulong uVar6;
  char *pcVar7;
  cfstringStruct *pcVar8;
  char *pcVar9;
  long lVar10;
  long local_b0;
  ulong local_a8;
  char *local_a0;
  cfstringStruct *local_98;
  char *local_90;
  ulong local_88;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  ulong local_60;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  int local_48;
  ulong local_38;
  undefined8 local_30;
  long local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  uVar2 = local_38;
  FUN_005a305c();
  if ((uVar2 & 1) == 0) {
    uVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_valueForKey__0269d128,&cf_contentObj);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar5);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    local_88 = uVar6;
    if (uVar6 - 1 == 0) {
      FUN_005cfa3c(local_28,local_38);
      local_48 = 1;
    }
    else {
      pcVar7 = "WCForwardViewController";
      _objc_getClass(uVar6 - 1);
      local_90 = pcVar7;
      if (pcVar7 == (char *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_RNS_u);
        local_48 = 1;
      }
      else {
        pcVar8 = &cf_initWithDataItem_;
        _NSSelectorFromString();
        pcVar7 = local_90;
        local_98 = pcVar8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_90,PTR_s_instancesRespondToSelector__0269da90,pcVar8);
        if (((ulong)pcVar7 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_RNS_u);
          local_48 = 1;
        }
        else {
          pcVar7 = local_90;
          _objc_alloc();
          pcVar9 = pcVar7;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar7,local_98,local_38);
          _objc_retainAutoreleasedReturnValue();
          local_a0 = pcVar9;
          (*(code *)PTR__objc_release_02578630)(pcVar7);
          if (local_a0 == (char *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_R__hV1Y_);
            local_48 = 1;
          }
          else {
            _WCRefineMarkMomentsForwardEditor(local_a0,local_38);
            uVar2 = local_38;
            FUN_005d07f4();
            _objc_retainAutoreleasedReturnValue();
            local_a8 = uVar2;
            FUN_005d0aa8(local_a0,uVar2);
            lVar10 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_28,PTR_s_WCRefine_findViewController_026a5820);
            _objc_retainAutoreleasedReturnValue();
            bVar1 = false;
            local_b0 = lVar10;
            if (lVar10 != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(lVar10,PTR_s_navigationController_0269d458);
              _objc_retainAutoreleasedReturnValue();
              bVar1 = lVar10 != 0;
              (*(code *)PTR__objc_release_02578630)(lVar10);
            }
            if (bVar1) {
              lVar10 = local_b0;
              (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_navigationController_0269d458);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(lVar10);
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_Sb);
            }
            _objc_storeStrong(&local_b0);
            _objc_storeStrong(&local_a8,0);
            local_48 = 0;
          }
          _objc_storeStrong(&local_a0,0);
          if (local_48 == 0) {
            local_48 = 0;
          }
        }
      }
    }
  }
  else {
    uVar2 = local_38;
    FUN_005a32d4();
    if ((uVar2 & 1) == 0) {
      uVar5 = local_38;
      _objc_getAssociatedObject(local_38,&DAT_028cb783);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      uVar2 = local_38;
      if (uVar5 == 0) {
        puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(uVar2,&DAT_028cb783,puVar3,1);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        FUN_005d00cc(local_38);
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_ck_WN__QV_);
        _objc_initWeak(auStack_50,local_28);
        pdVar4 = _dispatch_get_global_queue(0,0);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_38;
        local_80 = PTR___NSConcreteStackBlock_02578660;
        local_78 = 0xc2000000;
        local_74 = 0;
        local_70 = FUN_005d0448;
        local_68 = &DAT_025797f0;
        (*(code *)PTR__objc_retain_02578638)();
        local_60 = uVar2;
        _objc_copyWeak(auStack_58,auStack_50);
        _dispatch_async(pdVar4,&local_80);
        (*(code *)PTR__objc_release_02578630)(pdVar4);
        local_48 = 1;
        _objc_destroyWeak(auStack_58);
        _objc_storeStrong(&local_60,0);
        _objc_destroyWeak(auStack_50);
      }
      else {
        local_48 = 1;
      }
    }
    else {
      FUN_005cfa3c(local_28,local_38);
      local_48 = 1;
    }
  }
  _objc_storeStrong(&local_38,0);
  return;
}

