// isPlaceholderLongPressIcon: @ 01104ae0

/* Function Stack Size: 0x18 bytes */

bool WCRefinePluginIconCatalog::isPlaceholderLongPressIcon_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  uint local_34;
  long local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_28;
  FUN_010f4f48();
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  local_34 = 1;
  if (lVar1 != 0) {
    lVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_isEqualToString__0269ccc8,&cf_icons_outlined_more_circle);
    local_34 = (uint)lVar1;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return local_34 & 1;
}

