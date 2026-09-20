// wcr_importMomentsContactsFromOther: @ 01c17450

/* Function Stack Size: 0x18 bytes */

void WCRefineMomentsViewController::wcr_importMomentsContactsFromOther_
               (ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *local_68;
  cfstringStruct *local_50;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  cfstringStruct *local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_28,param_3);
  pcVar1 = local_18;
  _objc_getAssociatedObject(local_18,DAT_028c67b8);
  _objc_retainAutoreleasedReturnValue();
  local_50 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_50 = &cf_bT_N;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_50;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_18;
  _objc_getAssociatedObject(local_18,DAT_028c67c0);
  _objc_retainAutoreleasedReturnValue();
  local_68 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_68 = *(cfstringStruct **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_68;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_18;
  _objc_getAssociatedObject(local_18,DAT_028c67c8);
  _objc_retainAutoreleasedReturnValue();
  local_40 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineGroupManagementViewController_026ce580,
             PTR_s_presentOfficialContactPickerFrom_026ac950,local_18,local_30,local_38,pcVar1);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

