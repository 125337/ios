// initWithRoomUsr:displayName:result:rangeTitle: @ 01d87bf8

/* Function Stack Size: 0x30 bytes */

ID WCRefineSessionStatsActivityViewController::initWithRoomUsr_displayName_result_rangeTitle_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6)

{
  ID *pIVar1;
  undefined8 **ppuVar2;
  cfstringStruct *pcVar3;
  long lVar4;
  cfstringStruct *local_b8;
  long local_b0;
  cfstringStruct *local_a8;
  bool local_69;
  cfstringStruct *local_68;
  bool local_59;
  long local_58;
  undefined8 *local_50;
  undefined *local_48;
  cfstringStruct *local_40;
  undefined8 local_38;
  long local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID *local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = (ID *)param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  local_40 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_40,param_6);
  local_50 = local_18;
  local_18 = (ID *)0x0;
  ppuVar2 = &local_50;
  local_48 = PTR_WCRefineSessionStatsActivityViewController_026d00b0;
  _objc_msgSendSuper2(ppuVar2,PTR_s_init_026ca6a8);
  local_18 = (ID *)ppuVar2;
  _objc_storeStrong(&local_18);
  if (ppuVar2 != (undefined8 **)0x0) {
    pcVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_copy_0269d150);
    local_a8 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_a8 = &::cf___;
    }
    _objc_storeStrong((long)local_18 + (long)_roomUsr,local_a8);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    lVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    if (lVar4 == 0) {
      local_b0 = *(long *)((long)local_18 + (long)_roomUsr);
    }
    else {
      local_b0 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_copy_0269d150);
      local_58 = local_b0;
    }
    local_59 = lVar4 != 0;
    _objc_storeStrong((long)local_18 + (long)_displayName,local_b0);
    if (local_59) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    pcVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_b8 = &cf_ke;
    }
    else {
      local_b8 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_copy_0269d150);
      local_68 = local_b8;
    }
    local_69 = pcVar3 != (cfstringStruct *)0x0;
    _objc_storeStrong((long)local_18 + (long)_rangeTitle,local_b8);
    if (local_69) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    _objc_storeStrong((long)local_18 + (long)_result,local_38);
    *(undefined8 *)((long)local_18 + (long)_filter) = 0;
  }
  pIVar1 = local_18;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return (ID)(undefined8 **)pIVar1;
}

