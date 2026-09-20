// FUN_01a05984 @ 01a05984

void FUN_01a05984(long param_1)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_30 = 0;
  local_28 = param_1;
  _objc_storeStrong();
  puVar2 = PTR_WCRefineFriendRelationChecker_026ceb00;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineFriendRelationChecker_026ceb00,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_20 = *(undefined8 *)(param_1 + 0x20);
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_20,1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_deleteUserNames_retainChatHistor_026bb5e8,puVar3,1);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  pcVar1 = &cf__Rd_YS;
  if (puVar4 == (undefined *)0x0) {
    pcVar1 = &cf_Rd1Y_;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar1);
  lVar5 = param_1 + 0x30;
  _objc_loadWeakRetained();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar5);
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),puVar4 != (undefined *)0x0);
  _objc_storeStrong(&local_30,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

