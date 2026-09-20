// FUN_00746804 @ 00746804

void FUN_00746804(undefined8 param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if ((local_18 != 0) &&
     (uVar2 = local_18, FUN_00747044(), uVar4 = local_18, uVar1 = DAT_026f45c8, (uVar2 & 1) == 0)) {
    puVar3 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(uVar4,uVar1,puVar3,1);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    uVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_m_chatName_026a7cb0);
    _objc_retainAutoreleasedReturnValue();
    FUN_007410f8();
    (*(code *)PTR__objc_release_02578630)(uVar4);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

