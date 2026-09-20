// initWithURL:title: @ 01fc6278

/* Function Stack Size: 0x20 bytes */

ID WebViewController::initWithURL_title_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  bool bVar2;
  ID *pIVar3;
  undefined8 **ppuVar4;
  long local_58;
  long local_48;
  undefined8 *local_40;
  undefined *local_38;
  undefined8 local_30;
  long local_28;
  SEL local_20;
  ID *local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = (ID *)param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_40 = local_18;
  local_18 = (ID *)0x0;
  ppuVar4 = &local_40;
  local_38 = PTR_WebViewController_026d02d0;
  _objc_msgSendSuper2(ppuVar4,PTR_s_init_026ca6a8);
  local_18 = (ID *)ppuVar4;
  _objc_storeStrong(&local_18);
  if ((undefined8 **)local_18 != (undefined8 **)0x0) {
    _objc_storeStrong((long)local_18 + (long)_url,local_28);
    _objc_storeStrong((long)local_18 + (long)_pageTitle,local_30);
    *(undefined1 *)((long)local_18 + (long)_isOffline) = 0;
    bVar2 = false;
    bVar1 = false;
    if (local_28 != 0) {
      local_48 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_absoluteString_026a1de0);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = true;
      if (local_48 != 0) {
        local_58 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_absoluteString_026a1de0);
        _objc_retainAutoreleasedReturnValue();
        bVar1 = true;
        (*(code *)PTR__objc_msgSend_02578628)();
      }
    }
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    if (bVar2) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
  }
  pIVar3 = local_18;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return (ID)(undefined8 **)pIVar3;
}

