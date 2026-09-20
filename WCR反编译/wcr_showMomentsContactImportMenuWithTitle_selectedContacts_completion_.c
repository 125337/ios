// wcr_showMomentsContactImportMenuWithTitle:selectedContacts:completion: @ 01c17010

/* Function Stack Size: 0x28 bytes */

void WCRefineMomentsViewController::
     wcr_showMomentsContactImportMenuWithTitle_selectedContacts_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,undefined4 param_6)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  ID IVar5;
  long local_80;
  char *local_50;
  uint local_44;
  char *local_40;
  undefined8 local_38;
  long local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  _objc_setAssociatedObject(local_18,DAT_028c67b8,local_28,3);
  if (local_30 == 0) {
    local_80 = *(long *)PTR____NSArray0___02578280;
  }
  else {
    local_80 = local_30;
  }
  _objc_setAssociatedObject(local_18,DAT_028c67c0,local_80);
  IVar5 = local_18;
  uVar2 = DAT_028c67c8;
  uVar3 = local_38;
  _objc_retainBlock();
  _objc_setAssociatedObject(IVar5,uVar2,uVar3,3);
  (*(code *)PTR__objc_release_02578630)(uVar3);
  pcVar4 = "WCUIActionSheet";
  _objc_getClass();
  bVar1 = pcVar4 != (char *)0x0;
  local_40 = pcVar4;
  if (bVar1) {
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_50 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar4,PTR_s_addBtnTitle_target_sel__0269d278,&cf_Nu_eQ,local_18,
               PTR_s_wcr_importMomentsContactsFromHom_026c1308);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_addBtnTitle_target_sel__0269d278,&cf_NvQNe__eQ,local_18,
               PTR_s_wcr_importMomentsContactsFromOth_026c1300);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
    pcVar4 = local_50;
    IVar5 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_showInView__0269d310);
    (*(code *)PTR__objc_release_02578630)(IVar5);
    _objc_storeStrong(&local_50,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_wcr_importMomentsContactsFromOth_026c1300,0);
  }
  local_44 = (uint)!bVar1;
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

