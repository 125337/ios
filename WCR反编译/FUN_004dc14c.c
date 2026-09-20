// FUN_004dc14c @ 004dc14c

void FUN_004dc14c(undefined8 param_1,undefined8 param_2,byte param_3)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_d0;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined4 local_48;
  byte local_31;
  long local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  lVar1 = local_30;
  local_31 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if ((lVar1 == 0) ||
     (uVar2 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0),
     uVar2 == 0)) {
    local_48 = 1;
    goto LAB_004dc5e0;
  }
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_58 = (undefined *)0x0;
  uVar2 = local_28;
  local_50 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf_contact);
  if ((uVar2 & 1) == 0) {
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf_group);
    if ((uVar2 & 1) != 0) {
      puVar4 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_messageBlockGroupEnabledIDs_026a41c0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_58;
      local_58 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      goto LAB_004dc3d8;
    }
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf_member);
    if ((uVar2 & 1) != 0) {
      puVar4 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_messageBlockGroupMemberEnabledID_026a0b00);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_58;
      local_58 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      goto LAB_004dc3d8;
    }
    local_48 = 1;
  }
  else {
    puVar4 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_messageBlockContactEnabledIDs_026a0b10);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_58;
    local_58 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar3);
LAB_004dc3d8:
    if (local_58 == (undefined *)0x0) {
      local_d0 = *(undefined **)PTR____NSArray0___02578280;
    }
    else {
      local_d0 = local_58;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_mutableCopy_0269d8a0);
    local_60 = local_d0;
    if ((local_31 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_removeObject__0269d678,local_30);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_containsObject__0269cbb8,local_30);
      if (((ulong)local_d0 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_addObject__0269d180,local_30);
      }
    }
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf_contact);
    if ((uVar2 & 1) == 0) {
      uVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf_group);
      if ((uVar2 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_setMessageBlockGroupMemberEnable_026a4240,local_60);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_setMessageBlockGroupEnabledIDs__026a4238,local_60);
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_setMessageBlockContactEnabledIDs_026a4230,local_60);
    }
    _objc_storeStrong(&local_60,0);
    local_48 = 0;
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
LAB_004dc5e0:
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

