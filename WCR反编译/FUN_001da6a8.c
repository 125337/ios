// FUN_001da6a8 @ 001da6a8

void FUN_001da6a8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  uint uVar2;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong local_50;
  ulong local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulong local_28;
  ulong *puVar3;
  
  puVar3 = &local_28;
  local_28 = 0;
  _objc_storeStrong(puVar3,param_2);
  uVar2 = (uint)puVar3;
  FUN_001cf94c();
  if (((uVar2 & 1) == 0) || (local_28 == 0)) {
    local_38 = 1;
  }
  else {
    FUN_001dac54();
    local_40 = param_1;
    FUN_001d5a74(local_28);
    uVar4 = local_28;
    local_40 = param_1;
    FUN_001dad4c(param_1,0,local_28,0,2);
    uVar5 = local_28;
    local_48 = uVar4;
    _objc_getAssociatedObject(local_28,DAT_026dfa80);
    _objc_retainAutoreleasedReturnValue();
    local_50 = uVar5;
    if ((uVar5 == 0) ||
       (((*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_unsignedIntegerValue_026cabb8),
        uVar5 != local_48 || (uVar4 = local_28, FUN_001db0cc(0,local_40), (uVar4 & 1) == 0)))) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_begin_026ca520);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_setDisableActions__026ca918,1);
      uVar1 = local_40;
      uVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(uVar1);
      (*(code *)PTR__objc_release_02578630)(uVar4);
      uVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setClipsToBounds__026ca8c8,1);
      uVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(0);
      (*(code *)PTR__objc_release_02578630)(uVar4);
      puVar6 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_CGColor_026ca470);
      uVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar4);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_commit_026ca580);
      uVar4 = local_28;
      uVar1 = DAT_026dfa80;
      puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,
                 local_48);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(uVar4,uVar1,puVar6,1);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      _objc_setAssociatedObject(local_28,DAT_026dfa78,0,1);
      _objc_setAssociatedObject(local_28,DAT_026dfa90,0,1);
      local_38 = 0;
    }
    else {
      local_38 = 1;
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

