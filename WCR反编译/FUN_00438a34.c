// FUN_00438a34 @ 00438a34

void FUN_00438a34(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_20 = param_2;
  _objc_storeStrong(&local_28,param_3);
  if ((local_18 != 0) && (local_20 != 0)) {
    lVar3 = local_18;
    FUN_00436ffc(local_18,local_20);
    lVar2 = local_18;
    uVar1 = local_28;
    if (lVar3 == 0) {
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithUTF8String__0269fd30,local_20);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_setValue_forKey__0269d300,uVar1);
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
    else {
      _object_setIvar(local_18,lVar3,local_28);
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  return;
}

