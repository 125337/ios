// FUN_0025fcec @ 0025fcec

/* WARNING: Type propagation algorithm not settling */

void FUN_0025fcec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  uint uVar1;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong local_110;
  undefined8 local_a8 [2];
  ulong local_98;
  byte local_89;
  ulong local_88;
  undefined8 local_80;
  ulong local_78 [3];
  ulong local_60 [3];
  undefined8 local_48;
  undefined8 local_40;
  ulong local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 *puVar2;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  puVar2 = &local_48;
  local_48 = 0;
  _objc_storeStrong(puVar2,param_5);
  uVar1 = (uint)puVar2;
  FUN_00264438();
  if ((uVar1 & 1) != 0) {
    FUN_002644d4();
    local_60[0] = 0;
    uVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_getParams_026a1290);
    if ((uVar3 & 1) != 0) {
      uVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_getParams_026a1290);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_60[0];
      local_60[0] = uVar4;
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    local_78[1] = 0;
    local_78[0] = 0;
    local_80 = 0;
    uVar3 = local_60[0];
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60[0],PTR_s_respondsToSelector__026ca818,PTR_s_objectForKey__0269e048);
    if ((uVar3 & 1) != 0) {
      uVar4 = local_60[0];
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60[0],PTR_s_objectForKey__0269e048,&cf_eventConfigDict);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_78[0];
      local_78[0] = uVar4;
      (*(code *)PTR__objc_release_02578630)(uVar3);
      uVar3 = local_78[0];
      local_89 = 0;
      puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
      if ((uVar3 & 1) == 0) {
        local_110 = 0;
      }
      else {
        local_110 = local_78[0];
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_78[0],PTR_s_objectForKey__0269e048,&cf_forbidForward);
        _objc_retainAutoreleasedReturnValue();
        local_89 = 1;
        local_88 = local_110;
      }
      _objc_storeStrong(local_78 + 1,local_110);
      if ((local_89 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_88);
      }
      uVar3 = local_60[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_60[0],PTR_s_objectForKey__0269e048,&cf_url);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_98 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
      if ((uVar3 & 1) != 0) {
        _objc_storeStrong(&local_80,local_98);
      }
      _objc_storeStrong(&local_98,0);
    }
    _objc_storeStrong(&local_80);
    _objc_storeStrong(local_78,0);
    _objc_storeStrong(local_78 + 1,0);
    _objc_storeStrong(local_60,0);
  }
  uVar6 = local_28;
  (*DAT_028c9468)(local_28,local_30,local_38,local_40,local_48);
  uVar1 = (uint)uVar6;
  FUN_00264438();
  if ((uVar1 & 1) != 0) {
    local_a8[0] = 0;
    uVar7 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_valueForKey__0269d128,&cf_m_imgUrl);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = local_a8[0];
    local_a8[0] = uVar8;
    (*(code *)PTR__objc_release_02578630)(uVar6);
    (*(code *)PTR__objc_release_02578630)(uVar7);
    _objc_storeStrong(local_a8,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

