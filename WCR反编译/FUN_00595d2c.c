// FUN_00595d2c @ 00595d2c

void FUN_00595d2c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  undefined *local_e0;
  undefined8 local_d8;
  cfstringStruct *local_d0;
  undefined8 local_c8;
  undefined *local_c0;
  long local_b8;
  cfstringStruct *local_b0;
  undefined *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  long local_88;
  long local_80;
  undefined4 local_74;
  long local_70 [3];
  undefined1 local_51;
  undefined8 local_50;
  long local_48;
  long local_40;
  undefined *local_38;
  long local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_50 = param_2;
  local_48 = param_1;
  (*DAT_028cb630)(param_1,param_2);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_51 = SUB81(puVar2,0);
  if (((ulong)puVar2 & 1) != 0) {
    lVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_valueForKey__0269d128,&cf_navigationItem);
    _objc_retainAutoreleasedReturnValue();
    local_70[0] = lVar3;
    if (lVar3 == 0) {
      local_74 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_rightBarButtonItem_0269feb8);
      _objc_retainAutoreleasedReturnValue();
      local_88 = 0;
      pcVar4 = &cf_MMUICommonUtil;
      local_80 = lVar3;
      _NSClassFromString();
      local_90 = pcVar4;
      if (pcVar4 != (cfstringStruct *)0x0) {
        pcVar4 = &cf_getBarButtonWithImageName_target_action_style_accessibility_;
        _NSSelectorFromString();
        pcVar5 = local_90;
        local_98 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_respondsToSelector__026ca818,pcVar4);
        if (((ulong)pcVar5 & 1) != 0) {
          pcVar4 = local_90;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_90,PTR_s_methodSignatureForSelector__0269e190,local_98);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = PTR__OBJC_CLASS___NSInvocation_026ce208;
          local_a0 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSInvocation_026ce208,
                     PTR_s_invocationWithMethodSignature__0269e1a0,pcVar4);
          _objc_retainAutoreleasedReturnValue();
          local_a8 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setTarget__0269e1a8,local_90);
          (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setSelector__0269e1b0,local_98);
          (*(code *)PTR__objc_retain_02578638)();
          lVar3 = local_48;
          local_b0 = &cf_icons_outlined_search;
          (*(code *)PTR__objc_retain_02578638)();
          local_b8 = lVar3;
          local_c0 = PTR_s_WCRefine_onMomentsSearchButtonTa_026a5570;
          local_c8 = 2;
          (*(code *)PTR__objc_retain_02578638)();
          local_d0 = &cf_d__;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_a8,PTR_s_setArgument_atIndex__0269eae8,&local_b0,2);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_a8,PTR_s_setArgument_atIndex__0269eae8,&local_b8,3);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_a8,PTR_s_setArgument_atIndex__0269eae8,&local_c0,4);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_a8,PTR_s_setArgument_atIndex__0269eae8,&local_c8,5);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_a8,PTR_s_setArgument_atIndex__0269eae8,&local_d0,6);
          (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_invoke_0269e1b8);
          local_d8 = 0;
          (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_getReturnValue__0269e1c0,&local_d8);
          _objc_storeStrong(&local_88,local_d8);
          _objc_storeStrong(&local_d0);
          _objc_storeStrong(&local_b8,0);
          _objc_storeStrong(&local_b0,0);
          _objc_storeStrong(&local_a8,0);
          _objc_storeStrong(&local_a0,0);
        }
      }
      if ((local_80 == 0) || (local_88 == 0)) {
        if (local_88 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_70[0],PTR_s_setRightBarButtonItem__0269cf20,local_88);
        }
      }
      else {
        puVar1 = PTR__OBJC_CLASS___UIBarButtonItem_026ce058;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_initWithBarButtonSystemItem_targ_0269fea8,6,0);
        local_e0 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)(0x4010000000000000,puVar1,PTR_s_setWidth__0269feb0);
        local_40 = local_80;
        local_38 = local_e0;
        local_30 = local_88;
        puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_40,3);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_70[0],PTR_s_setRightBarButtonItems__0269eac8);
        (*(code *)PTR__objc_release_02578630)(puVar1);
        _objc_storeStrong(&local_e0,0);
      }
      _objc_storeStrong(&local_88);
      _objc_storeStrong(&local_80,0);
      local_74 = 0;
    }
    _objc_storeStrong(local_70,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

