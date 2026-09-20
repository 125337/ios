// FUN_005b4210 @ 005b4210

void FUN_005b4210(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_30;
  undefined8 local_28;
  ulong local_20;
  ulong local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = param_1;
  do {
    uVar2 = local_30;
    if (local_30 == 0) {
      local_18 = 0;
LAB_005b4348:
      _objc_storeStrong(&local_30,0);
      _objc_autoreleaseReturnValue(local_18);
      return;
    }
    puVar1 = PTR__OBJC_CLASS___UITableViewCell_026ce200;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UITableViewCell_026ce200,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    uVar3 = local_30;
    if ((uVar2 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar3;
      goto LAB_005b4348;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_nextResponder_0269d0d8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_30;
    local_30 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
  } while( true );
}

