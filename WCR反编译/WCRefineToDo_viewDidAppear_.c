// WCRefineToDo_viewDidAppear: @ 007f33e4

/* Function Stack Size: 0x14 bytes */

void WCRefineToDoHook::WCRefineToDo_viewDidAppear_(ID param_1,SEL param_2,bool param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  undefined1 *puVar5;
  ID local_30;
  undefined1 local_21;
  SEL local_20;
  ID local_18;
  
  local_21 = (undefined1)param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_WCRefineToDo_viewDidAppear__026a85c0,param_3 & 1);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) != 0) {
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    FUN_007f36b0();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_WCRefineToDo_findMainTableView_026a87e8);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = local_18;
    local_30 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_WCRefineToDo_headerReadyForLayou_026a87f0,IVar3);
    if ((IVar4 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_WCRefineToDo_scheduleHeaderLayou_026a87f8,&cf_viewDidAppear);
    }
    else {
      puVar1 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar1);
      if (puVar5 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_WCRefineToDo_ensureCard_026a87d0);
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_WCRefineToDo_layoutCard_026a87e0);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_WCRefineToDo_reloadCard_026a8810);
      }
    }
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (puVar5 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
      FUN_007f3908(0,local_18,&PTR___NSConcreteGlobalBlock_02580340);
    }
    _objc_storeStrong(&local_30,0);
  }
  return;
}

