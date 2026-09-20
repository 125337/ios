// wcr_noteSwipe: @ 01dbd9c8

/* Function Stack Size: 0x18 bytes */

void WCRefineSessionStatsLayoutViewController::wcr_noteSwipe_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  ID IVar2;
  dispatch_time_t dVar3;
  undefined *puVar4;
  double in_d0;
  double in_d1;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  double local_38;
  double local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_state_026cab20);
  if ((lVar1 == 1) ||
     (lVar1 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_state_026cab20),
     lVar1 == 2)) {
    lVar1 = local_28;
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_table_026c4cf0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_translationInView__026cabb0);
    local_38 = in_d0;
    local_30 = in_d1;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    if ((10.0 < ABS(local_38)) && (ABS(local_30) * 1.2 < ABS(local_38))) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setSwipeArmed__026c51d0,1);
    }
  }
  else {
    lVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_state_026cab20);
    if (((lVar1 == 3) ||
        (lVar1 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_state_026cab20),
        lVar1 == 4)) ||
       (lVar1 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_state_026cab20),
       lVar1 == 5)) {
      _objc_initWeak(0,auStack_40,local_18);
      dVar3 = _dispatch_time(0,350000000);
      puVar4 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      local_68 = PTR___NSConcreteStackBlock_02578660;
      local_60 = 0xc2000000;
      local_5c = 0;
      local_58 = FUN_01dbdc4c;
      local_50 = &DAT_0257be28;
      _objc_copyWeak(auStack_48,auStack_40);
      _dispatch_after(dVar3,puVar4,&local_68);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      _objc_destroyWeak(auStack_48);
      _objc_destroyWeak(auStack_40);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

