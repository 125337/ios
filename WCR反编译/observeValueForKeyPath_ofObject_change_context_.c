// observeValueForKeyPath:ofObject:change:context: @ 01fc98c4

/* Function Stack Size: 0x30 bytes */

void __thiscall
WebViewController::observeValueForKeyPath_ofObject_change_context_
          (WebViewController *this,ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,
          void *param_6)

{
  undefined1 uVar1;
  bool bVar2;
  ulong uVar3;
  ID IVar4;
  ID IVar5;
  dispatch_time_t dVar6;
  undefined *puVar7;
  double in_d0;
  double dVar8;
  ID local_98;
  undefined *local_90;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  ID local_68;
  undefined1 local_59;
  ID local_58;
  void *local_50;
  undefined8 local_48;
  ID local_40;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  uVar3 = local_38;
  local_50 = param_6;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_isEqualToString__0269ccc8,&cf_estimatedProgress);
  IVar5 = local_40;
  local_59 = 0;
  bVar2 = false;
  uVar1 = (uVar3 & 1) != 0;
  if ((bool)uVar1) {
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webView_026a12c0);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = IVar5 == IVar4;
    local_59 = uVar1;
    local_58 = IVar4;
    (*(code *)PTR__objc_release_02578630)(IVar4);
    uVar1 = local_59;
  }
  local_59 = uVar1;
  if (bVar2) {
    IVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_progressView_026a6d60);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webView_026a12c0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    dVar8 = (double)(ulong)(uint)(float)in_d0;
    (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_setProgress_animated__026a6d68,1);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_release_02578630)(IVar5);
    IVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webView_026a12c0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar5);
    if (dVar8 < 1.0) {
      IVar5 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_progressView_026a6d60);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar5);
    }
    else {
      dVar6 = _dispatch_time(0,300000000);
      puVar7 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      IVar5 = local_28;
      local_88 = PTR___NSConcreteStackBlock_02578660;
      local_80 = 0xc2000000;
      local_7c = 0;
      local_78 = FUN_01fc9c80;
      local_70 = &DAT_0257a800;
      (*(code *)PTR__objc_retain_02578638)();
      local_68 = IVar5;
      _dispatch_after(dVar6,puVar7,&local_88);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      _objc_storeStrong(&local_68,0);
    }
  }
  else {
    local_98 = local_28;
    local_90 = PTR_WebViewController_026d02d0;
    _objc_msgSendSuper2(&local_98,PTR_s_observeValueForKeyPath_ofObject__026ca270,local_38,local_40,
                        local_48,local_50);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

