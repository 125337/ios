// FUN_007b83a4 @ 007b83a4

void FUN_007b83a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  bool bVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong local_50;
  undefined1 local_45;
  undefined8 local_38;
  ulong local_30;
  cfstringStruct *local_28;
  undefined *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  _objc_setAssociatedObject(local_30,DAT_026f4670,local_38,1);
  uVar3 = local_30;
  FUN_007b8ad4();
  local_45 = (undefined1)uVar3;
  if ((uVar3 & 1) == 0) {
    FUN_007b9b78();
    puVar4 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = _WCRefineHomeGroupsDidChangeNotification;
    local_28 = &cf_wcrTelegramTabChanged;
    puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_20 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_20,&local_28,1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_postNotificationName_object_user_026a1e90,uVar1,0);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
  }
  FUN_007b5940(local_30);
  FUN_007b9c94(local_30,local_38);
  _objc_setAssociatedObject(local_30,DAT_026f4670,local_38,1);
  uVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar3);
  FUN_007b5940(local_30);
  FUN_007ad034(local_30);
  uVar3 = local_30;
  _objc_getAssociatedObject(local_30,DAT_026f4680);
  _objc_retainAutoreleasedReturnValue();
  local_50 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_state_026cab20);
  bVar2 = true;
  if (uVar3 != 1) {
    uVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_state_026cab20);
    bVar2 = uVar3 == 2;
  }
  if (!bVar2) {
    FUN_007b7ab4(0);
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

