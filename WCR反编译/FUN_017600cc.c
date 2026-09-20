// FUN_017600cc @ 017600cc

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_017600cc(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **local_f0;
  undefined **local_d8;
  undefined **local_c0;
  undefined **local_a8;
  undefined **local_90;
  undefined **local_50;
  undefined **local_48;
  undefined **local_40;
  undefined **local_38;
  undefined **local_30;
  undefined **local_28;
  
  ppuVar1 = &PTR___NSConcreteGlobalBlock_02588898;
  _objc_retainBlock();
  local_28 = ppuVar1;
  (*(code *)ppuVar1[2])();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = local_28;
  local_30 = ppuVar1;
  (*(code *)local_28[2])();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = local_28;
  local_38 = ppuVar2;
  (*(code *)local_28[2])();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = local_28;
  local_40 = ppuVar1;
  (*(code *)local_28[2])();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = local_28;
  local_48 = ppuVar2;
  (*(code *)local_28[2])();
  _objc_retainAutoreleasedReturnValue();
  local_90 = local_30;
  local_50 = ppuVar1;
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_UTF8String_026a2e68);
  local_a8 = local_38;
  if (local_90 == (undefined **)0x0) {
    local_90 = (undefined **)0x2467240;
  }
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_UTF8String_026a2e68);
  local_c0 = local_40;
  if (local_a8 == (undefined **)0x0) {
    local_a8 = (undefined **)0x2467240;
  }
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_UTF8String_026a2e68);
  local_d8 = local_48;
  if (local_c0 == (undefined **)0x0) {
    local_c0 = (undefined **)0x2467240;
  }
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_UTF8String_026a2e68);
  local_f0 = local_50;
  if (local_d8 == (undefined **)0x0) {
    local_d8 = (undefined **)0x2467240;
  }
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_UTF8String_026a2e68);
  if (local_f0 == (undefined **)0x0) {
    local_f0 = (undefined **)0x2467240;
  }
  DAT_028e3fb8 = DAT_028e3fb8 ^ (int)*(char *)((long)local_90 + 2) ^
                 (int)*(char *)((long)local_a8 + 7) ^ (int)*(char *)((long)local_c0 + 0xb) ^
                 (int)*(char *)((long)local_d8 + 0x13) ^ (int)*(char *)((long)local_f0 + 0x17);
  if (DAT_028e3fb8 == 0xffffffff) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

