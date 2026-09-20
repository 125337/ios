// FUN_01aaab68 @ 01aaab68

void FUN_01aaab68(long param_1,undefined8 param_2,uint param_3)

{
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setTelegramLinkedGroupIds__026bdc90,local_20);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setTelegramPreserveGroups__026bdc98,param_3 & 1);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_reloadCreateTablePreservingInput_026bdca0);
  _objc_storeStrong(&local_20,0);
  return;
}

