// FUN_006dcff0 @ 006dcff0

void FUN_006dcff0(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_a0;
  cfstringStruct *local_60;
  byte local_51;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40 [3];
  cfstringStruct *local_28;
  undefined4 local_1c;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 == 0) {
    local_1c = 1;
  }
  else {
    pcVar1 = &cf_SFSafariViewController;
    _NSClassFromString();
    local_28 = pcVar1;
    FUN_006dd450();
    _objc_retainAutoreleasedReturnValue();
    local_40[0] = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    local_48 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_containsString__0269d0b0,&cf_ActionSheet);
    if (((ulong)pcVar1 & 1) != 0) {
      pcVar1 = local_40[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_presentingViewController_026a0db0);
      _objc_retainAutoreleasedReturnValue();
      local_51 = 0;
      local_a0 = pcVar1;
      if (pcVar1 == (cfstringStruct *)0x0) {
        FUN_006dd450();
        _objc_retainAutoreleasedReturnValue();
        local_50 = local_a0;
      }
      local_51 = pcVar1 == (cfstringStruct *)0x0;
      _objc_storeStrong(local_40,local_a0);
      if ((local_51 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_50);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    if ((local_28 == (cfstringStruct *)0x0) || (local_40[0] == (cfstringStruct *)0x0)) {
      puVar2 = PTR__OBJC_CLASS___UIApplication_026ce010;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      local_1c = 1;
    }
    else {
      pcVar1 = local_28;
      _objc_alloc();
      pcVar3 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_initWithURL_entersReaderIfAvaila_026a6bf0,local_18,0);
      _objc_retainAutoreleasedReturnValue();
      local_60 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      pcVar1 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_respondsToSelector__026ca818,
                 PTR_s_setModalPresentationStyle__0269d2a8);
      if (((ulong)pcVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setModalPresentationStyle__0269d2a8,0);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40[0],PTR_s_presentViewController_animated_c_0269d2b0,local_60,1,0);
      _objc_storeStrong(&local_60,0);
      local_1c = 0;
    }
    _objc_storeStrong(&local_48);
    _objc_storeStrong(local_40,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

