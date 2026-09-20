// FUN_00f61714 @ 00f61714

uint FUN_00f61714(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  uint local_2c;
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
    local_2c = 1;
    if ((uVar2 & 1) == 0) {
      uVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_hasSuffix__0269d018,&cf___chatroom);
      local_2c = (uint)uVar2;
    }
    local_1c = local_2c;
  }
  _objc_storeStrong(&local_18,0);
  return local_1c & 1;
}

