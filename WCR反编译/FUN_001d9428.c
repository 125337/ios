// FUN_001d9428 @ 001d9428

void FUN_001d9428(double param_1,undefined8 param_2)

{
  undefined8 uVar1;
  double dVar2;
  uint uVar3;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  double local_50;
  double local_48;
  ulong local_40;
  undefined4 local_38;
  ulong local_28;
  ulong *puVar4;
  
  puVar4 = &local_28;
  local_28 = 0;
  _objc_storeStrong(puVar4,param_2);
  uVar3 = (uint)puVar4;
  FUN_001cf94c();
  if (((uVar3 & 1) == 0) || (local_28 == 0)) {
    local_38 = 1;
  }
  else {
    uVar5 = local_28;
    FUN_001d2ddc();
    if ((uVar5 & 1) == 0) {
      FUN_001dac54();
      uVar5 = local_28;
      local_48 = param_1;
      FUN_001d5a74();
      local_48 = param_1;
      FUN_001e2514();
      local_50 = param_1;
      FUN_001e3d8c();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = local_28;
      local_58 = uVar5;
      FUN_001dad4c(local_48,local_50,local_28,uVar5,1);
      uVar5 = local_28;
      local_60 = uVar6;
      _objc_getAssociatedObject(local_28,DAT_026dfa78);
      _objc_retainAutoreleasedReturnValue();
      local_68 = uVar5;
      if (((uVar5 == 0) ||
          ((*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_unsignedIntegerValue_026cabb8),
          uVar5 != local_60)) ||
         (uVar5 = local_28, FUN_001e5330(0,local_48,local_50), (uVar5 & 1) == 0)) {
        FUN_001da018(local_28);
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_begin_026ca520);
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_setDisableActions__026ca918,1);
        dVar2 = local_48;
        uVar5 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(dVar2);
        (*(code *)PTR__objc_release_02578630)(uVar5);
        uVar5 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar5);
        uVar5 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar5);
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setClipsToBounds__026ca8c8,1);
        dVar2 = local_50;
        if (local_50 <= 0.0) {
          uVar5 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(0);
          (*(code *)PTR__objc_release_02578630)(uVar5);
          puVar7 = PTR__OBJC_CLASS___UIColor_026cdf78;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
          _objc_retainAutoreleasedReturnValue();
          _objc_retainAutorelease();
          (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_CGColor_026ca470);
          uVar5 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar5);
          (*(code *)PTR__objc_release_02578630)(puVar7);
        }
        else {
          uVar5 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(dVar2);
          (*(code *)PTR__objc_release_02578630)(uVar5);
          uVar5 = local_58;
          _objc_retainAutorelease();
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_CGColor_026ca470);
          uVar5 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar5);
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_commit_026ca580);
        uVar5 = local_28;
        uVar1 = DAT_026dfa78;
        puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,
                   local_60);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(uVar5,uVar1,puVar7,1);
        (*(code *)PTR__objc_release_02578630)(puVar7);
        _objc_setAssociatedObject(local_28,DAT_026dfa80,0,1);
        _objc_setAssociatedObject(local_28,DAT_026dfa90,0,1);
        local_38 = 0;
      }
      else {
        local_38 = 1;
      }
      _objc_storeStrong(&local_68);
      _objc_storeStrong(&local_58,0);
    }
    else {
      _objc_setAssociatedObject(local_28,DAT_026dfa78,0,1);
      _objc_setAssociatedObject(local_28,DAT_026dfa80,0,1);
      FUN_001d6720(local_28);
      uVar5 = local_28;
      FUN_001d6b34();
      _objc_retainAutoreleasedReturnValue();
      local_40 = uVar5;
      if (uVar5 != 0) {
        FUN_001d7254(uVar5);
      }
      local_38 = 1;
      _objc_storeStrong(&local_40,0);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

