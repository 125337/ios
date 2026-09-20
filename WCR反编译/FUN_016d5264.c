// FUN_016d5264 @ 016d5264

void FUN_016d5264(long param_1,byte param_2,byte param_3,undefined8 param_4)

{
  cfstringStruct *pcVar1;
  long lVar2;
  long local_38;
  long local_30;
  undefined8 local_28;
  byte local_1a;
  byte local_19;
  long local_18;
  
  local_28 = 0;
  local_1a = param_3;
  local_19 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_4);
  lVar2 = param_1 + 0x20;
  local_30 = param_1;
  _objc_loadWeakRetained();
  local_38 = lVar2;
  if (lVar2 != 0) {
    if ((local_19 & 1) == 0) {
      FUN_016abf68(&cf__gOX__TVY);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineMessageRepositoryStore_026ce120,PTR_s_cancelCompositeCapture_026b2e08);
      _objc_setAssociatedObject(local_38,&DAT_028e3f11,0,1);
      pcVar1 = &cf__fbcTT_T_SNS;
      if ((local_1a & 1) == 0) {
        pcVar1 = &cf__TVY_OX_;
      }
      FUN_016abf68(pcVar1);
      FUN_016d3610(local_38);
    }
  }
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return;
}

