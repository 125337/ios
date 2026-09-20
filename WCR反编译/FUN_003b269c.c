// FUN_003b269c @ 003b269c

byte FUN_003b269c(double param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  ulong local_58 [4];
  undefined1 local_31;
  cfstringStruct *local_30;
  undefined4 local_24;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  uVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___UITableViewCell_026ce200;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UITableViewCell_026ce200,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    pcVar3 = &cf_isMenuHidden;
    _NSSelectorFromString();
    uVar2 = local_20;
    local_30 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,pcVar3);
    if ((uVar2 & 1) != 0) {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,local_30);
      local_31 = (undefined1)uVar2;
      if ((uVar2 & 1) == 0) {
        local_11 = 1;
        local_24 = 1;
        goto LAB_003b2888;
      }
    }
    uVar2 = local_20;
    FUN_0036bd00();
    _objc_retainAutoreleasedReturnValue();
    local_11 = false;
    local_58[0] = uVar2;
    if (uVar2 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_frame_026ca640);
      local_11 = 0.5 < ABS(param_1);
    }
    local_24 = 1;
    _objc_storeStrong(local_58,0);
  }
LAB_003b2888:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

