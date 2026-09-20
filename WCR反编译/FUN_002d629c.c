// FUN_002d629c @ 002d629c

bool FUN_002d629c(undefined8 param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long local_28;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar2 = local_18;
  local_20 = param_2;
  _objc_getAssociatedObject(local_18,&DAT_028c9801);
  _objc_retainAutoreleasedReturnValue();
  bVar1 = true;
  local_28 = lVar2;
  if (lVar2 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_unsignedIntegerValue_026cabb8);
    bVar1 = lVar2 != local_20;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  return bVar1;
}

