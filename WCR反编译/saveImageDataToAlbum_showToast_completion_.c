// saveImageDataToAlbum:showToast:completion: @ 00f46ab4

/* Function Stack Size: 0x24 bytes */

void WCRefineEmoticonToolsHelper::saveImageDataToAlbum_showToast_completion_
               (ID param_1,SEL param_2,ID param_3,bool param_4,ID param_5,undefined4 param_6)

{
  long lVar1;
  long lVar2;
  dispatch_queue_t pdVar3;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  long local_58;
  long local_50;
  ID local_48;
  byte local_40;
  undefined4 local_3c;
  long local_38;
  byte local_29;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_29 = (byte)param_4;
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  lVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    if ((local_29 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showWeToastErrorWithText__0269ced8,&cf_h_eNNX__W)
      ;
    }
    if (local_38 != 0) {
      (**(code **)(local_38 + 0x10))(local_38,0);
    }
    local_3c = 1;
  }
  else {
    pdVar3 = _dispatch_get_global_queue(0x19,0);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_28;
    local_78 = PTR___NSConcreteStackBlock_02578660;
    local_70 = 0xc2000000;
    local_6c = 0;
    local_68 = FUN_00f46c98;
    local_60 = &DAT_02582f18;
    local_48 = local_18;
    (*(code *)PTR__objc_retain_02578638)();
    lVar2 = local_38;
    local_58 = lVar1;
    local_40 = local_29 & 1;
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = lVar2;
    _dispatch_async(pdVar3,&local_78);
    (*(code *)PTR__objc_release_02578630)(pdVar3);
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_58,0);
    local_3c = 0;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  return;
}

