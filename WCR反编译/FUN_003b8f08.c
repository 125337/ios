// FUN_003b8f08 @ 003b8f08

void FUN_003b8f08(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long local_28;
  long local_20;
  long local_18;
  
  lVar1 = *(long *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  FUN_003b90d0();
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar1;
  if (lVar1 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elST_N);
  }
  else {
    puVar2 = PTR_WCRefineTopBarProfileCardPresenter_026ce228;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineTopBarProfileCardPresenter_026ce228,
               PTR_s_performStandaloneActionWithID_co_0269ea58,_WCRefineProfileCardActionIDStar,
               lVar1);
    if (((ulong)puVar2 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_fh_u1Y_);
    }
    else {
      FUN_003694c4(*(undefined8 *)(param_1 + 0x20));
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_session_0269d000);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_username_026a2238);
      _objc_retainAutoreleasedReturnValue();
      FUN_003b7208(uVar5,uVar3);
      (*(code *)PTR__objc_release_02578630)(uVar4);
      (*(code *)PTR__objc_release_02578630)(uVar3);
      FUN_00368c14(*(undefined8 *)(param_1 + 0x28),&cf_homeLongPressStar);
      if (*(long *)(param_1 + 0x30) != 0) {
        (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
      }
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

