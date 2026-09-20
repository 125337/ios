// scheduleBrowseIndexSave @ 010bada8

/* Function Stack Size: 0x10 bytes */

void WCRefineMomentsMonitor::scheduleBrowseIndexSave(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  dispatch_time_t dVar3;
  uint local_4c;
  undefined *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  code *local_38;
  undefined *local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setSortedBrowseRecords__026ae6c0,0);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_browseRecords_026ae688);
  _objc_retainAutoreleasedReturnValue();
  local_4c = 1;
  if (IVar1 != 0) {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_browseSaveScheduled_026ae6c8);
    local_4c = (uint)IVar2;
  }
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if ((local_4c & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setBrowseSaveScheduled__026ae6d0,1);
    dVar3 = _dispatch_time(0,1000000000);
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_ioQueue_026ae678);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_18;
    local_48 = PTR___NSConcreteStackBlock_02578660;
    local_40 = 0xc2000000;
    local_3c = 0;
    local_38 = FUN_010baf44;
    local_30 = &DAT_0257a800;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = IVar1;
    _dispatch_after(dVar3,IVar2,&local_48);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    _objc_storeStrong(&local_28,0);
  }
  return;
}

