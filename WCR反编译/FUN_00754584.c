// FUN_00754584 @ 00754584

void FUN_00754584(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = DAT_028cc658;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_028cc658,PTR_s_objectForKeyedSubscript__0269d098,&cf_sender);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = **(undefined8 **)(param_1 + 0x20);
  **(undefined8 **)(param_1 + 0x20) = uVar1;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  return;
}

