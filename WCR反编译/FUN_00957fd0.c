// FUN_00957fd0 @ 00957fd0

byte FUN_00957fd0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined4 local_24;
  undefined *local_20;
  byte local_11;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_20 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (puVar1 == (undefined *)0x0) {
    local_11 = 0;
    local_24 = 1;
    goto LAB_009581ec;
  }
  puVar1 = PTR__OBJC_CLASS___UIPasteboard_026ce040;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIPasteboard_026ce040,PTR_s_generalPasteboard_0269ce70);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (puVar2 != puVar4) {
    FUN_009616b8();
    local_11 = 0;
    local_24 = 1;
    goto LAB_009581ec;
  }
  FUN_00950878(0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_length_0269cca0);
  if (puVar2 == (undefined *)0x0) {
LAB_009581bc:
    FUN_009616b8();
    local_11 = 0;
  }
  else {
    puVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,local_20);
    if (((ulong)puVar1 & 1) == 0) goto LAB_009581bc;
    local_11 = 1;
  }
  local_24 = 1;
  _objc_storeStrong(&local_30,0);
LAB_009581ec:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

