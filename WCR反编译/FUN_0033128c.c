// FUN_0033128c @ 0033128c

void FUN_0033128c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  puVar4 = &local_28;
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(puVar4,param_3);
  FUN_00331804();
  uVar3 = local_18;
  uVar2 = local_20;
  pcVar1 = DAT_028c9e38;
  if (((ulong)puVar4 & 1) == 0) {
    (*DAT_028c9e38)(local_18,local_20,local_28);
  }
  else {
    puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    (*pcVar1)(uVar3,uVar2);
    (*(code *)PTR__objc_release_02578630)(puVar5);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

