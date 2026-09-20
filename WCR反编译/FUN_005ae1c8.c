// FUN_005ae1c8 @ 005ae1c8

void FUN_005ae1c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  long local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined4 local_40;
  long local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_username_026a2238);
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar2;
  if ((lVar2 == 0) ||
     ((*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0), lVar2 == 0)) {
    local_40 = 1;
  }
  else {
    pcVar3 = &cf_WCSetPermissionsViewController;
    _NSClassFromString();
    local_48 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_40 = 1;
    }
    else {
      pcVar3 = &cf_initWithUserName_;
      _NSSelectorFromString();
      pcVar4 = local_48;
      local_50 = pcVar3;
      _objc_alloc();
      pcVar3 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_respondsToSelector__026ca818,local_50);
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      if (((ulong)pcVar3 & 1) == 0) {
        local_40 = 1;
      }
      else {
        pcVar3 = local_48;
        _objc_alloc_init();
        pcVar4 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar3,PTR_s_performSelector_withObject__026ca7c0,local_50,local_30);
        _objc_retainAutoreleasedReturnValue();
        local_58 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        if (local_58 == (cfstringStruct *)0x0) {
          local_40 = 1;
        }
        else {
          lVar2 = local_18;
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_WCRefine_findViewController_026a5820)
          ;
          _objc_retainAutoreleasedReturnValue();
          bVar1 = false;
          local_60 = lVar2;
          if (lVar2 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_navigationController_0269d458);
            _objc_retainAutoreleasedReturnValue();
            bVar1 = lVar2 != 0;
            (*(code *)PTR__objc_release_02578630)(lVar2);
          }
          if (bVar1) {
            lVar2 = local_60;
            (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_navigationController_0269d458);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(lVar2);
          }
          _objc_storeStrong(&local_60,0);
          local_40 = 0;
        }
        _objc_storeStrong(&local_58,0);
      }
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

