// presentFontPickerFromViewController: @ 019d6728

/* Function Stack Size: 0x18 bytes */

bool WCRefineFontBeautifyViewController::presentFontPickerFromViewController_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_60;
  undefined *local_50;
  undefined4 local_48;
  byte local_41;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = (undefined *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_41 = 0;
  bVar1 = local_30 == (undefined *)0x0;
  if (bVar1) {
    local_60 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
    _objc_retainAutoreleasedReturnValue();
    local_40 = local_60;
  }
  else {
    local_60 = local_30;
  }
  local_41 = bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_60;
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  while( true ) {
    puVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_presentedViewController_0269d448);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (puVar2 == (undefined *)0x0) break;
    puVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_presentedViewController_0269d448);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_38;
    local_38 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  if (local_38 == (undefined *)0x0) {
    local_11 = 0;
    local_48 = 1;
  }
  else {
    puVar2 = PTR_WCRefineFontBeautifyViewController_026ceb48;
    _objc_alloc_init();
    local_50 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setEnableBeautifyOnSelect__026baeb0,1);
    puVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_presentFontListOnHost__026baeb8,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_11 = puVar2 != (undefined *)0x0;
    (*(code *)PTR__objc_release_02578630)();
    local_48 = 1;
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

