// FUN_004fe694 @ 004fe694

uint FUN_004fe694(undefined8 param_1)

{
  long lVar1;
  uint local_1c;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_length_0269cca0);
  local_1c = 0;
  if (lVar1 != 0) {
    lVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_hasSuffix__0269d018,&cf__chatroom);
    local_1c = (uint)lVar1;
  }
  _objc_storeStrong(&local_18,0);
  return local_1c & 1;
}

