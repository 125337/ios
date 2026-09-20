// FUN_0021a0b4 @ 0021a0b4

void FUN_0021a0b4(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong local_128;
  ulong local_100;
  bool local_81;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  undefined4 local_60;
  byte local_59;
  ulong local_58;
  ulong local_40;
  undefined *local_38;
  ulong local_30;
  ulong local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_59 = 0;
  bVar1 = true;
  if (local_30 != 0) {
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    local_59 = 1;
    puVar4 = PTR_s_rangeOfString__0269d838;
    local_58 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = uVar2 == 0x7fffffffffffffff;
    local_40 = uVar2;
    local_38 = puVar4;
  }
  if ((local_59 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  if (bVar1) {
    local_28 = 0;
    local_60 = 1;
  }
  else {
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,&cf_m_arrOriginView);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_30;
    local_68 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,&cf_m_iCurIndex);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar3 = local_68;
    local_70 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_count_0269cfe0);
    if (uVar3 <= uVar2) {
      local_100 = 0;
    }
    else {
      local_100 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_objectAtIndexedSubscript__0269cc78,local_70);
      _objc_retainAutoreleasedReturnValue();
      local_80 = local_100;
    }
    local_81 = uVar3 > uVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_78 = local_100;
    if (local_81) {
      (*(code *)PTR__objc_release_02578630)(local_80);
    }
    uVar2 = local_78;
    puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
    if ((uVar2 & 1) == 0) {
      local_128 = 0;
    }
    else {
      local_128 = local_78;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = local_128;
    local_60 = 1;
    _objc_storeStrong(&local_78);
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

