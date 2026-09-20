// FUN_0040a974 @ 0040a974

uint FUN_0040a974(undefined8 param_1)

{
  long lVar1;
  uint local_34;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_length_0269cca0);
  local_34 = 0;
  if (lVar1 != 0) {
    lVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_hasSuffix__0269d018,&cf__chatroom);
    local_34 = (uint)lVar1;
  }
  _objc_storeStrong(&local_18,0);
  return local_34 & 1;
}

