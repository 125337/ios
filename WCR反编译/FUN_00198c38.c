// FUN_00198c38 @ 00198c38

void FUN_00198c38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *local_40 [3];
  undefined4 local_24;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  if ((local_18 == 0) || (local_20 == 0)) {
    local_24 = 1;
  }
  else {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (((ulong)puVar2 & 1) == 0) {
      local_24 = 1;
    }
    else {
      lVar3 = local_20;
      _objc_getAssociatedObject(local_20,&DAT_028c89b0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (lVar3 == 0) {
        puVar1 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_026ce220;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_initWithTarget_action__026ca718,local_18,
                   PTR_s_wcrContactsPack_handlePackedSect_0269fbb0);
        local_40[0] = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (DAT_02323c98,puVar1,PTR_s_setMinimumPressDuration__026ca9c8);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_addGestureRecognizer__026ca4a8,local_40[0]);
        lVar3 = local_20;
        puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(lVar3,&DAT_028c89b0,puVar1,1);
        (*(code *)PTR__objc_release_02578630)(puVar1);
        _objc_storeStrong(local_40,0);
        local_24 = 0;
      }
      else {
        local_24 = 1;
      }
    }
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

