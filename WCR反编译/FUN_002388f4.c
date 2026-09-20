// FUN_002388f4 @ 002388f4

void FUN_002388f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *local_f0;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  ulong local_60;
  int local_54;
  ulong local_50 [3];
  undefined *local_38;
  ulong local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  puVar1 = PTR__OBJC_CLASS___UIImpactFeedbackGenerator_026cdff0;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_initWithStyle__026ca710,1);
  local_38 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_prepare_026ca7d8);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_impactOccurred_026ca6a0);
  _objc_storeStrong(&local_38,0);
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_valueForKey__0269d128,&cf_m_contact);
  _objc_retainAutoreleasedReturnValue();
  local_50[0] = uVar2;
  if (uVar2 == 0) {
    local_54 = 1;
  }
  else {
    local_60 = 0;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsUsrName_0269d638);
    if ((uVar2 & 1) != 0) {
      uVar3 = local_50[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_valueForKey__0269d128,&cf_m_nsUsrName)
      ;
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_60;
      local_60 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    uVar2 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
    if (uVar2 == 0) {
      local_54 = 1;
    }
    else {
      puVar1 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      local_68 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_navigationAvatarBlacklist_026a0ad8);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_f0 = puVar4;
      if (puVar4 == (undefined *)0x0) {
        local_78 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        local_f0 = local_78;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_mutableCopy_0269d8a0);
      local_70 = local_f0;
      if (puVar4 == (undefined *)0x0) {
        (*(code *)PTR__objc_release_02578630)(local_78);
      }
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isOn_0269d560);
      if ((uVar2 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_removeObject__0269d678,local_60);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_68,PTR_s_setNavigationAvatarBlacklist__026a0ba8,local_70);
      }
      else {
        puVar1 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_containsObject__0269cbb8,local_60);
        if (((ulong)puVar1 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_addObject__0269d180,local_60);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_68,PTR_s_setNavigationAvatarBlacklist__026a0ba8,local_70);
        }
      }
      puVar1 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      _dispatch_async();
      (*(code *)PTR__objc_release_02578630)(puVar1);
      _objc_storeStrong(&local_70);
      _objc_storeStrong(&local_68,0);
      local_54 = 0;
    }
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(local_50,0);
  if (local_54 == 0) {
    local_54 = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

