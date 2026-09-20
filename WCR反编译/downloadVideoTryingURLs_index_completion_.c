// downloadVideoTryingURLs:index:completion: @ 01001084

/* Function Stack Size: 0x28 bytes */

void WCRefineLinkMediaSender::downloadVideoTryingURLs_index_completion_
               (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4,ID param_5,
               undefined4 param_6)

{
  long lVar1;
  ulong uVar2;
  ID IVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  code *local_d8;
  undefined *local_d0;
  ulong local_c8;
  long local_c0;
  ID local_b8;
  ulong local_b0;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  ulong local_88;
  ulong local_80;
  ID local_78;
  long local_70;
  undefined4 local_64;
  long local_60;
  ulong local_58;
  ulong local_50;
  SEL local_48;
  ID local_40;
  undefined8 local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_50 = 0;
  local_48 = param_2;
  local_40 = param_1;
  _objc_storeStrong(&local_50,param_3);
  local_60 = 0;
  local_58 = param_4;
  _objc_storeStrong(&local_60,param_5);
  uVar2 = local_58;
  uVar4 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0);
  IVar3 = local_40;
  lVar1 = local_60;
  puVar6 = PTR__OBJC_CLASS___NSError_026ce470;
  if (uVar2 < uVar4) {
    local_70 = local_58 + 1;
    uVar4 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_objectAtIndexedSubscript__0269cc78,local_58);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_50;
    puVar6 = PTR___NSConcreteStackBlock_02578660;
    local_a8 = PTR___NSConcreteStackBlock_02578660;
    local_a0 = 0xc2000000;
    local_9c = 0;
    local_98 = FUN_01001400;
    local_90 = &DAT_025840b0;
    local_80 = local_58;
    (*(code *)PTR__objc_retain_02578638)();
    lVar1 = local_60;
    local_88 = uVar2;
    local_78 = local_40;
    local_e8 = puVar6;
    local_e0 = 0xc2000000;
    local_dc = 0;
    local_d8 = FUN_01001558;
    local_d0 = &DAT_025840e0;
    (*(code *)PTR__objc_retain_02578638)();
    uVar2 = local_50;
    local_c0 = lVar1;
    local_b8 = local_40;
    (*(code *)PTR__objc_retain_02578638)();
    local_c8 = uVar2;
    local_b0 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar3,PTR_s_downloadURL_expectVideo_progress_026ad8e0,uVar4,1,&local_a8,&local_e8);
    (*(code *)PTR__objc_release_02578630)(uVar4);
    _objc_storeStrong(&local_c8);
    _objc_storeStrong(&local_c0,0);
    _objc_storeStrong(&local_88,0);
    local_64 = 0;
  }
  else {
    if (local_60 != 0) {
      local_38 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_02578048;
      local_30 = &cf_N_1Y_;
      puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_30,&local_38,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar6,PTR_s_errorWithDomain_code_userInfo__026a1648,&cf_WCRefineLinkMediaSender,
                 0xfffffffffffffffe);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar1 + 0x10))(lVar1,0);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_release_02578630)(puVar5);
    }
    local_64 = 1;
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

