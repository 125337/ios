// FUN_01f58e14 @ 01f58e14

undefined * FUN_01f58e14(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  undefined *local_48;
  undefined *local_40;
  long local_38;
  long local_30;
  long local_28;
  long local_20;
  undefined *local_18;
  
  local_28 = 0;
  local_20 = param_2;
  _objc_storeStrong(&local_28);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  puVar2 = PTR_WCRefineVoiceCloneHelper_026cea40;
  local_38 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineVoiceCloneHelper_026cea40,PTR_s_displayNameForModel__026c9498,local_28);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_WCRefineVoiceCloneHelper_026cea40;
  local_40 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineVoiceCloneHelper_026cea40,PTR_s_displayNameForModel__026c9498,local_30);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_40;
  local_48 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_localizedStandardCompare__0269e098,puVar3);
  lVar4 = *(long *)(param_2 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_sortMode_026a26b0);
  local_18 = puVar2;
  if (lVar4 != 1) {
    lVar4 = *(long *)(param_2 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_sortMode_026a26b0);
    if (lVar4 == 2) {
      local_18 = (undefined *)-(long)puVar2;
    }
    else {
      lVar4 = *(long *)(param_2 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_sortMode_026a26b0);
      if (lVar4 != 3) {
        lVar4 = *(long *)(param_2 + 0x20);
        (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_sortMode_026a26b0);
        if (lVar4 != 4) {
          lVar4 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_objectForKeyedSubscript__0269d098);
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(lVar4);
          lVar4 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_sortOrder);
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(lVar4);
          if ((lVar5 != lVar6) &&
             (local_18 = (undefined *)((long)&MACH_HEADER.magic + 1), lVar5 < lVar6)) {
            local_18 = (undefined *)0xffffffffffffffff;
          }
          goto LAB_01f59184;
        }
      }
      FUN_01f591c8(0,local_28);
      dVar7 = param_1;
      FUN_01f591c8(local_30);
      if (param_1 != dVar7) {
        lVar4 = *(long *)(param_2 + 0x20);
        (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_sortMode_026a26b0);
        if (lVar4 == 3) {
          bVar1 = dVar7 < param_1;
        }
        else {
          bVar1 = param_1 < dVar7;
        }
        local_18 = (undefined *)((long)&MACH_HEADER.magic + 1);
        if (bVar1) {
          local_18 = (undefined *)0xffffffffffffffff;
        }
      }
    }
  }
LAB_01f59184:
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return local_18;
}

