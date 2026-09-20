// fetchEmoticonDataWithMD5:candidateURLs:convertWxAMToGIF:completion: @ 00f34c00

/* Function Stack Size: 0x2c bytes */

void WCRefineEmoticonToolsHelper::
     fetchEmoticonDataWithMD5_candidateURLs_convertWxAMToGIF_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,bool param_5,ID param_6,
               undefined4 param_7)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  dispatch_queue_t pdVar4;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  ID local_50;
  byte local_48;
  uint local_44;
  long local_40;
  byte local_31;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_31 = (byte)param_5;
  local_40 = 0;
  _objc_storeStrong(&local_40,param_6);
  bVar1 = local_40 != 0;
  if (bVar1) {
    pdVar4 = _dispatch_get_global_queue(0x19,0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_28;
    local_88 = PTR___NSConcreteStackBlock_02578660;
    local_80 = 0xc2000000;
    local_7c = 0;
    local_78 = FUN_00f34dcc;
    local_70 = &DAT_02582b08;
    local_50 = local_18;
    (*(code *)PTR__objc_retain_02578638)();
    lVar2 = local_40;
    local_68 = uVar3;
    local_48 = local_31 & 1;
    (*(code *)PTR__objc_retain_02578638)();
    uVar3 = local_30;
    local_58 = lVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = uVar3;
    _dispatch_async(pdVar4,&local_88);
    (*(code *)PTR__objc_release_02578630)(pdVar4);
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_68,0);
  }
  local_44 = (uint)!bVar1;
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

