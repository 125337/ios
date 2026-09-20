// FUN_002b8558 @ 002b8558

void FUN_002b8558(undefined8 param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  ulong uVar5;
  ulong local_68;
  cfstringStruct *local_60;
  ulong local_58;
  cfstringStruct *local_50;
  ulong local_38;
  undefined4 local_2c;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  if (local_28 == 0) {
    local_2c = 1;
  }
  else {
    uVar2 = local_28;
    _objc_getAssociatedObject(local_28,&DAT_028c9809);
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_boolValue_026ca540);
    uVar5 = local_28;
    if ((uVar2 & 1) == 0) {
      uVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_backgroundImage_026a1a78);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(uVar5,&DAT_028c980a,uVar2,1);
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar5 = local_28;
      uVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_shadowImage_026a1a80);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(uVar5,&DAT_028c980b,uVar2,1);
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar5 = local_28;
      uVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_backgroundColor_026ca518);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(uVar5,&DAT_028c980c,uVar2,1);
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar5 = local_28;
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      uVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isTranslucent_026a1a88);
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_numberWithBool__0269ce60,uVar2 & 0xffffffff);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(uVar5,&DAT_028c980d,puVar3,1);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      uVar1 = 0xd;
      FUN_002b0a2c();
      if ((uVar1 & 1) != 0) {
        pcVar4 = &cf_standardAppearance;
        _NSSelectorFromString();
        uVar5 = local_28;
        local_50 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_respondsToSelector__026ca818,pcVar4);
        if ((uVar5 & 1) != 0) {
          uVar5 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,local_50);
          _objc_retainAutoreleasedReturnValue();
          local_58 = uVar5;
          _objc_setAssociatedObject(local_28,&DAT_028c980e,uVar5,1);
          _objc_storeStrong(&local_58,0);
        }
        pcVar4 = &cf_scrollEdgeAppearance;
        _NSSelectorFromString();
        uVar1 = 0xf;
        local_60 = pcVar4;
        FUN_002b0a2c();
        if (((uVar1 & 1) != 0) &&
           (uVar5 = local_28,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_28,PTR_s_respondsToSelector__026ca818,local_60), (uVar5 & 1) != 0)) {
          uVar5 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,local_60);
          _objc_retainAutoreleasedReturnValue();
          local_68 = uVar5;
          _objc_setAssociatedObject(local_28,&DAT_028c980f,uVar5,1);
          _objc_storeStrong(&local_68,0);
        }
      }
      uVar5 = local_28;
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(uVar5,&DAT_028c9809,puVar3,1);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      FUN_002b8f9c(local_28);
      local_2c = 0;
    }
    else {
      local_2c = 1;
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

