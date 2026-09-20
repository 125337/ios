// FUN_00436090 @ 00436090

void FUN_00436090(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long local_50;
  byte local_41;
  undefined *local_40;
  long local_28;
  undefined8 local_20;
  undefined *local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_41 = 0;
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  bVar1 = false;
  if (((ulong)puVar3 & 1) != 0) {
    puVar3 = &DAT_028ca898;
    _objc_loadWeakRetained();
    local_41 = 1;
    bVar1 = false;
    local_40 = puVar3;
    if (puVar3 == local_18) {
      lVar4 = DAT_028ca880;
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028ca880,PTR_s_count_0269cfe0);
      bVar1 = true;
      if (lVar4 == 0) {
        lVar4 = DAT_028ca888;
        (*(code *)PTR__objc_msgSend_02578628)(DAT_028ca888,PTR_s_count_0269cfe0);
        bVar1 = lVar4 != 0;
      }
    }
  }
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (bVar1) {
    lVar4 = local_28;
    FUN_00438cd8();
    _objc_retainAutoreleasedReturnValue();
    local_50 = lVar4;
    (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_count_0269cfe0);
    if (lVar4 == 0) {
      _objc_storeStrong(&local_50,DAT_028ca890);
    }
    else {
      _objc_storeStrong(lVar4,&DAT_028ca890,local_50);
    }
    lVar4 = DAT_028ca880;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028ca880,PTR_s_count_0269cfe0);
    if (lVar4 == 0) {
      FUN_004389c8(0);
LAB_004363b0:
      bVar1 = false;
    }
    else {
      lVar4 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0);
      if (lVar4 == 0) {
        FUN_004389c8();
        goto LAB_004363b0;
      }
      FUN_00438fd4(local_18,local_50);
      bVar1 = true;
    }
    _objc_storeStrong(&local_50,0);
    if (bVar1) goto LAB_004363f8;
  }
  (*DAT_028ca948)(local_18,local_20,local_28);
LAB_004363f8:
  _objc_storeStrong(&local_28,0);
  return;
}

