// FUN_001f7fa4 @ 001f7fa4

double FUN_001f7fa4(undefined8 param_1,double param_2,double param_3,undefined8 param_4,
                   undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  double dVar4;
  double dVar5;
  double local_1a8;
  uint local_15c;
  undefined *local_e0;
  ulong local_d8;
  undefined8 local_d0;
  double dStack_c8;
  undefined8 local_c0;
  double dStack_b8;
  ulong local_b0;
  ulong local_a8;
  ulong local_a0;
  double local_98;
  double local_90;
  double local_88;
  undefined8 local_80;
  undefined8 local_78;
  double local_70;
  double local_68;
  undefined8 local_60;
  double local_58;
  ulong local_40;
  int local_34;
  ulong local_30;
  double local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_5);
  if (local_30 == 0) {
    local_28 = 5.0;
    local_34 = 1;
    goto LAB_001f861c;
  }
  uVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_superview_026cab50);
  _objc_retainAutoreleasedReturnValue();
  local_40 = uVar1;
  if (uVar1 == 0) {
LAB_001f8130:
    uVar1 = local_30;
    (*(code *)PTR__objc_retain_02578638)();
    local_a0 = uVar1;
    while( true ) {
      local_15c = 0;
      if (local_a0 != 0) {
        uVar1 = local_a0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_a0,PTR_s_respondsToSelector__026ca818,PTR_s_viewModel_0269d080);
        local_15c = (uint)uVar1 ^ 1;
      }
      if ((local_15c & 1) == 0) break;
      uVar2 = local_a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_a0;
      local_a0 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    if ((local_a0 == 0) ||
       (uVar1 = local_a0,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_a0,PTR_s_respondsToSelector__026ca818,PTR_s_viewModel_0269d080),
       (uVar1 & 1) == 0)) {
LAB_001f85c8:
      local_28 = 5.0;
      local_34 = 1;
    }
    else {
      uVar1 = local_a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_viewModel_0269d080);
      _objc_retainAutoreleasedReturnValue();
      local_a8 = uVar1;
      if ((uVar1 == 0) ||
         ((*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_bgBubbleInfo_026a03c8),
         (uVar1 & 1) == 0)) {
LAB_001f8594:
        local_34 = 0;
      }
      else {
        uVar1 = local_a8;
        (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_bgBubbleInfo_026a03c8);
        _objc_retainAutoreleasedReturnValue();
        local_b0 = uVar1;
        if ((uVar1 == 0) ||
           ((*(code *)PTR__objc_msgSend_02578628)
                      (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_margin_026a03d0),
           (uVar1 & 1) == 0)) {
LAB_001f8560:
          local_34 = 0;
        }
        else {
          dStack_c8 = *(double *)(PTR__UIEdgeInsetsZero_02578118 + 8);
          local_d0 = *(undefined8 *)PTR__UIEdgeInsetsZero_02578118;
          dStack_b8 = *(double *)(PTR__UIEdgeInsetsZero_02578118 + 0x18);
          local_c0 = *(undefined8 *)(PTR__UIEdgeInsetsZero_02578118 + 0x10);
          uVar1 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b0,PTR_s_methodSignatureForSelector__0269e190,PTR_s_margin_026a03d0);
          _objc_retainAutoreleasedReturnValue();
          local_d8 = uVar1;
          if (uVar1 == 0) {
LAB_001f852c:
            local_34 = 0;
          }
          else {
            puVar3 = PTR__OBJC_CLASS___NSInvocation_026ce208;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSInvocation_026ce208,
                       PTR_s_invocationWithMethodSignature__0269e1a0,uVar1);
            _objc_retainAutoreleasedReturnValue();
            local_e0 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar3,PTR_s_setSelector__0269e1b0,PTR_s_margin_026a03d0);
            (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_setTarget__0269e1a8,local_b0);
            (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_invoke_0269e1b8);
            (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_getReturnValue__0269e1c0,&local_d0)
            ;
            if (dStack_b8 <= dStack_c8) {
              local_1a8 = dStack_c8;
            }
            else {
              local_1a8 = dStack_b8;
            }
            if ((local_1a8 <= 0.5) || (20.0 <= local_1a8)) {
              local_34 = 0;
            }
            else {
              local_28 = local_1a8;
              local_34 = 1;
            }
            _objc_storeStrong(&local_e0,0);
            if (local_34 == 0) goto LAB_001f852c;
          }
          _objc_storeStrong(&local_d8,0);
          if (local_34 == 0) goto LAB_001f8560;
        }
        _objc_storeStrong(&local_b0,0);
        if (local_34 == 0) goto LAB_001f8594;
      }
      _objc_storeStrong(&local_a8,0);
      if (local_34 == 0) goto LAB_001f85c8;
    }
    _objc_storeStrong(&local_a0,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
    dVar4 = param_3;
    dVar5 = param_3;
    local_78 = param_1;
    local_70 = param_2;
    local_68 = param_3;
    local_60 = param_4;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bounds_026ca548);
    local_58 = param_3 - param_2;
    local_98 = dVar4;
    local_90 = dVar5;
    local_88 = param_2;
    local_80 = param_1;
    if ((local_58 <= 0.5) || (20.0 <= local_58)) goto LAB_001f8130;
    local_34 = 1;
    local_28 = local_58;
  }
  _objc_storeStrong(&local_40,0);
LAB_001f861c:
  _objc_storeStrong(&local_30,0);
  return local_28;
}

