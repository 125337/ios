// FUN_016a7300 @ 016a7300

void FUN_016a7300(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long local_38;
  undefined1 local_29;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*DAT_028e3df8)(param_1,param_2);
  puVar3 = PTR_WCRefineMessageRepositoryStore_026ce120;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineMessageRepositoryStore_026ce120,PTR_s_isCompositeCapturePending_026b2e00);
  local_29 = 0;
  bVar2 = false;
  uVar1 = ((ulong)puVar3 & 1) != 0;
  if ((bool)uVar1) {
    lVar4 = local_18;
    _objc_getAssociatedObject(local_18,&DAT_028e3f10);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = lVar4 != 0;
    local_29 = uVar1;
    local_28 = lVar4;
    (*(code *)PTR__objc_release_02578630)(lVar4);
    uVar1 = local_29;
  }
  local_29 = uVar1;
  if (bVar2) {
    lVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationItem_0269cf08);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_38 = lVar5;
    (*(code *)PTR__objc_release_02578630)(lVar4);
    lVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_action_026a4358);
    if (lVar4 - (long)PTR_s_WCRefine_finishMessageRepository_026b2b50 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setEnabled__026ca938,1);
    }
    else {
      FUN_016d1ccc(lVar4 - (long)PTR_s_WCRefine_finishMessageRepository_026b2b50,local_18);
    }
    _objc_storeStrong(&local_38,0);
  }
  return;
}

