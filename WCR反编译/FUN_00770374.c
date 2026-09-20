// FUN_00770374 @ 00770374

byte FUN_00770374(void)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_30 [3];
  byte local_11;
  
  uVar3 = DAT_028cc8b0;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar3 & 1) == 0) {
    local_11 = 0;
  }
  else {
    uVar3 = DAT_028cc8b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028cc8b0,PTR_s_objectForKeyedSubscript__0269d098,&cf_fromPluginSponsorPage);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar3);
    if ((uVar4 & 1) == 0) {
      local_11 = 0;
    }
    else {
      uVar3 = DAT_028cc8b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028cc8b0,PTR_s_objectForKeyedSubscript__0269d098,&cf_rewardActionType);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_30[0] = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
      if (((uVar3 & 1) == 0) ||
         (uVar3 = local_30[0],
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_30[0],PTR_s_isEqualToString__0269ccc8,&cf_pluginReward), (uVar3 & 1) == 0)
         ) {
        local_11 = 0;
      }
      else {
        bVar1 = 0;
        FUN_0076c92c();
        local_11 = bVar1 & 1;
      }
      _objc_storeStrong(local_30,0);
    }
  }
  return local_11 & 1;
}

