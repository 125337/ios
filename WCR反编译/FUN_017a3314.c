// FUN_017a3314 @ 017a3314

void FUN_017a3314(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  char *pcVar3;
  char *local_48 [3];
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  pcVar2 = &cf_WCRefineAvatarCornerBeautifyViewController;
  local_20 = param_2;
  local_18 = param_1;
  _NSClassFromString();
  if (pcVar2 != (cfstringStruct *)0x0) {
    local_28 = pcVar2;
    _objc_alloc_init();
    local_30 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_setHidesBottomBarWhenPushed__0269db60,1);
    if (DAT_028e41d8 == (char *)0x0) {
      pcVar3 = "WCRefineHelper";
      _objc_getClass();
      DAT_028e41d8 = pcVar3;
    }
    pcVar3 = DAT_028e41d8;
    _objc_retainAutoreleaseReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_findTopVC_0269d290);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = false;
    local_48[0] = pcVar3;
    if (pcVar3 != (char *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = pcVar3 != (char *)0x0;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
    }
    if (bVar1) {
      pcVar3 = local_48[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar3);
    }
    _objc_storeStrong(local_48);
    _objc_storeStrong(&local_30,0);
  }
  return;
}

