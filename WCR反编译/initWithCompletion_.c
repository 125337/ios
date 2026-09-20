// initWithCompletion: @ 01bdebf4

/* Function Stack Size: 0x18 bytes */

ID WCRefineMomentsCacheKeepUsersViewController::initWithCompletion_
             (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  ID *pIVar1;
  undefined8 **ppuVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *local_38;
  undefined *local_30;
  undefined8 local_28;
  SEL local_20;
  ID *local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = (ID *)param_1;
  _objc_storeStrong(&local_28,param_3,param_3,param_4);
  local_38 = local_18;
  local_18 = (ID *)0x0;
  ppuVar2 = &local_38;
  local_30 = PTR_WCRefineMomentsCacheKeepUsersViewController_026cff38;
  _objc_msgSendSuper2(ppuVar2,PTR_s_initWithNibName_bundle__026a2600,0);
  local_18 = (ID *)ppuVar2;
  _objc_storeStrong(&local_18);
  if ((undefined8 **)local_18 != (undefined8 **)0x0) {
    uVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_copy_0269d150);
    uVar3 = *(undefined8 *)((long)local_18 + (long)_completion);
    *(undefined8 *)((long)local_18 + (long)_completion) = uVar5;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)local_18 + (long)_keepUsernames);
    *(undefined8 *)((long)local_18 + (long)_keepUsernames) = puVar4;
    (*(code *)PTR__objc_release_02578630)(uVar5);
    puVar4 = PTR____NSArray0___02578280;
    _objc_storeStrong((long)local_18 + (long)_allUsernames,*(undefined8 *)PTR____NSArray0___02578280
                     );
    _objc_storeStrong((long)local_18 + (long)_filteredUsernames,*(undefined8 *)puVar4);
    _objc_storeStrong((long)local_18 + (long)_itemCounts,
                      *(undefined8 *)PTR____NSDictionary0___02578288);
  }
  pIVar1 = local_18;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  return (ID)(undefined8 **)pIVar1;
}

