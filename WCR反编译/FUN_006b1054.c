// FUN_006b1054 @ 006b1054

void FUN_006b1054(undefined8 param_1)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_88;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  cfstringStruct *local_50;
  bool local_41;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  undefined *local_30;
  undefined4 local_24;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_18 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_18,param_1);
  pcVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_object_0269ddb0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UITextField_026ce2a0;
  local_20 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UITextField_026ce2a0,PTR_s_class_0269cd60)
  ;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  pcVar4 = local_20;
  if (((ulong)pcVar2 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___UITextView_026ce1b8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UITextView_026ce1b8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((ulong)pcVar4 & 1) == 0) {
      local_24 = 1;
      goto LAB_006b13ec;
    }
  }
  puVar3 = PTR_WCRefinePrivateFriendManager_026ce160;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_sharedManager_0269db78);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_enabled_0269db80);
  if (((((ulong)puVar3 & 1) == 0) ||
      (puVar3 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isLocked_0269db88),
      ((ulong)puVar3 & 1) == 0)) || (FUN_006b30a8(), ((ulong)puVar3 & 1) == 0)) {
    local_24 = 1;
  }
  else {
    pcVar4 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68);
    local_41 = false;
    bVar1 = ((ulong)pcVar4 & 1) == 0;
    if (bVar1) {
      local_88 = &cf___;
    }
    else {
      local_88 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_text_0269ce68);
      _objc_retainAutoreleasedReturnValue();
      local_40 = local_88;
    }
    local_41 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = local_88;
    if ((local_41 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_40);
    }
    pcVar4 = local_38;
    FUN_006b34fc();
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar4;
    _WCRefineTryUnlockPrivateFriendWithPassword();
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    if (((ulong)pcVar2 & 1) == 0) {
      local_24 = 1;
    }
    else {
      pcVar4 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_setText__026caa88);
      if (((ulong)pcVar4 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setText__026caa88,&cf___);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_resignFirstResponder_0269ea18);
      puVar3 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = local_20;
      local_70 = PTR___NSConcreteStackBlock_02578660;
      local_68 = 0xc2000000;
      local_64 = 0;
      local_60 = FUN_006b3818;
      local_58 = &DAT_0257a800;
      (*(code *)PTR__objc_retain_02578638)();
      local_50 = pcVar4;
      _dispatch_async(puVar3,&local_70);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      _objc_storeStrong(&local_50,0);
      local_24 = 0;
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_30,0);
LAB_006b13ec:
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

