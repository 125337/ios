// FUN_019e824c @ 019e824c

void FUN_019e824c(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  code *local_c8;
  undefined *local_c0;
  undefined8 *local_b8;
  undefined8 local_a0;
  long local_98;
  undefined8 local_90;
  undefined8 *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  code *local_70;
  undefined8 local_68;
  undefined4 local_5c;
  long local_58;
  long local_50;
  undefined8 local_48;
  long local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  local_50 = 0;
  _objc_storeStrong(&local_50,param_1);
  lVar2 = local_50;
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_58 = lVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  lVar3 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
  lVar2 = local_58;
  if (lVar3 == 0) {
    local_48 = 0;
    local_5c = 1;
  }
  else {
    local_88 = &local_90;
    local_90 = 0;
    local_80 = 0x32000000;
    local_7c = 0x30;
    local_78 = FUN_019f6e84;
    local_70 = FUN_019f6ed8;
    local_68 = 0;
    lVar3 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
    local_38 = 0;
    local_30 = 0;
    local_a0 = 0;
    local_d8 = PTR___NSConcreteStackBlock_02578660;
    local_d0 = 0xc2000000;
    local_cc = 0;
    local_c8 = FUN_019f6f04;
    local_c0 = &DAT_0258aae0;
    local_b8 = &local_90;
    local_98 = lVar3;
    local_40 = lVar3;
    local_28 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (lVar2,PTR_s_enumerateSubstringsInRange_optio_026a64a0,0,lVar3,2,&local_d8);
    uVar4 = local_88[5];
    (*(code *)PTR__objc_retain_02578638)();
    local_5c = 1;
    local_48 = uVar4;
    __Block_object_dispose(&local_90,8);
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_autoreleaseReturnValue(local_48);
  return;
}

