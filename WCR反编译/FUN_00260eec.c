// FUN_00260eec @ 00260eec

void FUN_00260eec(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                 undefined8 param_5)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  dispatch_time_t dVar5;
  undefined1 auStack_a8 [8];
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulong local_70;
  ulong local_68;
  undefined1 auStack_60 [8];
  long local_58;
  ulong local_40;
  ulong local_38;
  undefined8 local_30;
  ulong local_28;
  
  local_38 = 0;
  local_30 = param_4;
  local_28 = param_3;
  _objc_storeStrong(&local_38,param_5);
  uVar3 = local_38;
  local_40 = 0xffffffffffffffff;
  puVar2 = PTR__OBJC_CLASS___UIGestureRecognizer_026ce450;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIGestureRecognizer_026ce450,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar3 & 1) != 0) {
    uVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20);
    local_40 = uVar3;
  }
  uVar1 = (uint)uVar3;
  FUN_00264438();
  if ((uVar1 & 1) != 0) {
    FUN_00264900(local_28);
  }
  uVar3 = local_28;
  (*DAT_028c94a0)(local_28,local_30,local_38);
  uVar1 = (uint)uVar3;
  FUN_00264438();
  uVar3 = local_38;
  if (((uVar1 & 1) != 0) && (local_40 == 1)) {
    puVar2 = PTR__OBJC_CLASS___UIGestureRecognizer_026ce450;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIGestureRecognizer_026ce450,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar3 & 1) != 0) {
      DAT_028c94e0 = DAT_028c94e0 + 1;
      local_58 = DAT_028c94e0;
      _objc_initWeak(auStack_60,local_28);
      uVar3 = local_38;
      (*(code *)PTR__objc_retain_02578638)();
      local_68 = uVar3;
      local_70 = 0;
      uVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_webView_026a12c0);
      if ((uVar3 & 1) != 0) {
        uVar4 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webView_026a12c0);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_70;
        local_70 = uVar4;
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
      if (local_70 == 0) {
        uVar4 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_valueForKey__0269d128,&cf_webView);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_70;
        local_70 = uVar4;
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
      uVar3 = local_70;
      puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
      if ((uVar3 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_locationInView__026ca798,0);
        local_88 = param_1;
        uStack_80 = param_2;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_locationInView__026ca798,local_70);
        local_88 = param_1;
        uStack_80 = param_2;
      }
      dVar5 = _dispatch_time(0,60000000);
      puVar2 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak();
      uStack_98 = uStack_80;
      local_a0 = local_88;
      local_90 = local_58;
      _dispatch_after(dVar5,puVar2);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      _objc_destroyWeak(auStack_a8);
      _objc_storeStrong(&local_70);
      _objc_storeStrong(&local_68,0);
      _objc_destroyWeak(auStack_60);
    }
  }
  _objc_storeStrong(&local_38,0);
  return;
}

