// FUN_01c71e40 @ 01c71e40

ulong FUN_01c71e40(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 local_28;
  ulong local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_localizedCaseInsensitiveContains_0269efb0,
             *(undefined8 *)(param_1 + 0x20));
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return uVar1 & 0xffffffff;
}

