// appendScreenshotWatermarkAlbumEnhancementProcessedId: @ 020ff384

/* Function Stack Size: 0x18 bytes */

void WCRefineConfig::appendScreenshotWatermarkAlbumEnhancementProcessedId_
               (ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined1 *local_38;
  undefined4 local_2c;
  long local_28;
  SEL local_20;
  undefined1 *local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = (undefined1 *)param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_2c = 1;
  }
  else {
    puVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_screenshotWatermarkAlbumEnhancem_026a7a20);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_38 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (local_38 == (undefined1 *)0x0) {
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_38;
      local_38 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_removeObject__0269d678,local_28);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_insertObject_atIndex__0269eac0,local_28,0);
    while( true ) {
      puVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
      if (puVar2 < section_000000b8.segname + 1) break;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_removeLastObject_0269e830);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_setScreenshotWatermarkAlbumEnhan_026ca388,local_38);
    _objc_storeStrong(&local_38,0);
    local_2c = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

