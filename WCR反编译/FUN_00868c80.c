// FUN_00868c80 @ 00868c80

/* WARNING: Removing unreachable block (ram,0x00868e1c) */
/* WARNING: Removing unreachable block (ram,0x00868df8) */

void FUN_00868c80(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong local_18;
  
  uVar1 = param_1;
  FUN_00888f18();
  if ((uVar1 & 1) == 0) {
    (*DAT_028cd510)(param_1,param_2);
    _objc_retainAutoreleasedReturnValue();
    local_18 = param_1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(param_1,&DAT_028cd8c6,puVar2,1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_18 = param_1;
    (*DAT_028cd510)(param_1,param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(param_1,&DAT_028cd8c6,0,1);
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

