// FUN_003b3bd0 @ 003b3bd0

byte FUN_003b3bd0(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  char *pcVar3;
  ulong local_38;
  char *local_30;
  undefined4 local_24;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    pcVar3 = "UITableViewCellContentView";
    _objc_getClass();
    local_30 = pcVar3;
    if (pcVar3 != (char *)0x0) {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isKindOfClass__0269cd68,pcVar3);
      if ((uVar2 & 1) != 0) {
        local_11 = 1;
        local_24 = 1;
        goto LAB_003b3d38;
      }
    }
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_rangeOfString_options__0269d118,&cf_ItemView,1);
    local_11 = uVar2 != 0x7fffffffffffffff;
    local_24 = 1;
    _objc_storeStrong(&local_38,0);
  }
LAB_003b3d38:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

