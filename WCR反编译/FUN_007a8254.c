// FUN_007a8254 @ 007a8254

byte FUN_007a8254(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong local_40;
  int local_38;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  uVar4 = local_28;
  if (local_28 != 0) {
    pcVar1 = &cf_MainFrameTableView;
    _NSClassFromString();
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,pcVar1);
    if ((uVar4 & 1) != 0) {
      if (local_20 == 0) {
        local_11 = 1;
        local_38 = 1;
      }
      else {
        uVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,&cf_m_tableView);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___UITableView_026ce1a8;
        local_40 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
        uVar4 = uVar2 & 0xffffffff;
        if (((uVar2 & 1) == 0) || (uVar4 = 0, local_40 == local_28)) {
          local_38 = 0;
        }
        else {
          uVar4 = 1;
          local_11 = 0;
          local_38 = 1;
        }
        _objc_storeStrong(uVar4,&local_40,0);
        if (local_38 == 0) {
          local_11 = 1;
          local_38 = 1;
        }
      }
      goto LAB_007a84a4;
    }
  }
  local_11 = 0;
  local_38 = 1;
LAB_007a84a4:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

