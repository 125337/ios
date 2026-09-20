// reloadUsers @ 01be0948

/* Function Stack Size: 0x10 bytes */

void WCRefineMomentsCacheKeepUsersViewController::reloadUsers(ID param_1,SEL param_2)

{
  dispatch_queue_t pdVar1;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setIsLoading__026c06f8,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_rebuildBarButtons_026c08e8);
  _objc_initWeak(auStack_28,local_18);
  pdVar1 = _dispatch_get_global_queue(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  local_50 = PTR___NSConcreteStackBlock_02578660;
  local_48 = 0xc2000000;
  local_44 = 0;
  local_40 = FUN_01be0a3c;
  local_38 = &DAT_0257be28;
  _objc_copyWeak(auStack_30,auStack_28);
  _dispatch_async(pdVar1,&local_50);
  (*(code *)PTR__objc_release_02578630)(pdVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}

