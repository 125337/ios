// FUN_007a3c90 @ 007a3c90

void FUN_007a3c90(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  int iVar5;
  ulong local_48 [3];
  cfstringStruct *local_30;
  int local_24;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = 0;
    iVar5 = 1;
    local_24 = 1;
  }
  else {
    pcVar1 = &cf_UITableViewCellContentView;
    _NSClassFromString();
    uVar2 = local_20;
    local_30 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    local_48[0] = uVar2;
    while (local_48[0] != 0) {
      if (local_30 != (cfstringStruct *)0x0) {
        uVar3 = local_48[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_isKindOfClass__0269cd68,local_30);
        uVar2 = local_48[0];
        if ((uVar3 & 1) != 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = uVar2;
          local_24 = 1;
          goto LAB_007a3ea4;
        }
      }
      uVar2 = local_48[0];
      puVar4 = PTR__OBJC_CLASS___UITableViewCell_026ce200;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UITableViewCell_026ce200,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
      if ((uVar2 & 1) != 0) {
        uVar2 = local_48[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_contentView_026ca5a8);
        _objc_retainAutoreleasedReturnValue();
        local_24 = 1;
        local_18 = uVar2;
        goto LAB_007a3ea4;
      }
      uVar3 = local_48[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_48[0];
      local_48[0] = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    local_24 = 2;
LAB_007a3ea4:
    _objc_storeStrong(local_48,0);
    iVar5 = local_24 + -2;
    if (iVar5 == 0) {
      local_18 = 0;
      iVar5 = 1;
      local_24 = 1;
    }
  }
  _objc_storeStrong(iVar5,&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

