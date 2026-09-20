// FUN_0172d54c @ 0172d54c

void FUN_0172d54c(long param_1,byte param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  cfstringStruct *pcVar2;
  long lVar3;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  undefined8 local_30;
  cfstringStruct *local_28;
  byte local_19;
  long local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_19 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  bVar1 = local_19;
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar3 = *(long *)(param_1 + 0x20);
    if ((local_19 & 1) == 0) {
      pcVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_68 = &cf_QQbc1Y_;
      }
      else {
        local_68 = local_28;
      }
      local_60 = local_68;
    }
    else {
      local_60 = (cfstringStruct *)0x0;
    }
    (**(code **)(lVar3 + 0x10))(lVar3,bVar1 & 1,local_60);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

