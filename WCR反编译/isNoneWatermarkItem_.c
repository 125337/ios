// isNoneWatermarkItem: @ 01fa636c

/* Function Stack Size: 0x18 bytes */

bool WCRefineWatermarkLibraryViewController::isNoneWatermarkItem_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  uint local_2c;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_2c = 0;
  if (local_28 != 0) {
    lVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_isEqualToString__0269ccc8,&cf___WCR_WM_NONE_ITEM__);
    local_2c = (uint)lVar1;
  }
  _objc_storeStrong(&local_28,0);
  return local_2c & 1;
}

