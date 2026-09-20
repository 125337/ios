// FUN_006e705c @ 006e705c

void FUN_006e705c(float param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  dispatch_time_t dVar5;
  double local_148;
  double local_128;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  long local_80;
  double local_78;
  double local_70;
  float local_68;
  byte local_61;
  undefined *local_60;
  byte local_51;
  undefined *local_50;
  undefined4 local_48;
  long local_38;
  long local_30;
  long local_28;
  
  local_30 = param_2;
  local_28 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_2 + 0x20),PTR_s_setInvalidated__026a6d70,1);
  lVar1 = *(long *)(param_2 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_containerView_026a6d08);
  _objc_retainAutoreleasedReturnValue();
  local_38 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_superview_026cab50);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (lVar1 == 0) {
    local_48 = 1;
  }
  else {
    local_51 = 0;
    local_61 = 0;
    if ((*(byte *)(param_2 + 0x30) & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemRedColor_0269ee10);
      _objc_retainAutoreleasedReturnValue();
      local_61 = 1;
      local_60 = puVar2;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemGreenColor_026cab70);
      _objc_retainAutoreleasedReturnValue();
      local_51 = 1;
      local_50 = puVar2;
    }
    uVar3 = *(undefined8 *)(param_2 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_progressView_026a6d60);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar3);
    if ((local_61 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    if ((local_51 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_2 + 0x28),PTR_s_length_0269cca0);
    uVar3 = *(undefined8 *)(param_2 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_titleLabel_026caba0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar3 = *(undefined8 *)(param_2 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_progressView_026a6d60);
    _objc_retainAutoreleasedReturnValue();
    if ((*(byte *)(param_2 + 0x30) & 1) == 0) {
      uVar4 = *(undefined8 *)(param_2 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_progressView_026a6d60);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar4);
      local_70 = DAT_02323c90;
      if (DAT_02323c90 <= (double)param_1) {
        local_148 = (double)param_1;
      }
      else {
        local_148 = DAT_02323c90;
      }
      local_78 = local_148;
      local_128 = local_148;
      local_68 = param_1;
    }
    else {
      local_128 = 1.0;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              ((float)local_128,uVar3,PTR_s_setProgress_animated__026a6d68,1);
    (*(code *)PTR__objc_release_02578630)(uVar3);
    dVar5 = _dispatch_time(0,750000000);
    puVar2 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_38;
    local_a0 = PTR___NSConcreteStackBlock_02578660;
    local_98 = 0xc2000000;
    local_94 = 0;
    local_90 = FUN_006e76b4;
    local_88 = &DAT_02578c20;
    (*(code *)PTR__objc_retain_02578638)();
    local_80 = lVar1;
    _dispatch_after(dVar5,puVar2,&local_a0);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_storeStrong(&local_80,0);
    local_48 = 0;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

