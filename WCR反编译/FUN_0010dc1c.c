// FUN_0010dc1c @ 0010dc1c

ulong FUN_0010dc1c(undefined8 param_1)

{
  ulong uVar1;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_hasSuffix__0269d018,&cf__chatroom);
  _objc_storeStrong(&local_18,0);
  return uVar1 & 0xffffffff;
}

