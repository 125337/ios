// dismissToastWithAnimation: @ 01715498

/* Function Stack Size: 0x14 bytes */

void ToastManager::dismissToastWithAnimation_(ID param_1,SEL param_2,bool param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  uint local_104;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  code *local_b0;
  undefined *local_a8;
  ID local_a0;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  ID local_78 [3];
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  ID local_40;
  byte local_38;
  byte local_31;
  SEL local_30;
  ID local_28;
  
  local_31 = (byte)param_3;
  puVar1 = PTR__OBJC_CLASS___NSThread_026ce0a8;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
  puVar2 = PTR___dispatch_main_q_02578680;
  if (((ulong)puVar1 & 1) == 0) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_28;
    local_60 = PTR___NSConcreteStackBlock_02578660;
    local_58 = 0xc2000000;
    local_54 = 0;
    local_50 = FUN_01715940;
    local_48 = &DAT_0257b488;
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = IVar3;
    local_38 = local_31 & 1;
    _dispatch_async(puVar2,&local_60);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_storeStrong(&local_40,0);
  }
  else {
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_dismissTimer_026b3950);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (IVar3 != 0) {
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_dismissTimer_026b3950);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setDismissTimer__026b3930,0);
    }
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentToastView_026b3958);
    _objc_retainAutoreleasedReturnValue();
    local_104 = 1;
    if (IVar3 != 0) {
      IVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isAnimating_026a8e78);
      local_104 = (uint)IVar4;
    }
    (*(code *)PTR__objc_release_02578630)(IVar3);
    if ((local_104 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setIsAnimating__026b3938,1);
      IVar3 = local_28;
      puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
      puVar2 = PTR___NSConcreteStackBlock_02578660;
      if ((local_31 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setIsAnimating__026b3938,0);
        IVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentToastView_026b3958);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar3);
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setCurrentToastView__026b3928,0);
      }
      else {
        local_98 = PTR___NSConcreteStackBlock_02578660;
        local_90 = 0xc2000000;
        local_8c = 0;
        local_88 = FUN_0171598c;
        local_80 = &DAT_02578c20;
        (*(code *)PTR__objc_retain_02578638)();
        IVar4 = local_28;
        local_78[0] = IVar3;
        local_c0 = puVar2;
        local_b8 = 0xc2000000;
        local_b4 = 0;
        local_b0 = FUN_01715a30;
        local_a8 = &DAT_025790c0;
        (*(code *)PTR__objc_retain_02578638)();
        local_a0 = IVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (DAT_02324020,puVar1,PTR_s_animateWithDuration_animations_c_026ca4e8,&local_98,
                   &local_c0);
        _objc_storeStrong(&local_a0);
        _objc_storeStrong(local_78,0);
      }
    }
  }
  return;
}

