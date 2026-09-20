// FUN_001423a8 @ 001423a8

void FUN_001423a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *local_40;
  undefined4 local_38;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_state_026cab20);
  if (lVar2 == 1) {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_msgAttachmentBeautifyEnabled_0269f440);
    if ((((ulong)puVar3 & 1) == 0) ||
       (puVar3 = local_40,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_40,PTR_s_msgAttachmentLongPressJumpEnable_0269f528),
       ((ulong)puVar3 & 1) == 0)) {
      local_38 = 1;
    }
    else {
      lVar4 = local_18;
      _objc_getAssociatedObject(local_18,DAT_026df918);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      lVar2 = local_18;
      uVar1 = DAT_026df918;
      if (lVar4 == 0) {
        puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(lVar2,uVar1,puVar3,1);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        FUN_001511c4();
        puVar3 = PTR___dispatch_main_q_02578680;
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        _dispatch_async();
        (*(code *)PTR__objc_release_02578630)(puVar3);
        local_38 = 0;
      }
      else {
        local_38 = 1;
      }
    }
    _objc_storeStrong(&local_40,0);
  }
  else {
    local_38 = 1;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

