// FUN_0156d648 @ 0156d648

byte FUN_0156d648(void)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  byte local_11;
  
  pcVar1 = &cf_MyFavoritesViewController;
  _NSClassFromString();
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_11 = 0;
  }
  else {
    local_20 = pcVar1;
    _objc_alloc_init();
    puVar2 = PTR__OBJC_CLASS___UIViewController_026cdf80;
    local_28 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((ulong)pcVar1 & 1) == 0) {
      local_11 = 0;
    }
    else {
      pcVar1 = &cf_onClickNewBtn;
      _NSSelectorFromString();
      pcVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_respondsToSelector__026ca818,pcVar1);
      if (((ulong)pcVar3 & 1) == 0) {
        local_11 = 0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,pcVar1);
        local_11 = 1;
      }
    }
    _objc_storeStrong(&local_28,0);
  }
  return local_11 & 1;
}

