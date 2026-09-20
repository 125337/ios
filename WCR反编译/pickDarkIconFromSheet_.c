// pickDarkIconFromSheet: @ 019b86f8

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x18 bytes */

void WCRefineFloatingTabBarButtonActionViewController::pickDarkIconFromSheet_
               (ID param_1,SEL param_2,ID param_3)

{
  ID local_48;
  ID local_30 [2];
  SEL local_20;
  ID local_18;
  
  local_30[1] = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(local_30 + 1,param_3);
  local_48 = local_18;
  _objc_getAssociatedObject(local_18,&DAT_028e442b);
  _objc_retainAutoreleasedReturnValue();
  local_30[0] = local_48;
  if (local_48 == 0) {
    local_48 = 0xffffffffffffffff;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_integerValue_026ca750);
  }
  if ((-1 < (long)local_48) && ((long)local_48 < 4)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_presentPhotoPickerForTab_mode__026ba9e0,local_48,&cf_dark);
  }
  _objc_storeStrong(local_30);
  _objc_storeStrong(local_30 + 1,0);
  return;
}

