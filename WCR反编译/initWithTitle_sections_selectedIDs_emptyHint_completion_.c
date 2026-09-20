// initWithTitle:sections:selectedIDs:emptyHint:completion: @ 01bb5c18

/* Function Stack Size: 0x38 bytes */

ID WCRMessageSyncMultiSelectViewController::initWithTitle_sections_selectedIDs_emptyHint_completion_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,ID param_7,
             undefined4 param_8)

{
  ID *pIVar1;
  undefined8 **ppuVar2;
  undefined *puVar3;
  cfstringStruct *local_d0;
  long local_b8;
  long local_a0;
  cfstringStruct *local_90;
  undefined8 *local_58;
  undefined *local_50;
  undefined8 local_48;
  cfstringStruct *local_40;
  long local_38;
  long local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID *local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = (ID *)param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  local_40 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_40,param_6);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_7);
  local_58 = local_18;
  local_18 = (ID *)0x0;
  ppuVar2 = &local_58;
  local_50 = PTR_WCRMessageSyncMultiSelectViewController_026cff00;
  _objc_msgSendSuper2(ppuVar2,PTR_s_init_026ca6a8);
  local_18 = (ID *)ppuVar2;
  _objc_storeStrong(&local_18);
  if ((undefined8 **)local_18 != (undefined8 **)0x0) {
    if (local_28 == (cfstringStruct *)0x0) {
      local_90 = &cf_Y;
    }
    else {
      local_90 = local_28;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setTitle__0269cef0,local_90);
    if (local_30 == 0) {
      local_a0 = *(long *)PTR____NSArray0___02578280;
    }
    else {
      local_a0 = local_30;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setSections__026a17b0,local_a0);
    if (local_38 == 0) {
      local_b8 = *(long *)PTR____NSArray0___02578280;
    }
    else {
      local_b8 = local_38;
    }
    puVar3 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340,PTR_s_orderedSetWithArray__026a4b80,
               local_b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setSelected__0269fd48);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (local_40 == (cfstringStruct *)0x0) {
      local_d0 = &::cf___;
    }
    else {
      local_d0 = local_40;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setEmptyHint__026c0470,local_d0);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCompletion__0269fdc8,local_48);
  }
  pIVar1 = local_18;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return (ID)(undefined8 **)pIVar1;
}

