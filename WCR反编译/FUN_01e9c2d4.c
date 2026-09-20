// FUN_01e9c2d4 @ 01e9c2d4

/* WARNING: Type propagation algorithm not settling */

void FUN_01e9c2d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  cfstringStruct **ppcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  cfstringStruct *local_b8;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  cfstringStruct *local_68;
  undefined8 local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  long local_48;
  long local_40 [2];
  cfstringStruct **local_30;
  long local_28;
  
  local_30 = (cfstringStruct **)0x0;
  local_28 = param_1;
  _objc_storeStrong(&local_30);
  local_40[1] = 0;
  _objc_storeStrong(local_40 + 1,param_3);
  local_40[0] = 0;
  _objc_storeStrong(local_40,param_4);
  local_48 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = &cf___;
  ppcVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if ((ppcVar1 != (cfstringStruct **)0x0) && (local_40[0] == 0)) {
    pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSJSONSerialization_026ce458,
               PTR_s_JSONObjectWithData_options_error_026ca480,local_30,0,0);
    _objc_retainAutoreleasedReturnValue();
    local_58 = pcVar2;
    FUN_01e9c578();
    _objc_retainAutoreleasedReturnValue();
    local_b8 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_b8 = &cf___;
    }
    _objc_storeStrong(&local_50,local_b8);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    ppcVar1 = &local_58;
    _objc_storeStrong(ppcVar1,0);
  }
  FUN_01e9c254();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(ppcVar1);
  puVar3 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  local_88 = PTR___NSConcreteStackBlock_02578660;
  local_80 = 0xc2000000;
  local_7c = 0;
  local_78 = FUN_01e9ca74;
  local_70 = &DAT_0257ca68;
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  (*(code *)PTR__objc_retain_02578638)();
  pcVar2 = local_50;
  local_60 = uVar4;
  (*(code *)PTR__objc_retain_02578638)();
  local_68 = pcVar2;
  _dispatch_async(puVar3,&local_88);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(local_40,0);
  _objc_storeStrong(local_40 + 1,0);
  _objc_storeStrong(&local_30,0);
  return;
}

