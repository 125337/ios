// FUN_01af9418 @ 01af9418

void FUN_01af9418(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long local_28;
  long local_20;
  long local_18;
  
  lVar1 = param_1 + 0x28;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_28 = lVar1;
  if ((lVar1 != 0) &&
     ((*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_coldStartCatchUpToken_026be6b8),
     lVar1 == *(long *)(param_1 + 0x30))) {
    lVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_window_026cabf0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    lVar1 = local_28;
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    if (lVar2 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x20),PTR_s_doubleValue_026ca608);
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_stringWithFormat__0269cca8,&cf_coldStart___1fs);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_refreshUnreadBadgesWithReason__026a2570);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

