// FUN_000c93c4 @ 000c93c4

double FUN_000c93c4(double param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  double local_108;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_58;
  undefined4 local_4c;
  double local_48;
  undefined8 local_40;
  double local_38;
  undefined8 local_30;
  long *local_28;
  
  local_40 = 0;
  _objc_storeStrong(&local_40,param_2);
  local_28 = &DAT_028c8288;
  local_30 = 0;
  local_48 = param_1;
  _objc_storeStrong(&local_30,&PTR___NSConcreteGlobalBlock_02579f50);
  if (*local_28 + 1 != 0) {
    _dispatch_once(*local_28 + 1,local_28,local_30);
  }
  _objc_storeStrong(&local_30,0);
  if (((DAT_028c8270 == 0) || (DAT_028c8278 == 0)) || (DAT_028c8280 == 0)) {
    local_38 = local_48;
    local_4c = 1;
  }
  else {
    pcVar1 = &cf_currentContext;
    _NSSelectorFromString();
    pcVar2 = &cf_getService_;
    local_58 = pcVar1;
    _NSSelectorFromString();
    pcVar1 = &cf_getValueOfProperty_inRuleSet_;
    local_70 = pcVar2;
    _NSSelectorFromString();
    pcVar2 = &cf_parseFloatFromValues_;
    local_78 = pcVar1;
    _NSSelectorFromString();
    uVar3 = DAT_028c8278;
    local_80 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028c8278,PTR_s_respondsToSelector__026ca818,local_58);
    if (((uVar3 & 1) == 0) ||
       (uVar3 = DAT_028c8270,
       (*(code *)PTR__objc_msgSend_02578628)
                 (DAT_028c8270,PTR_s_respondsToSelector__026ca818,local_80), (uVar3 & 1) == 0)) {
      local_38 = local_48;
      local_4c = 1;
    }
    else {
      uVar3 = DAT_028c8278;
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028c8278,local_58);
      _objc_retainAutoreleasedReturnValue();
      local_88 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_respondsToSelector__026ca818,local_70);
      if ((uVar3 & 1) == 0) {
        local_38 = local_48;
        local_4c = 1;
      }
      else {
        uVar3 = local_88;
        (*(code *)PTR__objc_msgSend_02578628)(local_88,local_70,DAT_028c8280);
        _objc_retainAutoreleasedReturnValue();
        local_90 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_respondsToSelector__026ca818,local_78);
        if ((uVar3 & 1) == 0) {
          local_38 = local_48;
          local_4c = 1;
        }
        else {
          uVar3 = local_90;
          (*(code *)PTR__objc_msgSend_02578628)(local_90,local_78,local_40,&cf__message_node_view);
          _objc_retainAutoreleasedReturnValue();
          local_98 = uVar3;
          if (uVar3 == 0) {
            local_38 = local_48;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(DAT_028c8270,local_80,uVar3);
            if ((param_1 <= 0.0) || (local_108 = param_1, 200.0 <= param_1)) {
              local_108 = local_48;
            }
            local_38 = local_108;
          }
          local_4c = 1;
          _objc_storeStrong(&local_98,0);
        }
        _objc_storeStrong(&local_90,0);
      }
      _objc_storeStrong(&local_88,0);
    }
  }
  _objc_storeStrong(&local_40,0);
  return local_38;
}

