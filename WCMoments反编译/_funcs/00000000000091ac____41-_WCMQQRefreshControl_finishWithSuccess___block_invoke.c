// ___41-[WCMQQRefreshControl_finishWithSuccess:]_block_invoke @0x91ac

void ___41__WCMQQRefreshControl_finishWithSuccess___block_invoke(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 local_c8;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  undefined1 auStack_40 [8];
  undefined8 local_38;
  long local_30;
  long local_28;
  
  local_30 = param_1;
  local_28 = param_1;
  uVar1 = _objc_loadWeakRetained(param_1 + 0x20);
  lVar2 = _objc_msgSend_qqFeedbackGeneration(uVar1,local_c8);
  lVar4 = *(long *)(param_1 + 0x28);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  if (lVar2 == lVar4) {
    uVar3 = _UIAccessibilityIsReduceMotionEnabled(0);
    local_90 = PTR___NSConcreteStackBlock_001104f0;
    uVar1 = 0;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0x3fcc28f5c28f5c29;
    }
    local_60 = PTR___NSConcreteStackBlock_001104f0;
    local_58 = 0xc2000000;
    local_54 = 0;
    local_50 = ___41__WCMQQRefreshControl_finishWithSuccess___block_invoke_2;
    local_48 = &___block_descriptor_40_e8_32w_e5_v8__0l;
    local_38 = uVar1;
    _objc_copyWeak(auStack_40,param_1 + 0x20);
    local_88 = 0xc2000000;
    local_84 = 0;
    local_80 = ___41__WCMQQRefreshControl_finishWithSuccess___block_invoke_223;
    local_78 = &___block_descriptor_48_e8_32w_e8_v12__0B8l;
    _objc_copyWeak(auStack_70,param_1 + 0x20);
    local_68 = *(undefined8 *)(param_1 + 0x28);
    _objc_msgSend_animateWithDuration_delay_options_animations_completion_
              (uVar1,0,&_OBJC_CLASS___UIView,local_c8,0x20004,&local_60,&local_90);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_40);
  }
  return;
}

