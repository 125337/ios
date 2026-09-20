// FUN_0023094c @ 0023094c

void FUN_0023094c(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  char *pcVar3;
  undefined *puVar4;
  ulong local_b0;
  ulong local_30;
  undefined4 local_24;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = 0;
    local_24 = 1;
    goto LAB_00230c60;
  }
  local_30 = 0;
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_headImageView_0269e2a8);
  if ((uVar1 & 1) != 0) {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_headImageView_0269e2a8);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_30;
    local_30 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  if (local_30 == 0) {
    uVar2 = local_20;
    FUN_0022bab4(local_20,"_headImageView");
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_30;
    local_30 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  if (local_30 == 0) {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,&cf_headImageView);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_30;
    local_30 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  if (local_30 == 0) {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,&cf__headImageView);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_30;
    local_30 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  pcVar3 = "MMUILongPressImageView";
  _objc_getClass();
  if (pcVar3 == (char *)0x0) {
LAB_00230bb4:
    uVar1 = local_30;
    puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar4);
    if ((uVar1 & 1) == 0) {
      local_b0 = 0;
    }
    else {
      local_b0 = local_30;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_b0;
  }
  else {
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isKindOfClass__0269cd68,pcVar3);
    uVar1 = local_30;
    if ((uVar2 & 1) == 0) goto LAB_00230bb4;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar1;
  }
  local_24 = 1;
  _objc_storeStrong(&local_30,0);
LAB_00230c60:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

