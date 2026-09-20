// batchSaveEmoticonItems:index:success:fail: @ 00f50c00

/* Function Stack Size: 0x30 bytes */

void WCRefineEmoticonToolsHelper::batchSaveEmoticonItems_index_success_fail_
               (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4,
               unsigned_long_long param_5,unsigned_long_long param_6)

{
  undefined *puVar1;
  ulong uVar2;
  ID IVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  code *local_a8;
  undefined *local_a0;
  ulong local_98;
  ID local_90;
  unsigned_long_long local_88;
  unsigned_long_long local_80;
  unsigned_long_long local_78;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  undefined4 local_54;
  unsigned_long_long local_50;
  unsigned_long_long local_48;
  unsigned_long_long local_40;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  uVar4 = local_38;
  local_50 = param_6;
  local_48 = param_5;
  local_40 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
  puVar1 = PTR_WCRefineHelper_026ce000;
  if (param_4 < uVar4) {
    uVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectAtIndexedSubscript__0269cc78,local_40);
    _objc_retainAutoreleasedReturnValue();
    local_60 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_objectForKeyedSubscript__0269d098,&cf_md5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = local_60;
    local_68 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_objectForKeyedSubscript__0269d098,&cf_urls)
    ;
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_28;
    uVar2 = local_38;
    uVar4 = local_68;
    local_b8 = PTR___NSConcreteStackBlock_02578660;
    local_b0 = 0xc2000000;
    local_ac = 0;
    local_a8 = FUN_00f50ee8;
    local_a0 = &DAT_025830e8;
    local_90 = local_28;
    local_70 = uVar6;
    (*(code *)PTR__objc_retain_02578638)();
    local_98 = uVar2;
    local_88 = local_40;
    local_80 = local_48;
    local_78 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar3,PTR_s_fetchEmoticonDataWithMD5_candida_026ac358,uVar4,uVar6,&local_b8);
    _objc_storeStrong(&local_98);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_60,0);
    local_54 = 0;
  }
  else {
    if (local_48 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showWeToastErrorWithText__0269ced8,&cf__gOX_bR);
    }
    else {
      puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__OX_);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showWeToastDoneWithText__0269cee0);
      (*(code *)PTR__objc_release_02578630)(puVar5);
    }
    local_54 = 1;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

