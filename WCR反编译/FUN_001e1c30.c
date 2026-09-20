// FUN_001e1c30 @ 001e1c30

void FUN_001e1c30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,ulong param_6,long param_7)

{
  undefined8 uVar1;
  uint uVar2;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong local_b0;
  ulong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  ulong local_88;
  ulong local_80;
  long lStack_78;
  ulong local_68;
  ulong local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulong local_38;
  ulong local_30;
  long lStack_28;
  ulong *puVar3;
  
  puVar3 = &local_38;
  local_38 = 0;
  local_30 = param_6;
  lStack_28 = param_7;
  _objc_storeStrong(puVar3,param_5);
  uVar2 = (uint)puVar3;
  FUN_001cf94c();
  if (((uVar2 & 1) == 0) || (local_38 == 0)) {
    local_48 = 1;
  }
  else {
    uVar4 = local_38;
    FUN_001d2ddc();
    if ((uVar4 & 1) == 0) {
      FUN_001dac54();
      uVar4 = local_38;
      local_50 = param_1;
      FUN_001d5a74();
      local_50 = param_1;
      FUN_001e2514();
      local_58 = param_1;
      FUN_001e3d8c();
      _objc_retainAutoreleasedReturnValue();
      lStack_78 = lStack_28;
      local_80 = local_30;
      uVar5 = local_30;
      uVar7 = local_30;
      local_60 = uVar4;
      FUN_001e400c(local_30,lStack_28);
      local_68 = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
      uVar4 = local_68;
      local_a8 = uVar7;
      local_a0 = param_2;
      local_98 = param_3;
      local_90 = param_4;
      FUN_001e40a8(uVar7,param_2,param_3,param_4,local_50,local_58,local_68,local_60);
      uVar5 = local_38;
      local_88 = uVar4;
      _objc_getAssociatedObject(local_38,DAT_026dfa88);
      _objc_retainAutoreleasedReturnValue();
      local_b0 = uVar5;
      if (((uVar5 == 0) ||
          ((*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_unsignedIntegerValue_026cabb8),
          uVar5 != local_88)) ||
         (uVar4 = local_38, FUN_001e41dc(0,local_50,local_58,local_38,local_30,lStack_28),
         (uVar4 & 1) == 0)) {
        uVar4 = local_38;
        uVar1 = DAT_026dfa88;
        puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,
                   local_88);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(uVar4,uVar1,puVar6,1);
        (*(code *)PTR__objc_release_02578630)(puVar6);
        uVar4 = local_30;
        FUN_001e488c(local_30,lStack_28);
        if ((uVar4 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_begin_026ca520);
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_setDisableActions__026ca918,1);
          uVar4 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(0);
          (*(code *)PTR__objc_release_02578630)(uVar4);
          puVar6 = PTR__OBJC_CLASS___UIColor_026cdf78;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
          _objc_retainAutoreleasedReturnValue();
          _objc_retainAutorelease();
          (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_CGColor_026ca470);
          uVar4 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar4);
          (*(code *)PTR__objc_release_02578630)(puVar6);
          uVar1 = local_50;
          if (lStack_28 == 0) {
            uVar4 = local_38;
            (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_layer_026ca788);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(0);
            (*(code *)PTR__objc_release_02578630)(uVar4);
            uVar4 = local_38;
            (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_layer_026ca788);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(uVar4);
          }
          else {
            uVar4 = local_38;
            (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_layer_026ca788);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(uVar1);
            (*(code *)PTR__objc_release_02578630)(uVar4);
            uVar4 = local_38;
            (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_layer_026ca788);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(uVar4);
          }
          uVar4 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar4);
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setClipsToBounds__026ca8c8,1);
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_commit_026ca580);
          _objc_setAssociatedObject(local_38,DAT_026dfa78,0,1);
          _objc_setAssociatedObject(local_38,DAT_026dfa80,0,1);
          FUN_001e4914(local_50,local_58,local_38,local_30,lStack_28,local_60);
          local_48 = 0;
        }
        else {
          FUN_001d9428(local_38);
          local_48 = 1;
        }
      }
      else {
        local_48 = 1;
      }
      _objc_storeStrong(&local_b0);
      _objc_storeStrong(&local_60,0);
    }
    else {
      FUN_001d6720(local_38);
      local_48 = 1;
    }
  }
  _objc_storeStrong(&local_38,0);
  return;
}

