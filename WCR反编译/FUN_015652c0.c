// FUN_015652c0 @ 015652c0

uint FUN_015652c0(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  uint local_1c;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar2 = local_18;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  local_1c = 0;
  if ((uVar2 & 1) != 0) {
    uVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_hasSuffix__0269d018,&cf__chatroom_);
    local_1c = (uint)uVar2;
  }
  _objc_storeStrong(&local_18,0);
  return local_1c & 1;
}

