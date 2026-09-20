// openHTTPURLString:toastIfInvalid: @ 01d2d124

/* Function Stack Size: 0x20 bytes */

void WCRefineRootViewController::openHTTPURLString_toastIfInvalid_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  char *pcVar4;
  ID IVar5;
  undefined *puVar6;
  char *local_60;
  char *local_58;
  byte local_49;
  undefined *local_48;
  undefined *local_40;
  undefined4 local_34;
  long local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  lVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    local_34 = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSURL_026ce328;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_URLWithString__026a16d8,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_49 = 0;
    bVar1 = true;
    local_40 = puVar3;
    if (puVar3 != (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_scheme_026a1dd8);
      _objc_retainAutoreleasedReturnValue();
      local_49 = 1;
      local_48 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = puVar3 == (undefined *)0x0;
    }
    if ((local_49 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    if (bVar1) {
      lVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
      if (lVar2 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,local_30);
      }
      local_34 = 1;
    }
    else {
      pcVar4 = "MMWebViewController";
      _objc_getClass();
      local_58 = pcVar4;
      if (pcVar4 == (char *)0x0) {
        puVar3 = PTR__OBJC_CLASS___UIApplication_026ce010;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar3);
        if (((ulong)puVar6 & 1) == 0) {
          lVar2 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
          if (lVar2 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,local_30);
          }
        }
        else {
          puVar3 = PTR__OBJC_CLASS___UIApplication_026ce010;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar3);
        }
      }
      else {
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)();
        local_60 = pcVar4;
        if (pcVar4 == (char *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf_Sb);
        }
        else {
          IVar5 = local_18;
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(IVar5);
        }
        _objc_storeStrong(&local_60,0);
      }
      local_34 = 0;
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

