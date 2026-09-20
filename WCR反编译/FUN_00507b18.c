// FUN_00507b18 @ 00507b18

void FUN_00507b18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  undefined *local_68;
  cfstringStruct *local_60;
  undefined8 local_58;
  uint local_4c;
  cfstringStruct *local_48;
  undefined *local_40 [3];
  undefined *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  puVar2 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringForKey__026a33a0,&cf_MHidePasswordKey);
  _objc_retainAutoreleasedReturnValue();
  local_40[0] = puVar2;
  if ((puVar2 == (undefined *)0x0) ||
     ((*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_length_0269cca0),
     puVar2 == (undefined *)0x0)) {
    _objc_storeStrong(local_40,&cf_0000);
  }
  pcVar3 = &cf_AddFriendEntryViewController;
  _NSClassFromString();
  puVar2 = PTR___dispatch_main_q_02578680;
  local_48 = pcVar3;
  if (pcVar3 != (cfstringStruct *)0x0) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_40[0];
    local_88 = PTR___NSConcreteStackBlock_02578660;
    local_80 = 0xc2000000;
    local_7c = 0;
    local_78 = FUN_0050845c;
    local_70 = &DAT_0257d848;
    local_60 = local_48;
    local_58 = local_18;
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = puVar1;
    _dispatch_async(puVar2,&local_88);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_storeStrong(&local_68,0);
  }
  local_4c = (uint)(pcVar3 == (cfstringStruct *)0x0);
  _objc_storeStrong(local_40);
  _objc_storeStrong(&local_28,0);
  return;
}

