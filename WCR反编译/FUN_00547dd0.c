// FUN_00547dd0 @ 00547dd0

void FUN_00547dd0(ulong param_1,undefined8 param_2,byte param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined *local_60;
  undefined *local_58;
  undefined1 *local_50;
  undefined4 local_44;
  undefined1 *local_40 [3];
  byte local_21;
  undefined8 local_20;
  ulong local_18;
  
  local_21 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*DAT_028cb3c0)(param_1,param_2,param_3 & 1);
  uVar1 = local_18;
  _objc_getAssociatedObject(local_18,&DAT_028cb441);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if ((uVar2 & 1) == 0) {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_40[0] = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_momentsLongPressCommentEnabled_026a4fa8);
    if (((ulong)puVar3 & 1) == 0) {
      local_44 = 1;
    }
    else {
      puVar4 = local_40[0];
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40[0],PTR_s_momentsLongPressGestureAction_026a4fb0);
      uVar1 = local_18;
      local_50 = puVar4;
      if (puVar4 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
        puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(uVar1,&DAT_028cb441,puVar3,1);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        puVar3 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_026ce220;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_initWithTarget_action__026ca718,local_18,
                   PTR_s_WCRefine_commentDetailLongPress__026a4e48);
        local_58 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (0x3fe0000000000000,puVar3,PTR_s_setMinimumPressDuration__026ca9c8);
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setCancelsTouchesInView__026ca8b8,0);
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setDelaysTouchesBegan__026a1af0,0);
        puVar3 = PTR_WCRefineCommentDetailLongPressGestureDelegate_026ce758;
        _objc_alloc_init();
        uVar1 = local_18;
        local_60 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setHostView__026a4fb8);
        (*(code *)PTR__objc_release_02578630)(uVar1);
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setDelegate__026ca910,local_60);
        _objc_setAssociatedObject(local_18,&DAT_028cb442,local_58,1);
        _objc_setAssociatedObject(local_18,&DAT_028cb443,local_60,1);
        uVar1 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar1);
        _objc_storeStrong(&local_60);
        _objc_storeStrong(&local_58,0);
        local_44 = 0;
      }
      else {
        local_44 = 1;
      }
    }
    _objc_storeStrong(local_40,0);
  }
  return;
}

