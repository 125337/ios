// FUN_00fa86b0 @ 00fa86b0

void FUN_00fa86b0(double param_1,long param_2)

{
  uint uVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  char *pcVar5;
  char *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  dispatch_semaphore_t pdVar9;
  dispatch_semaphore_t pdVar10;
  dispatch_time_t dVar11;
  long lVar12;
  undefined *local_98;
  undefined4 local_8c;
  long local_88;
  long local_80;
  undefined *local_78;
  char *local_70;
  long local_68;
  char *local_60;
  long local_58;
  long local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar2 = "WCPayTransferPrepayRequestStruct";
  local_58 = param_2;
  local_50 = param_2;
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)();
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  local_60 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_m_nsUsrName_0269d638);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setM_nsReceiverUserName__026acea0);
  (*(code *)PTR__objc_release_02578630)(uVar3);
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setM_uiFeeType__026acea8,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setM_uiTotalFee__026aceb0,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setM_uiPayScene__026aceb8,0x1f);
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setM_transferScene__026acec0,2);
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setM_uiPayChannel__026acec8,0xb);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_60,PTR_s_setM_nsProducetDesc__026aced0,&cf_AxWechathelper);
  puVar4 = PTR__OBJC_CLASS___NSDate_026cdf88;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_68 = (long)(param_1 * 1000.0);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__ld);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setPlaceorderReserves__026aced8);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  pcVar2 = "MMServiceCenter";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = "WCPayLogicMgr";
  _objc_getClass("WCPayLogicMgr");
  (*(code *)PTR__objc_msgSend_02578628)();
  pcVar6 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_getService__0269d170,pcVar5);
  _objc_retainAutoreleasedReturnValue();
  local_70 = pcVar6;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_GetTransferPrepayRequest__026acee0,local_60);
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_m_nsNickName_0269d758);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_stringWithFormat__0269cca8,&cf_ck_WhKm_);
  _objc_retainAutoreleasedReturnValue();
  local_78 = puVar4;
  (*(code *)PTR__objc_release_02578630)(uVar3);
  puVar4 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
  _objc_retainAutoreleasedReturnValue();
  local_48 = &cf_success;
  puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
  _objc_retainAutoreleasedReturnValue();
  local_40 = &cf_msg;
  local_30 = local_78;
  puVar8 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_38 = puVar7;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_38,&local_48,2);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar4,PTR_s_postNotificationName_object_user_026a1e90,&cf_checkFriendsEnd,0);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  (*(code *)PTR__objc_release_02578630)(puVar7);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  lVar12 = *(long *)(*(long *)(param_2 + 0x28) + 8);
  *(int *)(lVar12 + 0x18) = *(int *)(lVar12 + 0x18) + 1;
  pdVar9 = (dispatch_semaphore_t)PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  pdVar10 = pdVar9;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  dVar11 = _dispatch_time(0,3500000000);
  lVar12 = _dispatch_semaphore_wait(pdVar10,dVar11);
  (*(code *)PTR__objc_release_02578630)(pdVar10);
  (*(code *)PTR__objc_release_02578630)(pdVar9);
  local_80 = lVar12;
  if (lVar12 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_70,PTR_s_GetTransferPrepayRequest__026acee0,local_60);
    pdVar9 = (dispatch_semaphore_t)PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    pdVar10 = pdVar9;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    dVar11 = _dispatch_time(0,3500000000);
    lVar12 = _dispatch_semaphore_wait(pdVar10,dVar11);
    (*(code *)PTR__objc_release_02578630)(pdVar10);
    (*(code *)PTR__objc_release_02578630)(pdVar9);
    local_88 = lVar12;
    if (lVar12 != 0) {
      puVar4 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar7);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      local_8c = 1;
      goto LAB_00fa9040;
    }
  }
  puVar4 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_98 = puVar7;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar4 = local_98;
  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_valueForKey__0269d128,&cf_retmsg);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 0;
  (*(code *)PTR__objc_msgSend_02578628)(&cf_ok,PTR_s_isEqualToString__0269ccc8);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  if ((uVar1 & 1) == 0) {
    puVar4 = local_98;
    (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_valueForKey__0269d128,&cf_retcode);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = 0;
    (*(code *)PTR__objc_msgSend_02578628)(&cf_268502017,PTR_s_isEqualToString__0269ccc8);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    if ((uVar1 & 1) == 0) {
      puVar4 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar7);
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
    else {
      puVar4 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar7);
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
  }
  else {
    puVar4 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(puVar4);
  }
  _objc_storeStrong(&local_98,0);
  local_8c = 0;
LAB_00fa9040:
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_60,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

