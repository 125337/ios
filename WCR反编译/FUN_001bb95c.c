// FUN_001bb95c @ 001bb95c

void FUN_001bb95c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined *puVar6;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 *puVar5;
  
  puVar5 = &local_28;
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(puVar5,param_3);
  uVar4 = (uint)puVar5;
  FUN_001e9fdc();
  uVar3 = local_18;
  uVar2 = local_20;
  pcVar1 = DAT_028c8b08;
  if ((uVar4 & 1) == 0) {
    (*DAT_028c8b08)(local_18,local_20,local_28);
  }
  else {
    puVar6 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    (*pcVar1)(uVar3,uVar2);
    (*(code *)PTR__objc_release_02578630)(puVar6);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

