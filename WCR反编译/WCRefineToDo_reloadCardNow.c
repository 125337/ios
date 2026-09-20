// WCRefineToDo_reloadCardNow @ 007ff6c8

/* Function Stack Size: 0x10 bytes */

void WCRefineToDoHook::WCRefineToDo_reloadCardNow(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  ID local_68;
  ID local_60;
  undefined *local_58;
  ID local_50;
  ID local_48;
  undefined *local_40;
  ID local_38;
  uint local_2c;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_toDoCardEnabled_026a3208);
  if (((ulong)puVar2 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_WCRefineToDo_removeCard_026a87d8);
    local_2c = 1;
  }
  else {
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_WCRefineToDo_findMainTableView_026a87e8);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = local_18;
    local_38 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_WCRefineToDo_headerReadyForLayou_026a87f0,IVar3);
    bVar1 = (IVar4 & 1) != 0;
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_WCRefineToDo_ensureCard_026a87d0);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_WCRefineToDo_layoutCard_026a87e0);
      puVar2 = PTR_WCRefineHomeTableHeaderHost_026ce570;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHomeTableHeaderHost_026ce570,PTR_s_todoSlotInTableView__026a8938,
                 local_38);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_18;
      local_40 = puVar2;
      _objc_getAssociatedObject(local_18,&DAT_028ccee1);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = local_18;
      local_48 = IVar3;
      _objc_getAssociatedObject(local_18,&DAT_028ccee2);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_40;
      local_50 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_viewWithTag__026cabe0,FUN_0007f148);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_48;
      local_58 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_viewWithTag__026cabe0,FUN_0007f148);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = local_50;
      local_60 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_viewWithTag__026cabe0,FUN_0007f148);
      _objc_retainAutoreleasedReturnValue();
      local_68 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_reloadContentWithReason__026a8988,&cf_reloadCard_th);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_reloadContentWithReason__026a8988,&cf_reloadCard_header);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_reloadContentWithReason__026a8988,&cf_reloadCard_footer);
      _objc_storeStrong(&local_68);
      _objc_storeStrong(&local_60,0);
      _objc_storeStrong(&local_58,0);
      _objc_storeStrong(&local_50,0);
      _objc_storeStrong(&local_48,0);
      _objc_storeStrong(&local_40,0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_WCRefineToDo_scheduleHeaderLayou_026a87f8,&cf_reloadCard);
    }
    local_2c = (uint)!bVar1;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

