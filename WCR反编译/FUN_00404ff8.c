// FUN_00404ff8 @ 00404ff8

void FUN_00404ff8(ulong param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined *puVar3;
  int local_34;
  ulong local_30 [3];
  ulong local_18;
  
  FUN_00405240();
  if ((param_1 & 1) == 0) {
    FUN_004052dc();
    _objc_retainAutoreleasedReturnValue();
    local_18 = param_1;
    do {
      uVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_count_0269cfe0);
      local_34 = 0;
      if (uVar2 == 0) break;
      uVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_firstObject_0269d1f8);
      _objc_retainAutoreleasedReturnValue();
      local_30[0] = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_removeObjectAtIndex__0269d530,0);
      uVar2 = local_30[0];
      puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      uVar1 = (uint)uVar2;
      if ((uVar2 & 1) == 0) {
        local_34 = 2;
      }
      else {
        _objc_autoreleasePoolPush();
        FUN_00405350(local_30[0]);
        _objc_autoreleasePoolPop();
        FUN_00405240();
        if ((uVar1 & 1) == 0) {
          local_34 = 0;
        }
        else {
          local_34 = 3;
        }
      }
      _objc_storeStrong(local_30,0);
    } while ((local_34 == 0) || (local_34 = local_34 + -2, local_34 == 0));
    _objc_storeStrong(local_34,&local_18,0);
  }
  return;
}

