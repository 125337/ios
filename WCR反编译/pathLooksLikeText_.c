// pathLooksLikeText: @ 0195b330

/* Function Stack Size: 0x18 bytes */

bool WCRefineFileManagerPreviewViewController::pathLooksLikeText_(ID param_1,SEL param_2,ID param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  double dVar4;
  undefined *local_78;
  long local_70;
  undefined *local_48;
  undefined4 local_3c;
  undefined *local_38;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  bool local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  puVar2 = PTR__OBJC_CLASS___NSFileHandle_026cea88;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileHandle_026cea88,PTR_s_fileHandleForReadingAtPath__026ad8c8,
             local_30);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    local_11 = false;
    local_3c = 1;
  }
  else {
    local_48 = (undefined *)0x0;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_readDataOfLength__026ad8d0,0x800);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_48;
    local_48 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_closeFile_026aa440);
    puVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
    puVar2 = local_48;
    if (puVar3 == (undefined *)0x0) {
      local_11 = false;
    }
    else {
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_bytes_026a9630);
      local_70 = 0;
      for (local_78 = (undefined *)0x0; puVar3 = local_48,
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0), local_78 < puVar3;
          local_78 = local_78 + 1) {
        bVar1 = puVar2[(long)local_78];
        if (bVar1 == 0) {
          local_11 = false;
          goto LAB_0195b5ec;
        }
        if ((bVar1 < 9) || ((0xd < bVar1 && (bVar1 < 0x20)))) {
          local_70 = local_70 + 1;
        }
      }
      dVar4 = (double)NEON_ucvtf(local_70);
      puVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
      local_11 = dVar4 / (double)puVar2 < DAT_02323c88;
    }
LAB_0195b5ec:
    local_3c = 1;
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

