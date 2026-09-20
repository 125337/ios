// themeNameAtPoint:cell: @ 01fc04c4

/* Function Stack Size: 0x28 bytes */

ID __thiscall
WCRefineWechatThemeManagerViewController::themeNameAtPoint_cell_
          (WCRefineWechatThemeManagerViewController *this,ID param_1,SEL param_2,CGPoint param_3,
          ID *param_4)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  undefined8 in_d0;
  undefined8 in_d1;
  ID local_b8;
  bool local_71;
  ID local_70;
  ID local_68;
  ID local_60;
  ID local_58;
  undefined4 local_4c;
  ID local_48;
  ID *local_40;
  SEL local_38;
  ID local_30;
  undefined8 local_28;
  undefined8 local_20;
  ID local_18;
  
  local_40 = (ID *)param_3.field0_0x0;
  local_38 = param_2;
  local_30 = param_1;
  local_28 = in_d0;
  local_20 = in_d1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_manager_026a5390,local_40,param_3.field1_0x8);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,local_20);
  _objc_retainAutoreleasedReturnValue();
  local_48 = IVar2;
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  if (local_48 == 0) {
    local_18 = 0;
    local_4c = 1;
  }
  else {
    IVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_manager_026a5390);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_58 = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_manager_026a5390);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_60 = IVar2;
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_userInfo_0269f138);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    IVar2 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_isKindOfClass__0269cd68,puVar4);
    local_71 = (IVar2 & 1) == 0;
    if (local_71) {
      local_b8 = 0;
    }
    else {
      local_b8 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_userInfo_0269f138);
      _objc_retainAutoreleasedReturnValue();
      local_70 = local_b8;
    }
    local_71 = !local_71;
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = local_b8;
    if (local_71) {
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = local_58;
    if (local_40 != (ID *)0x0) {
      _objc_retainAutorelease();
      *local_40 = IVar1;
    }
    IVar1 = local_68;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = IVar1;
    local_4c = 1;
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_48,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

