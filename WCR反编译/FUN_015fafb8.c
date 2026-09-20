// FUN_015fafb8 @ 015fafb8

byte FUN_015fafb8(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  undefined8 uVar2;
  cfstringStruct *local_58;
  cfstringStruct *local_30;
  undefined8 local_28;
  cfstringStruct *local_20;
  byte local_11;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  pcVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_lowercaseString_0269d9c0);
  _objc_retainAutoreleasedReturnValue();
  local_58 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_58 = &cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_58;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasSuffix__0269d018,&cf__chatroom);
  if ((((ulong)pcVar1 & 1) == 0) &&
     (pcVar1 = local_30,
     (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasSuffix__0269d018,&cf__im_chatroom),
     uVar2 = local_28, ((ulong)pcVar1 & 1) == 0)) {
    pcVar1 = &cf_isChatroom;
    _NSSelectorFromString(&cf_isChatroom);
    FUN_016054b4(uVar2,pcVar1);
    local_11 = (byte)uVar2 & 1;
  }
  else {
    local_11 = 1;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

