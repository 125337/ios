// fadeInWebViewIfNeeded: @ 01e8e4dc

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRefineToDoCardView::fadeInWebViewIfNeeded_
          (WCRefineToDoCardView *this,ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  ID IVar2;
  ID IVar3;
  undefined8 uVar4;
  dispatch_time_t dVar5;
  undefined *puVar6;
  double in_d0;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_2c;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSObject_026ce188,PTR_s_cancelPreviousPerformRequestsWit_026a4988,
             local_18,PTR_s_forceWebFadeIn_026c7300,0);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_webSnapshotImageView_026c6ec0);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if ((IVar3 & 1) == 0) {
    local_2c = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_alpha_026ca4d8);
    if (in_d0 < 1.0) {
      uVar4 = DAT_028e47e0;
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028e47e0,PTR_s_copy_0269d150);
      local_38 = uVar4;
      dVar5 = _dispatch_time(0,50000000);
      puVar6 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = local_38;
      local_68 = PTR___NSConcreteStackBlock_02578660;
      local_60 = 0xc2000000;
      local_5c = 0;
      local_58 = FUN_01e8e71c;
      local_50 = &DAT_0257a7a0;
      (*(code *)PTR__objc_retain_02578638)();
      uVar1 = local_28;
      local_48 = uVar4;
      (*(code *)PTR__objc_retain_02578638)();
      local_40 = uVar1;
      _dispatch_after(dVar5,puVar6,&local_68);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      _objc_storeStrong(&local_40);
      _objc_storeStrong(&local_48,0);
      _objc_storeStrong(&local_38,0);
      local_2c = 0;
    }
    else {
      local_2c = 1;
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

