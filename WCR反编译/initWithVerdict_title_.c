// initWithVerdict:title: @ 019fda7c

/* Function Stack Size: 0x20 bytes */

ID WCRefineFriendRelationResultListViewController::initWithVerdict_title_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID *pIVar1;
  undefined8 **ppuVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined8 uVar5;
  cfstringStruct *local_70;
  cfstringStruct *local_60;
  undefined8 *local_40;
  undefined *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID *local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = (ID *)param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_4);
  local_40 = local_18;
  local_18 = (ID *)0x0;
  ppuVar2 = &local_40;
  local_38 = PTR_WCRefineFriendRelationResultListViewController_026cfdb0;
  _objc_msgSendSuper2(ppuVar2,PTR_s_init_026ca6a8);
  local_18 = (ID *)ppuVar2;
  _objc_storeStrong(&local_18);
  if ((undefined8 **)local_18 != (undefined8 **)0x0) {
    pcVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_copy_0269d150);
    local_60 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_60 = &::cf___;
    }
    _objc_storeStrong((long)local_18 + (long)_verdict,local_60);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_copy_0269d150);
    local_70 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_70 = &cf_hKm_g;
    }
    _objc_storeStrong((long)local_18 + (long)_pageTitle,local_70);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)local_18 + (long)_selectedUserNames);
    *(undefined8 *)((long)local_18 + (long)_selectedUserNames) = puVar4;
    (*(code *)PTR__objc_release_02578630)(uVar5);
  }
  pIVar1 = local_18;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return (ID)(undefined8 **)pIVar1;
}

