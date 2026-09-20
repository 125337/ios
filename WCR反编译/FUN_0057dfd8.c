// FUN_0057dfd8 @ 0057dfd8

void FUN_0057dfd8(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_48;
  ulong local_38;
  undefined4 local_30;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_0057a910();
  _objc_retainAutoreleasedReturnValue();
  local_20 = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (uVar2 == 0) {
    local_30 = 1;
  }
  else {
    FUN_0057bc48();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_38 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    bVar1 = false;
    local_48 = 0;
    while( true ) {
      uVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
      if (uVar2 <= local_48) break;
      uVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_objectAtIndexedSubscript__0269cc78,local_48);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      FUN_0057a910();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar4);
      (*(code *)PTR__objc_release_02578630)(uVar3);
      (*(code *)PTR__objc_release_02578630)(uVar2);
      if ((uVar5 & 1) != 0) {
        uVar2 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_copy_0269d150);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_setObject_atIndexedSubscript__0269e970,uVar2,local_48);
        (*(code *)PTR__objc_release_02578630)(uVar2);
        bVar1 = true;
        break;
      }
      local_48 = local_48 + 1;
    }
    uVar2 = local_38;
    if (!bVar1) {
      uVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_copy_0269d150);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_addObject__0269d180,uVar3);
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    FUN_00588e58(local_38);
    _objc_storeStrong(&local_38,0);
    local_30 = 0;
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

