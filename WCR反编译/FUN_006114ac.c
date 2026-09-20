// FUN_006114ac @ 006114ac

void FUN_006114ac(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  u_int32_t uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  ulong local_70 [3];
  ulong local_58;
  undefined4 local_4c;
  undefined8 local_48;
  ulong local_40;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_40 = 0;
  local_38 = param_2;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  uVar3 = local_40;
  if ((long)local_38 < 1) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = uVar3;
    local_4c = 1;
    goto LAB_006118e0;
  }
  uVar3 = local_38;
  FUN_006121b4(local_38,local_38,local_40,local_48);
  _objc_retainAutoreleasedReturnValue();
  local_58 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_count_0269cfe0);
  if (uVar3 == 0) {
    local_28 = 0;
    local_4c = 1;
  }
  else {
    uVar3 = local_30;
    _objc_getAssociatedObject(local_30,DAT_026f44c0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_30;
    local_70[0] = uVar3;
    _objc_getAssociatedObject(local_30,DAT_026f44c8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_70[0];
    local_78 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_70[0],PTR_s_length_0269cca0);
    if ((uVar3 == 0) || (local_78 == 0)) {
LAB_006116fc:
      uVar3 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_count_0269cfe0);
      uVar2 = _arc4random_uniform((u_int32_t)uVar3);
      local_80 = (ulong)uVar2;
      uVar3 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_objectAtIndexedSubscript__0269cc78,local_80);
      _objc_retainAutoreleasedReturnValue();
      local_88 = uVar3;
      _objc_setAssociatedObject(local_30,DAT_026f44c0,uVar3,3);
      uVar3 = local_30;
      uVar1 = DAT_026f44c8;
      puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_38);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(uVar3,uVar1,puVar5,1);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      uVar3 = local_88;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = uVar3;
      local_4c = 1;
      _objc_storeStrong(&local_88,0);
    }
    else {
      uVar3 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_integerValue_026ca750);
      if (uVar3 != local_38) goto LAB_006116fc;
      uVar4 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_containsObject__0269cbb8,local_70[0]);
      uVar3 = local_70[0];
      if ((uVar4 & 1) == 0) goto LAB_006116fc;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = uVar3;
      local_4c = 1;
    }
    _objc_storeStrong(&local_78);
    _objc_storeStrong(local_70,0);
  }
  _objc_storeStrong(&local_58,0);
LAB_006118e0:
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

