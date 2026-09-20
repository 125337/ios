// FUN_0084b978 @ 0084b978

void FUN_0084b978(undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 local_40 [3];
  byte local_21;
  undefined8 local_20;
  undefined8 local_18;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_21 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(param_1,&DAT_028cd4c8,puVar2,1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*DAT_028cd4a0)(local_18,local_20,local_21 & 1);
  local_40[0] = 0;
  uVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_40[0];
  local_40[0] = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  FUN_00862264(local_40[0]);
  FUN_0085ce8c(local_40[0]);
  _objc_storeStrong(local_40,0);
  return;
}

