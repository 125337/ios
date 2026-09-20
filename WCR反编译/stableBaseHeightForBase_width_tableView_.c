// stableBaseHeightForBase:width:tableView: @ 00fcf00c

/* Function Stack Size: 0x28 bytes */

double WCRefineHomeTableHeaderHost::stableBaseHeightForBase_width_tableView_
                 (ID param_1,SEL param_2,ID param_3,double param_4,ID param_5)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  double dVar4;
  double local_50;
  long local_48;
  double local_40;
  long local_38;
  double local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_38 = 0;
  local_30 = param_4;
  _objc_storeStrong(&local_38,param_5);
  dVar4 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_resolvedBaseHeight_width__026ad170,local_28);
  lVar1 = local_38;
  local_40 = dVar4;
  _objc_getAssociatedObject(local_38,&DAT_028e3041);
  _objc_retainAutoreleasedReturnValue();
  local_50 = local_40;
  local_48 = lVar1;
  if (local_40 < 8.0) {
    if (lVar1 == 0) {
      uVar2 = local_28;
      FUN_00fcee64();
      if ((uVar2 & 1) != 0) {
        local_50 = 56.0;
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_doubleValue_026ca608);
    }
  }
  lVar1 = local_38;
  if (8.0 <= local_50) {
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(lVar1,&DAT_028e3041,puVar3,1);
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return local_50;
}

