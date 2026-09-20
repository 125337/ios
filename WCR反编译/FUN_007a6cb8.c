// FUN_007a6cb8 @ 007a6cb8

undefined8
FUN_007a6cb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 local_50;
  ulong local_30;
  undefined8 local_28;
  ulong local_20;
  undefined8 local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_30 = 0;
  local_28 = param_3;
  _objc_storeStrong(&local_30,param_4);
  uVar1 = local_30;
  _objc_getAssociatedObject(local_30,&DAT_028ccb60);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar2 = local_20;
    FUN_007a8620(local_20,local_30,param_5);
    uVar1 = local_30;
    if ((uVar2 & 1) == 0) {
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(uVar1,&DAT_028ccb60,puVar3,1);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      if (DAT_028ccb30 == (code *)0x0) {
        FUN_007a84fc(local_30);
        local_50 = param_1;
      }
      else {
        (*DAT_028ccb30)(local_20,PTR_s_tableView_estimatedHeightForHead_026a28e8,local_30,param_5);
        local_50 = param_1;
      }
      uVar1 = local_30;
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(uVar1,&DAT_028ccb60,puVar3,1);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      local_18 = local_50;
    }
    else {
      FUN_007a7300(local_20,local_30,param_5);
      local_18 = param_1;
    }
  }
  else {
    FUN_007a84fc(local_30);
    local_18 = param_1;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_20,0);
  return local_18;
}

