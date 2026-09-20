// wcr_handleProfileCardActionButton: @ 0155d220

/* Function Stack Size: 0x18 bytes */

void WCRefineTopBarProfileCardPresenter::wcr_handleProfileCardActionButton_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (undefined *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar3 = local_28;
  _objc_getAssociatedObject(local_28,DAT_028c5df8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = local_28;
  local_30 = puVar3;
  _objc_getAssociatedObject(local_28,DAT_028c5ec8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  FUN_01528c84();
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar4 = local_28;
  _objc_getAssociatedObject(local_28,DAT_028c5ed0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = local_30;
  bVar1 = false;
  bVar2 = true;
  local_40 = puVar4;
  if (local_30 != (undefined *)0x0) {
    local_48 = PTR__OBJC_CLASS___NSNull_026ce0e8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = true;
    bVar2 = true;
    if (puVar3 != local_48) {
      puVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
      bVar2 = puVar3 == (undefined *)0x0;
    }
  }
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  if (!bVar2) {
    FUN_01555510();
    FUN_01536050(local_30,local_38,local_40);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

