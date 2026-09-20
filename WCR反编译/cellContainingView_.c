// cellContainingView: @ 01de9d58

/* Function Stack Size: 0x18 bytes */

ID WCRefineSpecialTextListViewController::cellContainingView_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  int local_3c;
  ulong local_38;
  ulong local_30;
  SEL local_28;
  ID local_20;
  ulong local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar2 = local_30;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = uVar2;
  do {
    uVar2 = local_38;
    if (local_38 == 0) {
      local_3c = 2;
LAB_01de9e68:
      _objc_storeStrong(&local_38,0);
      local_3c = local_3c + -2;
      if (local_3c == 0) {
        local_18 = 0;
        local_3c = 1;
      }
      _objc_storeStrong(local_3c,&local_30,0);
      _objc_autoreleaseReturnValue();
      return local_18;
    }
    puVar1 = PTR__OBJC_CLASS___UITableViewCell_026ce200;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UITableViewCell_026ce200,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    uVar3 = local_38;
    if ((uVar2 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar3;
      local_3c = 1;
      goto LAB_01de9e68;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_38;
    local_38 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
  } while( true );
}

