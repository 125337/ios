// FUN_00f103fc @ 00f103fc

void FUN_00f103fc(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  long lVar2;
  cfstringStruct *pcVar3;
  long lVar4;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_30;
  long local_28;
  long local_20;
  long local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_4);
  bVar1 = false;
  if (local_20 == 200) {
    lVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_code)
    ;
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = lVar2 == 200;
    (*(code *)PTR__objc_release_02578630)(lVar4);
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar4 = *(long *)(param_1 + 0x20);
    if (bVar1) {
      local_78 = &cf__Rd;
    }
    else {
      pcVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
      if (pcVar3 == (cfstringStruct *)0x0) {
        local_80 = &cf_Rd1Y_;
      }
      else {
        local_80 = local_30;
      }
      local_78 = local_80;
    }
    (**(code **)(lVar4 + 0x10))(lVar4,bVar1,local_78);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

