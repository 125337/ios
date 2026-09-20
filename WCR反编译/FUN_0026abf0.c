// FUN_0026abf0 @ 0026abf0

void FUN_0026abf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  cfstringStruct *pcVar1;
  long lVar2;
  cfstringStruct *local_68;
  long local_60;
  cfstringStruct *local_58 [3];
  cfstringStruct *local_40;
  undefined4 local_34;
  undefined8 local_30;
  long local_28;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  local_30 = param_4;
  if (((local_18 == 0) || (local_20 == 0)) || (local_28 == 0)) {
    local_34 = 1;
  }
  else {
    pcVar1 = &cf_MyFavoritesViewController;
    _NSClassFromString();
    local_40 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_34 = 1;
    }
    else {
      _objc_alloc_init();
      local_58[0] = pcVar1;
      if (pcVar1 == (cfstringStruct *)0x0) {
        local_34 = 1;
      }
      else {
        _objc_setAssociatedObject(pcVar1,&DAT_028c9530,local_20,0);
        lVar2 = local_28;
        FUN_0026cd8c();
        _objc_retainAutoreleasedReturnValue();
        pcVar1 = local_58[0];
        local_60 = lVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58[0],PTR_s_respondsToSelector__026ca818,PTR_s_loadViewIfNeeded_026a1478);
        if (((ulong)pcVar1 & 1) == 0) {
          pcVar1 = local_58[0];
          (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_view_026cabd8);
          _objc_retainAutoreleasedReturnValue();
          local_68 = pcVar1;
          _objc_storeStrong(&local_68,0);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_loadViewIfNeeded_026a1478);
        }
        pcVar1 = local_58[0];
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58[0],PTR_s_respondsToSelector__026ca818,
                   PTR_s_onSelectItem_position__026a1480);
        if (((ulong)pcVar1 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58[0],PTR_s_onSelectItem_position__026a1480,local_60,local_30);
        }
        _objc_storeStrong(&local_60,0);
        local_34 = 0;
      }
      _objc_storeStrong(local_58,0);
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

