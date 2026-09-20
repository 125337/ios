// FUN_000e9c18 @ 000e9c18

void FUN_000e9c18(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong local_108;
  bool local_61;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  undefined4 local_38;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  uVar2 = local_28;
  pcVar1 = &cf_BaseMsgContentViewController;
  _NSClassFromString();
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,pcVar1);
  if (((uVar2 & 1) == 0) || (uVar2 = local_28, FUN_000ea268(), (uVar2 & 1) == 0)) {
    local_38 = 1;
  }
  else {
    uVar2 = local_28;
    _objc_getAssociatedObject(local_28,&DAT_028c839f);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_28;
    if ((uVar3 & 1) == 0) {
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(uVar2,&DAT_028c839f,puVar4,1);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      FUN_000ea340(local_28);
      uVar2 = local_28;
      FUN_000ea6c0(local_28,0);
      _objc_retainAutoreleasedReturnValue();
      local_40 = uVar2;
      if (uVar2 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_valueForKey__0269d128,&cf_searcher);
        _objc_retainAutoreleasedReturnValue();
        local_48 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_valueForKey__0269d128,&cf_searchBar);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
        local_50 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
        local_61 = (uVar2 & 1) == 0;
        if (local_61) {
          local_108 = 0;
        }
        else {
          local_108 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_superview_026cab50);
          _objc_retainAutoreleasedReturnValue();
          local_60 = local_108;
        }
        local_61 = !local_61;
        (*(code *)PTR__objc_retain_02578638)();
        local_58 = local_108;
        if (local_61) {
          (*(code *)PTR__objc_release_02578630)(local_60);
        }
        uVar2 = local_58;
        puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
        if ((uVar2 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setHidden__026ca970,1);
        }
        _objc_storeStrong(&local_58);
        _objc_storeStrong(&local_50,0);
        _objc_storeStrong(&local_48,0);
        pcVar1 = &cf_finishSearch;
        _NSSelectorFromString();
        uVar2 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_respondsToSelector__026ca818,pcVar1);
        if ((uVar2 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_40,pcVar1);
        }
      }
      FUN_000ea990(local_28,1);
      _objc_setAssociatedObject(local_28,&DAT_028c83a0,0,1);
      _objc_setAssociatedObject(local_28,&DAT_028c839f,0,1);
      _objc_storeStrong(&local_40,0);
      local_38 = 0;
    }
    else {
      local_38 = 1;
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

