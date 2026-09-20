// FUN_01503c60 @ 01503c60

void FUN_01503c60(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  puVar2 = PTR__OBJC_CLASS___NSBundle_026ce418;
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSBundle_026ce418,PTR_s_mainBundle_026a0c28);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  FUN_015032a8();
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar4;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_28;
  FUN_01503d50();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = DAT_028e3818;
  DAT_028e3818 = puVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _objc_storeStrong(&local_28,0);
  return;
}

