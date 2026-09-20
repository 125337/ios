// FUN_015c5938 @ 015c5938

void FUN_015c5938(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  uint local_3c;
  ulong local_38;
  ulong local_30;
  undefined4 local_28;
  byte local_21;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_21 = 0;
  local_3c = 1;
  if (local_18 != 0) {
    uVar1 = local_18;
    _objc_getAssociatedObject(local_18,&DAT_028e3b30);
    _objc_retainAutoreleasedReturnValue();
    local_21 = 1;
    local_20 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_3c = (uint)uVar1;
  }
  if ((local_21 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_20);
  }
  uVar1 = local_18;
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  if ((local_3c & 1) == 0) {
    uVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_clipsToBounds_026ca570);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_numberWithBool__0269ce60,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(uVar1,&DAT_028e3b31,puVar3,1);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setClipsToBounds__026ca8c8,0);
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    local_30 = uVar1;
    if (uVar1 != 0) {
      FUN_015c58ac();
      uVar2 = local_18;
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      if ((uVar1 & 1) == 0) {
        uVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_clipsToBounds_026ca570);
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_numberWithBool__0269ce60,uVar1);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(uVar2,&DAT_028e3b32,puVar3,1);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setClipsToBounds__026ca8c8,0);
        uVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_superview_026cab50);
        _objc_retainAutoreleasedReturnValue();
        local_38 = uVar1;
        if (uVar1 != 0) {
          FUN_015c58ac();
          uVar2 = local_18;
          puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
          if ((uVar1 & 1) == 0) {
            uVar1 = local_38;
            (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_clipsToBounds_026ca570);
            (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_numberWithBool__0269ce60,uVar1);
            _objc_retainAutoreleasedReturnValue();
            _objc_setAssociatedObject(uVar2,&DAT_028e3b33,puVar3,1);
            (*(code *)PTR__objc_release_02578630)(puVar3);
            (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setClipsToBounds__026ca8c8,0);
          }
        }
        _objc_storeStrong(&local_38,0);
      }
    }
    uVar1 = local_18;
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(uVar1,&DAT_028e3b30,puVar3,1);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(&local_30,0);
    local_28 = 0;
  }
  else {
    local_28 = 1;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

