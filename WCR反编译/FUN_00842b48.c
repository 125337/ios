// FUN_00842b48 @ 00842b48

void FUN_00842b48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = (undefined *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*DAT_028cd3f0)(local_18,local_20,local_28);
  puVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
  if (puVar1 == &UNK_0000271a) {
    FUN_008466f0(0,local_18);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

