// FUN_005202c0 @ 005202c0

void FUN_005202c0(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *local_40;
  undefined *local_38 [3];
  undefined4 local_1c;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 == 0) {
    local_1c = 1;
  }
  else {
    uVar1 = local_18;
    _objc_getAssociatedObject(local_18,&DAT_028cb0d9);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (uVar1 == 0) {
      FUN_0051c4e0();
      if ((uVar1 & 1) == 0) {
        local_1c = 1;
      }
      else {
        puVar2 = PTR_WCRCoverLongPressTarget_026ce728;
        _objc_alloc_init();
        local_38[0] = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setAnchorView__026a48f0,local_18);
        puVar2 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_026ce220;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_initWithTarget_action__026ca718,local_38[0],
                   PTR_s_handleLongPress__026a48f8);
        local_40 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (0x3fe0000000000000,puVar2,PTR_s_setMinimumPressDuration__026ca9c8);
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setDelegate__026ca910,local_38[0]);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_addGestureRecognizer__026ca4a8,local_40);
        _objc_setAssociatedObject(local_18,&DAT_028cb0d9,local_38[0],1);
        _objc_storeStrong(&local_40);
        _objc_storeStrong(local_38,0);
        local_1c = 0;
      }
    }
    else {
      local_1c = 1;
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

