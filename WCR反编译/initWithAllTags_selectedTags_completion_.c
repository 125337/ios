// initWithAllTags:selectedTags:completion: @ 01aa3414

/* Function Stack Size: 0x28 bytes */

ID WCRGroupTagMultiSelectViewController::initWithAllTags_selectedTags_completion_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,undefined4 param_6)

{
  ID *pIVar1;
  undefined8 **ppuVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long local_98;
  long local_80;
  undefined8 *local_48;
  undefined *local_40;
  undefined8 local_38;
  long local_30;
  long local_28;
  SEL local_20;
  ID *local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = (ID *)param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  local_48 = local_18;
  local_18 = (ID *)0x0;
  ppuVar2 = &local_48;
  local_40 = PTR_WCRGroupTagMultiSelectViewController_026cfe20;
  _objc_msgSendSuper2(ppuVar2,PTR_s_initWithNibName_bundle__026a2600,0);
  local_18 = (ID *)ppuVar2;
  _objc_storeStrong(&local_18);
  if (ppuVar2 != (undefined8 **)0x0) {
    lVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_copy_0269d150);
    local_80 = lVar3;
    if (lVar3 == 0) {
      local_80 = *(long *)PTR____NSArray0___02578280;
    }
    _objc_storeStrong((long)local_18 + (long)_allTags,local_80);
    (*(code *)PTR__objc_release_02578630)(lVar3);
    if (local_30 == 0) {
      local_98 = *(long *)PTR____NSArray0___02578280;
    }
    else {
      local_98 = local_30;
    }
    puVar4 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340,PTR_s_orderedSetWithArray__026a4b80,
               local_98);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)local_18 + (long)_selected);
    *(undefined8 *)((long)local_18 + (long)_selected) = puVar4;
    (*(code *)PTR__objc_release_02578630)(uVar5);
    uVar5 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_copy_0269d150);
    uVar6 = *(undefined8 *)((long)local_18 + (long)_completion);
    *(undefined8 *)((long)local_18 + (long)_completion) = uVar5;
    (*(code *)PTR__objc_release_02578630)(uVar6);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setTitle__0269cef0,&cf___h__);
  }
  pIVar1 = local_18;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return (ID)(undefined8 **)pIVar1;
}

