// wcr_checkAVAssetProcessedMarker:completion: @ 006ffd0c

/* Function Stack Size: 0x20 bytes */

void WCRefineScreenRecordingFrameProcessor::wcr_checkAVAssetProcessedMarker_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  ID local_78;
  long local_70;
  long local_68;
  undefined4 local_60;
  long local_50;
  long local_48;
  SEL local_40;
  ID local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_48 = 0;
  local_40 = param_2;
  local_38 = param_1;
  _objc_storeStrong(&local_48,param_3,param_3,param_4,param_5);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_4);
  lVar2 = local_48;
  if (local_48 == 0) {
    if (local_50 != 0) {
      (**(code **)(local_50 + 0x10))(local_50,0);
    }
    local_60 = 1;
  }
  else {
    local_30 = &cf_availableMetadataFormats;
    puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_30,1
              );
    _objc_retainAutoreleasedReturnValue();
    IVar4 = local_38;
    local_98 = PTR___NSConcreteStackBlock_02578660;
    local_90 = 0xc2000000;
    local_8c = 0;
    local_88 = FUN_006fffcc;
    local_80 = &DAT_02579740;
    (*(code *)PTR__objc_retain_02578638)();
    lVar3 = local_48;
    local_78 = IVar4;
    (*(code *)PTR__objc_retain_02578638)();
    lVar1 = local_50;
    local_70 = lVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (lVar2,PTR_s_loadValuesAsynchronouslyForKeys__026a7388,puVar5,&local_98);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_78,0);
    local_60 = 0;
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

