// FUN_005e0718 @ 005e0718

bool FUN_005e0718(undefined8 param_1,ulong *param_2,byte *param_3,ulong *param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *local_118;
  uint local_f0;
  ulong local_78;
  undefined8 local_70;
  ulong local_68;
  ulong local_60;
  byte local_55 [13];
  ulong local_48;
  ulong *local_40;
  byte *local_38;
  ulong *local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  if (param_2 != (ulong *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (byte *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (ulong *)0x0) {
    *param_4 = 0;
  }
  uVar3 = local_28;
  local_40 = param_4;
  local_38 = param_3;
  local_30 = param_2;
  FUN_005e11dc();
  _objc_retainAutoreleasedReturnValue();
  local_55[0] = 0;
  local_60 = 0;
  local_70 = 0;
  local_48 = uVar3;
  FUN_005e20e8(uVar3,local_55,&local_70);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_60,local_70);
  local_68 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isEqualToString__0269ccc8,&cf_plugin);
  if ((uVar3 & 1) != 0) {
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_valueForKey__0269d128,&cf_userInfo);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_78 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
    local_f0 = 0;
    if ((uVar3 & 1) != 0) {
      uVar3 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_78,PTR_s_objectForKeyedSubscript__0269d098,&cf_WCRefineBuiltInPluginHub);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_f0 = (uint)uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    if ((local_f0 & 1) != 0) {
      _objc_storeStrong(&local_68,0);
    }
    _objc_storeStrong(&local_78,0);
  }
  uVar3 = local_68;
  if (local_30 != (ulong *)0x0) {
    _objc_retainAutorelease();
    *local_30 = uVar3;
  }
  if (local_38 != (byte *)0x0) {
    *local_38 = local_55[0] & 1;
  }
  if (local_40 != (ulong *)0x0) {
    if (local_60 == 0) {
      local_118 = &local_48;
    }
    else {
      local_118 = &local_60;
    }
    uVar3 = *local_118;
    _objc_retainAutorelease();
    *local_40 = uVar3;
  }
  uVar3 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_28,0);
  return uVar3 != 0;
}

