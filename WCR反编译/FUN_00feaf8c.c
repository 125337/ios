// FUN_00feaf8c @ 00feaf8c

byte FUN_00feaf8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  undefined8 ****ppppuVar4;
  undefined8 ****ppppuVar5;
  int iVar6;
  undefined8 ***local_178;
  undefined8 ***local_138;
  undefined8 ***local_120;
  undefined8 ***local_108;
  undefined8 ***local_98;
  undefined8 ***local_90;
  undefined8 ***local_88;
  int local_7c;
  undefined8 ***local_78;
  undefined8 ***local_70;
  undefined8 ***local_68;
  undefined8 ***local_60;
  undefined8 ***local_58;
  undefined8 ***local_50;
  byte local_41;
  undefined8 local_40;
  undefined8 ***local_38;
  undefined8 ***local_30;
  undefined8 local_28;
  
  local_50 = (undefined8 ****)0x0;
  _objc_storeStrong(&local_50,param_1);
  local_58 = (undefined8 ****)0x0;
  _objc_storeStrong(&local_58,param_2);
  ppppuVar4 = &local_60;
  local_60 = (undefined8 ****)0x0;
  _objc_storeStrong(ppppuVar4,param_3);
  FUN_00fed98c();
  _objc_retainAutoreleasedReturnValue();
  local_68 = ppppuVar4;
  FUN_00feda00();
  ppppuVar4 = (undefined8 ****)local_68;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_count_0269cfe0);
  local_70 = ppppuVar4;
  do {
    local_70 = (undefined8 ***)((long)local_70 + -1);
    if ((long)local_70 < 0) {
      iVar6 = 1;
      local_41 = 0;
      local_7c = 1;
      break;
    }
    ppppuVar4 = (undefined8 ****)local_68;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_68,PTR_s_objectAtIndexedSubscript__0269cc78,local_70);
    _objc_retainAutoreleasedReturnValue();
    local_78 = ppppuVar4;
    FUN_00fedc10(ppppuVar4,local_50,local_58,local_60);
    if (((ulong)ppppuVar4 & 1) == 0) {
      local_7c = 4;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_removeObjectAtIndex__0269d530,local_70);
      ppppuVar4 = (undefined8 ****)local_78;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_grow_026ad580);
      _objc_retainAutoreleasedReturnValue();
      local_108 = ppppuVar4;
      if (ppppuVar4 == (undefined8 ****)0x0) {
        local_108 = local_50;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_88 = local_108;
      (*(code *)PTR__objc_release_02578630)(ppppuVar4);
      ppppuVar4 = (undefined8 ****)local_78;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_tool_026ad588);
      _objc_retainAutoreleasedReturnValue();
      local_120 = ppppuVar4;
      if (ppppuVar4 == (undefined8 ****)0x0) {
        local_120 = local_58;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_90 = local_120;
      (*(code *)PTR__objc_release_02578630)(ppppuVar4);
      ppppuVar4 = (undefined8 ****)local_78;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_inner_026ad590);
      _objc_retainAutoreleasedReturnValue();
      local_138 = ppppuVar4;
      if (ppppuVar4 == (undefined8 ****)0x0) {
        local_138 = local_60;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_98 = local_138;
      (*(code *)PTR__objc_release_02578630)(ppppuVar4);
      pppuVar3 = local_88;
      pppuVar2 = local_90;
      pppuVar1 = local_98;
      ppppuVar4 = (undefined8 ****)local_78;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_beforeText_026ad598);
      _objc_retainAutoreleasedReturnValue();
      FUN_00feb504(pppuVar3,pppuVar2,pppuVar1);
      (*(code *)PTR__objc_release_02578630)(ppppuVar4);
      if (((undefined8 ****)local_98 != (undefined8 ****)0x0) &&
         (ppppuVar4 = (undefined8 ****)local_98,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_98,PTR_s_respondsToSelector__026ca818,PTR_s_setSelectedRange__026a0d48),
         ((ulong)ppppuVar4 & 1) != 0)) {
        ppppuVar4 = (undefined8 ****)local_78;
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_cursor_026acaa8);
        ppppuVar5 = (undefined8 ****)local_78;
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_beforeText_026ad598);
        _objc_retainAutoreleasedReturnValue();
        local_178 = ppppuVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(ppppuVar5);
        if (ppppuVar4 < local_178) {
          local_178 = ppppuVar4;
        }
        local_38 = local_178;
        local_40 = 0;
        local_30 = local_178;
        local_28 = 0;
        (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setSelectedRange__026a0d48,local_178,0)
        ;
      }
      local_41 = 1;
      local_7c = 1;
      _objc_storeStrong(&local_98);
      _objc_storeStrong(&local_90,0);
      _objc_storeStrong(&local_88,0);
    }
    _objc_storeStrong(&local_78,0);
    iVar6 = local_7c + -4;
  } while (iVar6 == 0);
  _objc_storeStrong(iVar6,&local_68);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  return local_41 & 1;
}

