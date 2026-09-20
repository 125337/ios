// FUN_003cc7e8 @ 003cc7e8

void FUN_003cc7e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long local_90;
  bool local_59;
  long local_58;
  long local_50;
  ulong local_48;
  long local_40;
  ulong local_38;
  undefined4 local_2c;
  ulong local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  uVar2 = local_28;
  if (local_20 != 0) {
    puVar1 = PTR__OBJC_CLASS___UITableViewCell_026ce200;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UITableViewCell_026ce200,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    uVar3 = local_28;
    if ((uVar2 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_38 = uVar3;
      local_40 = 0;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      local_48 = uVar3;
      while (uVar2 = local_48, local_48 != 0) {
        puVar1 = PTR__OBJC_CLASS___UITableView_026ce1a8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
        if ((uVar2 & 1) != 0) {
          _objc_storeStrong(&local_40,local_48);
          break;
        }
        uVar3 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_superview_026cab50);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_48;
        local_48 = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
      local_2c = 2;
      _objc_storeStrong(&local_48,0);
      local_59 = local_40 == 0;
      if (local_59) {
        local_90 = 0;
      }
      else {
        local_90 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_indexPathForCell__0269e208,local_38);
        _objc_retainAutoreleasedReturnValue();
        local_58 = local_90;
      }
      local_59 = !local_59;
      (*(code *)PTR__objc_retain_02578638)();
      local_50 = local_90;
      if (local_59) {
        (*(code *)PTR__objc_release_02578630)(local_58);
      }
      lVar4 = local_20;
      FUN_003a4820(local_20,local_50);
      _objc_retainAutoreleasedReturnValue();
      local_2c = 1;
      local_18 = lVar4;
      _objc_storeStrong(&local_50);
      _objc_storeStrong(&local_40,0);
      _objc_storeStrong(&local_38,0);
      goto LAB_003cca94;
    }
  }
  local_18 = 0;
  local_2c = 1;
LAB_003cca94:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

