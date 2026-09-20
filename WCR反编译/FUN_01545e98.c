// FUN_01545e98 @ 01545e98

void FUN_01545e98(byte param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined1 *local_a8;
  undefined1 *local_98;
  undefined1 *local_88;
  undefined1 *local_78;
  undefined1 *local_68;
  undefined1 *local_58;
  undefined1 *local_48;
  undefined1 *local_38;
  undefined1 *local_28;
  byte local_19;
  undefined1 *local_18;
  
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_19 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_chatAvatarProfileCardBackgroundM_026b0468);
  if (puVar2 == (undefined1 *)0x0) {
    bVar1 = (local_19 & 1) == 0;
    local_98 = local_28;
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_chatAvatarProfileCardBackgroundL_026b08a0);
      _objc_retainAutoreleasedReturnValue();
      local_48 = local_98;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_chatAvatarProfileCardBackgroundD_026b0898);
      _objc_retainAutoreleasedReturnValue();
      local_38 = local_98;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_98;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    else {
      (*(code *)PTR__objc_release_02578630)(local_38);
    }
  }
  else if (puVar2 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
    bVar1 = (local_19 & 1) == 0;
    if (bVar1) {
      local_78 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_chatAvatarProfileCardRandomLight_026b08b0);
      _objc_retainAutoreleasedReturnValue();
      local_a8 = local_78;
      FUN_0157fb3c();
      _objc_retainAutoreleasedReturnValue();
      local_88 = local_a8;
    }
    else {
      local_58 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_chatAvatarProfileCardRandomDarkH_026b08a8);
      _objc_retainAutoreleasedReturnValue();
      local_a8 = local_58;
      FUN_0157fb3c();
      _objc_retainAutoreleasedReturnValue();
      local_68 = local_a8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_a8;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_88);
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    else {
      (*(code *)PTR__objc_release_02578630)(local_68);
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
  }
  else {
    local_18 = (undefined1 *)0x0;
  }
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

