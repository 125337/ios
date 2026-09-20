// FUN_00357d1c @ 00357d1c

byte FUN_00357d1c(undefined8 param_1)

{
  long lVar1;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 1;
  }
  else {
    lVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_builtForInlineMode_026a2f18);
    local_11 = ((byte)lVar1 ^ 1) & 1;
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

