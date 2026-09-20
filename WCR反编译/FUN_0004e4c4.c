// FUN_0004e4c4 @ 0004e4c4

uint FUN_0004e4c4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  uint local_4c;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  lVar1 = *(long *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_count_0269cfe0);
  local_4c = 1;
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_containsObject__0269cbb8,local_20);
    local_4c = (uint)uVar2 ^ 1;
  }
  _objc_storeStrong(&local_20,0);
  return local_4c & 1;
}

