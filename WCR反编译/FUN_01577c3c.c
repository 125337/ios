// FUN_01577c3c @ 01577c3c

void FUN_01577c3c(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_30;
  undefined4 local_24;
  ulong local_20;
  cfstringStruct *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = (cfstringStruct *)0x0;
    local_24 = 1;
    goto LAB_01577e3c;
  }
  local_30 = (cfstringStruct *)0x0;
  uVar2 = local_20;
  FUN_01564574();
  if ((uVar2 & 1) == 0) {
    pcVar3 = &cf_ContactInfoViewController;
    _NSClassFromString();
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_18 = (cfstringStruct *)0x0;
    }
    else {
      _objc_alloc_init();
      pcVar1 = local_30;
      local_30 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      if (local_30 != (cfstringStruct *)0x0) {
        pcVar3 = local_30;
        FUN_01563e1c(local_30,&cf_m_contact,local_20);
        if (((ulong)pcVar3 & 1) == 0) {
          FUN_01563e1c(local_30,&cf_m_chatContact,local_20);
        }
        else {
          FUN_01563e1c(local_30,&cf_m_chatContact,local_20);
        }
        goto LAB_01577e04;
      }
      local_18 = (cfstringStruct *)0x0;
    }
  }
  else {
    pcVar3 = &cf_ChatRoomInfoViewController;
    _NSClassFromString();
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_18 = (cfstringStruct *)0x0;
    }
    else {
      _objc_alloc_init();
      pcVar1 = local_30;
      local_30 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      if (local_30 == (cfstringStruct *)0x0) {
        local_18 = (cfstringStruct *)0x0;
      }
      else {
        pcVar3 = local_30;
        FUN_01563e1c(local_30,&cf_m_chatRoomContact,local_20);
        if (((ulong)pcVar3 & 1) == 0) {
          FUN_01563e1c(local_30,&cf_m_contact,local_20);
        }
LAB_01577e04:
        pcVar3 = local_30;
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = pcVar3;
      }
    }
  }
  local_24 = 1;
  _objc_storeStrong(&local_30,0);
LAB_01577e3c:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

