// FUN_01c711f0 @ 01c711f0

undefined * FUN_01c711f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *local_118;
  undefined *local_100;
  undefined *local_70;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  undefined *local_28;
  
  local_38 = 0;
  local_30 = param_1;
  _objc_storeStrong(&local_38);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_3);
  puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_48 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar4,PTR_s_stringByAppendingPathComponent__026cab30,local_38);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_attributesOfItemAtPath_error__0269db08,uVar4,0)
  ;
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_50 = puVar6;
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(uVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar4,PTR_s_stringByAppendingPathComponent__026cab30,local_40);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_attributesOfItemAtPath_error__0269db08,uVar4,0)
  ;
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_58 = puVar6;
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(uVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  bVar1 = local_58 == (undefined *)0x0;
  if (bVar1) {
    local_100 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_distantPast_026a8e18);
    _objc_retainAutoreleasedReturnValue();
    local_60 = local_100;
  }
  else {
    local_100 = local_58;
  }
  bVar2 = local_50 == (undefined *)0x0;
  if (bVar2) {
    local_118 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_distantPast_026a8e18);
    _objc_retainAutoreleasedReturnValue();
    local_70 = local_118;
  }
  else {
    local_118 = local_50;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_compare__0269cd10,local_118);
  local_28 = local_100;
  if (bVar2) {
    (*(code *)PTR__objc_release_02578630)(local_70);
  }
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return local_28;
}

