// FUN_006c04dc @ 006c04dc

void FUN_006c04dc(long param_1)

{
  undefined *puVar1;
  undefined *local_28;
  long local_20;
  long local_18;
  
  puVar1 = PTR_WCRefineHelper_026ce000;
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_contactFromMsgViewController__0269d468,
             *(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  if (puVar1 != (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineQuickRemarkEditor_026ce820,PTR_s_presentForContact__026a68e8,puVar1);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

