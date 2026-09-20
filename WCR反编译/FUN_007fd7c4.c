// FUN_007fd7c4 @ 007fd7c4

byte FUN_007fd7c4(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  byte local_40;
  byte local_3c;
  ulong local_30;
  undefined4 local_24;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  if (local_20 == 0) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UISearchBar_026ce298;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UISearchBar_026ce298,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar2 & 1) == 0) {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      local_30 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_containsString__0269d0b0,&cf_WCSearchBar);
      local_3c = 1;
      if ((uVar2 & 1) == 0) {
        uVar2 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_containsString__0269d0b0,&cf_WAAppContainerSearchBar);
        local_3c = 1;
        if ((uVar2 & 1) == 0) {
          uVar2 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_containsString__0269d0b0,&cf_WAMainFrameTaskBarSearchCustomView)
          ;
          local_3c = 1;
          if ((uVar2 & 1) == 0) {
            uVar2 = local_30;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_30,PTR_s_containsString__0269d0b0,&cf_SearchBar);
            local_40 = 0;
            if ((uVar2 & 1) != 0) {
              uVar2 = local_30;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_30,PTR_s_containsString__0269d0b0,&cf_SearchBarCell);
              local_40 = (byte)uVar2 ^ 1;
            }
            local_3c = local_40;
          }
        }
      }
      local_11 = local_3c & 1;
      local_24 = 1;
      _objc_storeStrong(&local_30,0);
    }
    else {
      local_11 = 1;
      local_24 = 1;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

