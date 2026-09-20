// wcr_showToast: @ 00708c10

/* Function Stack Size: 0x18 bytes */

void WCRefineScreenRecordingFrameProcessor::wcr_showToast_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  ID IVar2;
  long lVar3;
  undefined *puVar4;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  ID local_48;
  long local_40;
  uint local_38;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  puVar4 = PTR___dispatch_main_q_02578680;
  if (lVar3 != 0) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_18;
    local_68 = PTR___NSConcreteStackBlock_02578660;
    local_60 = 0xc2000000;
    local_5c = 0;
    local_58 = FUN_00708d90;
    local_50 = &DAT_02578e60;
    (*(code *)PTR__objc_retain_02578638)();
    lVar1 = local_28;
    local_48 = IVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = lVar1;
    _dispatch_async(puVar4,&local_68);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_storeStrong(&local_40);
    _objc_storeStrong(&local_48,0);
  }
  local_38 = (uint)(lVar3 == 0);
  _objc_storeStrong(&local_28,0);
  return;
}

