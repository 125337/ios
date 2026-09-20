// FUN_00ebb228 @ 00ebb228

ulong FUN_00ebb228(undefined8 param_1)

{
  ulong uVar1;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_isEqualToString__0269ccc8,&cf_Text_Bubble_Receiver_White_HL);
  _objc_storeStrong(&local_18,0);
  return uVar1 & 0xffffffff;
}

