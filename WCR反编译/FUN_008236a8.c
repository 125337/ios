// FUN_008236a8 @ 008236a8

void FUN_008236a8(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong local_88;
  ulong local_38 [3];
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  uVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_backgroundView_026a0320);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_20;
  (*(code *)PTR__objc_release_02578630)();
  if (uVar1 == uVar2) {
    uVar2 = local_20;
    _objc_getAssociatedObject(0,local_20,&DAT_028cd1dd);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNull_026ce0e8;
    local_38[0] = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((uVar2 & 1) == 0) {
      local_88 = local_38[0];
    }
    else {
      local_88 = 0;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setBackgroundView__026a2060,local_88);
    _objc_setAssociatedObject(local_20,&DAT_028cd1dd,0,1);
    _objc_storeStrong(local_38,0);
  }
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_superview_026cab50);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_18;
  (*(code *)PTR__objc_release_02578630)();
  if (uVar1 != uVar2) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_insertSubview_atIndex__026ca748,local_20,0)
    ;
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

