// FUN_017d46c0 @ 017d46c0

bool FUN_017d46c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_rangeOfString_options__0269d118,*(undefined8 *)(param_1 + 0x20),1);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return lVar1 != 0x7fffffffffffffff;
}

