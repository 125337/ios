// FUN_00028d44 @ 00028d44

void FUN_00028d44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *local_88;
  cfstringStruct *local_50 [3];
  long local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_20 = (cfstringStruct *)0x0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_3);
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_4);
  pcVar2 = local_20;
  local_38 = param_1;
  FUN_00028f90(local_20,*(undefined8 *)(param_1 + 0x20));
  if (((ulong)pcVar2 & 1) == 0) {
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_localizedDescription_0269ced0);
    _objc_retainAutoreleasedReturnValue();
    local_88 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_88 = &cf_SVGr1Y_;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_50[0] = local_88;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    puVar1 = PTR_WCRefineHelper_026ce000;
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_A);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_sendMsg_toContactUsrName__0269d3f0,puVar3,
               *(undefined8 *)(param_1 + 0x20));
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(local_50,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return;
}

