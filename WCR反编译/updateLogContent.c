// updateLogContent @ 01f45930

/* Function Stack Size: 0x10 bytes */

ID WCRefineUpdateLogView::updateLogContent(ID param_1,SEL param_2)

{
  cfstringStruct *local_70;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  ID local_38;
  SEL local_30;
  ID local_28;
  undefined8 local_20;
  long *local_18;
  
  local_58 = PTR___NSConcreteGlobalBlock_02578658;
  local_50 = 0xd0800000;
  local_4c = 0;
  local_48 = FUN_01f45a2c;
  local_40 = &DAT_02578c00;
  local_18 = &DAT_028e48b0;
  local_20 = 0;
  local_38 = param_1;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_20,&local_58);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  if (DAT_028e48a8 == (cfstringStruct *)0x0) {
    local_70 = &::cf___;
  }
  else {
    local_70 = DAT_028e48a8;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_updateLogByReplacingSponsorAmoun_026c8ec8,local_70);
  return local_28;
}

