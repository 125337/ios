// FUN_0074a1dc @ 0074a1dc

void FUN_0074a1dc(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_90;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  ulong local_60;
  long local_58;
  ulong local_50;
  undefined4 local_48;
  long local_38;
  ulong local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_38 = 0;
  local_30 = param_2;
  _objc_storeStrong(&local_38,param_3);
  uVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_count_0269cfe0);
  if (((local_30 < uVar3) && (local_30 != 0)) && (local_38 != 0)) {
    uVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_allKeys_0269ef58);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_38;
    local_80 = PTR___NSConcreteGlobalBlock_02578658;
    local_78 = 0xd0800000;
    local_74 = 0;
    local_70 = FUN_0074b488;
    local_68 = &DAT_0257f7c8;
    (*(code *)PTR__objc_retain_02578638)();
    uVar3 = local_28;
    local_58 = lVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = uVar3;
    uVar3 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar4,PTR_s_sortedArrayUsingComparator__0269fae8,&local_80);
    _objc_retainAutoreleasedReturnValue();
    local_50 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_count_0269cfe0);
    uVar3 = uVar3 - local_30;
    local_90 = 0;
    while( true ) {
      bVar2 = false;
      if (local_90 < uVar3) {
        uVar4 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0);
        bVar2 = local_90 < uVar4;
      }
      uVar4 = local_28;
      if (!bVar2) break;
      uVar5 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_objectAtIndexedSubscript__0269cc78,local_90);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_removeObjectForKey__0269d700);
      (*(code *)PTR__objc_release_02578630)(uVar5);
      local_90 = local_90 + 1;
    }
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_58,0);
    local_48 = 0;
  }
  else {
    local_48 = 1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  return;
}

