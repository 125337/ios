// FUN_00f044f0 @ 00f044f0

void FUN_00f044f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  cfstringStruct *local_98;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_34;
  long local_30;
  cfstringStruct *local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_3);
  lVar2 = local_20;
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  lVar1 = local_20;
  if (lVar2 == 0) {
    if (local_28 == (cfstringStruct *)0x0) {
      local_98 = &cf_O;
    }
    else {
      local_98 = local_28;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x28),PTR_s_finish_success_message__026abb10,
               *(undefined8 *)(param_1 + 0x20),0,local_98);
    local_34 = 1;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    local_68 = PTR___NSConcreteStackBlock_02578660;
    local_60 = 0xc2000000;
    local_5c = 0;
    local_58 = FUN_00f046c4;
    local_50 = &DAT_025821f8;
    local_40 = *(undefined8 *)(param_1 + 0x28);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar4,PTR_s_openListRequest_path_token_json__026abb20,&cf_GET,&cf__api_me,lVar1,0,0,0
               ,&local_68);
    _objc_storeStrong(&local_48,0);
    local_34 = 0;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return;
}

