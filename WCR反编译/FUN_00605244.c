// FUN_00605244 @ 00605244

void FUN_00605244(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *local_108;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined4 local_64;
  ulong local_60;
  ulong local_58 [3];
  undefined *local_40;
  ulong local_38;
  undefined8 local_30;
  ulong local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  puVar1 = PTR__OBJC_CLASS___UIImpactFeedbackGenerator_026cdff0;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_initWithStyle__026ca710,1);
  local_40 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_prepare_026ca7d8);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_impactOccurred_026ca6a0);
  _objc_storeStrong(&local_40,0);
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_m_chatRoomContact_0269e730);
  _objc_retainAutoreleasedReturnValue();
  local_60 = 0;
  local_58[0] = uVar2;
  if ((uVar2 != 0) &&
     ((*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsUsrName_0269d638),
     (uVar2 & 1) != 0)) {
    uVar3 = local_58[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_valueForKey__0269d128,&cf_m_nsUsrName);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_60;
    local_60 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  if ((local_60 == 0) ||
     (uVar2 = local_60, (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0),
     uVar2 == 0)) {
    local_64 = 1;
  }
  else {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_70 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_navigationAvatarBlacklist_026a0ad8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_108 = puVar4;
    if (puVar4 == (undefined *)0x0) {
      local_80 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_108 = local_80;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_mutableCopy_0269d8a0);
    local_78 = local_108;
    if (puVar4 == (undefined *)0x0) {
      (*(code *)PTR__objc_release_02578630)(local_80);
    }
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    uVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isOn_0269d560);
    if ((uVar2 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_removeObject__0269d678,local_60);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_70,PTR_s_setNavigationAvatarBlacklist__026a0ba8,local_78);
    }
    else {
      puVar1 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_containsObject__0269cbb8,local_60);
      if (((ulong)puVar1 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_addObject__0269d180,local_60);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_70,PTR_s_setNavigationAvatarBlacklist__026a0ba8,local_78);
      }
    }
    puVar1 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    _dispatch_async();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    _objc_storeStrong(&local_78);
    _objc_storeStrong(&local_70,0);
    local_64 = 0;
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(local_58,0);
  _objc_storeStrong(&local_38,0);
  return;
}

