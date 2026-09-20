// smoothedColors: @ 00f8c7c8

/* Function Stack Size: 0x18 bytes */

ID WCRefineGradientPalette::smoothedColors_(ID param_1,SEL param_2,ID param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  double dVar5;
  undefined1 *local_a0;
  undefined1 *local_70;
  ulong local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  long local_48;
  undefined1 *local_40;
  undefined4 local_34;
  undefined *local_30;
  SEL local_28;
  undefined1 *local_20;
  undefined1 *local_18;
  
  local_30 = (undefined1 *)0x0;
  local_28 = param_2;
  local_20 = (undefined1 *)param_1;
  _objc_storeStrong(&local_30,param_3);
  puVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0);
  puVar4 = local_30;
  if ((undefined1 *)((long)&MACH_HEADER.magic + 1) < puVar3) {
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar4;
    for (local_48 = 0; puVar1 = (undefined1 *)(local_48 + 1), puVar4 = local_30,
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0), puVar2 = local_40,
        puVar1 < puVar4; local_48 = local_48 + 1) {
      puVar4 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_objectAtIndexedSubscript__0269cc78,local_48);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_30;
      local_50 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_objectAtIndexedSubscript__0269cc78,local_48 + 1);
      _objc_retainAutoreleasedReturnValue();
      local_58 = puVar3;
      for (local_60 = 0; puVar1 = local_40, local_60 < 8; local_60 = local_60 + 1) {
        dVar5 = (double)NEON_ucvtf(local_60);
        dVar5 = dVar5 / 8.0;
        if (0.0 < dVar5) {
          local_a0 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)
                    (dVar5,local_20,PTR_s_colorByMixing_with_amount__026acc60,local_50,local_58);
          _objc_retainAutoreleasedReturnValue();
          local_70 = local_a0;
        }
        else {
          local_a0 = local_50;
        }
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180,local_a0);
        if (0.0 < dVar5) {
          (*(code *)PTR__objc_release_02578630)(local_70);
        }
      }
      _objc_storeStrong(local_60 - 8,&local_58);
      _objc_storeStrong(&local_50,0);
    }
    puVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_lastObject_0269d200);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar1 = local_40;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar1;
    local_34 = 1;
    _objc_storeStrong(&local_40,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar4;
    local_34 = 1;
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

