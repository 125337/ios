// FUN_004f80a8 @ 004f80a8

void FUN_004f80a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long local_30;
  long local_28;
  ulong local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  lVar2 = local_28;
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  lVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if ((lVar2 != 0) &&
     (uVar3 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_containsObject__0269cbb8,local_30),
     (uVar3 & 1) == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_addObject__0269d180,local_30);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_addObject__0269d180,local_30);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

