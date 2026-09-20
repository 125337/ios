// FUN_016b5804 @ 016b5804

void FUN_016b5804(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_40 [3];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  uVar1 = 9;
  local_20 = param_1;
  local_18 = param_1;
  _NSSearchPathForDirectoriesInDomains(9,1,1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_stringByAppendingPathComponent__026cab30,&cf_WCRefine);
  _objc_retainAutoreleasedReturnValue();
  local_40[0] = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_stringByAppendingPathComponent__026cab30,&cf_YVh);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = DAT_028e3d70;
  DAT_028e3d70 = uVar1;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  _objc_storeStrong(local_40);
  _objc_storeStrong(&local_28,0);
  return;
}

