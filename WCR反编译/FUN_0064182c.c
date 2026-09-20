// FUN_0064182c @ 0064182c

void FUN_0064182c(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong local_1d8;
  ulong local_150;
  undefined *local_f0;
  ulong local_e8;
  ulong local_e0;
  ulong local_d8;
  ulong local_d0;
  undefined *local_c8;
  long local_c0;
  undefined *local_b8;
  ulong local_b0;
  undefined *local_a8 [2];
  ulong local_98;
  cfstringStruct *local_90;
  ulong local_88;
  undefined *local_80;
  ulong local_78;
  ulong local_70;
  undefined1 local_61;
  undefined4 local_60;
  long local_50;
  ulong local_48;
  ulong local_40;
  undefined *local_38;
  undefined *local_30;
  ulong local_28;
  
  local_48 = 0;
  _objc_storeStrong(&local_48,param_1);
  plVar2 = &local_50;
  local_50 = 0;
  _objc_storeStrong(plVar2,param_2);
  uVar1 = (uint)plVar2;
  FUN_006420b4();
  if (((uVar1 & 1) == 0) || (local_48 == 0)) {
    local_60 = 1;
  }
  else {
    FUN_0064212c();
    if ((uVar1 & 1) == 0) {
      local_60 = 1;
    }
    else {
      uVar3 = local_48;
      FUN_006421a8();
      local_61 = (undefined1)uVar3;
      uVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_70 = uVar4;
      (*(code *)PTR__objc_release_02578630)(uVar3);
      if (local_70 == 0) {
        local_150 = 0x7fffffffffffffff;
      }
      else {
        local_150 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_indexOfObject__0269e870,local_48);
      }
      local_78 = local_150;
      puVar5 = PTR__OBJC_CLASS___NSMutableString_026cdfb0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_string_0269cc38);
      _objc_retainAutoreleasedReturnValue();
      local_80 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_count_0269cfe0);
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar5,PTR_s_appendFormat__0269d148,
                 &cf____HOMETREE____isRoot__dstackIdx__ldstackCount__lu___);
      uVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_88 = uVar4;
      (*(code *)PTR__objc_release_02578630)(uVar3);
      if (local_88 == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_80,PTR_s_appendString__0269ccb0,&cf____navigationBar_nil___);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_80,PTR_s_appendString__0269ccb0,&cf____navigationBar___);
        FUN_006423f4(local_88,0,4,local_80);
      }
      pcVar6 = &cf_getTaskBarView;
      _NSSelectorFromString();
      uVar3 = local_48;
      local_90 = pcVar6;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_respondsToSelector__026ca818,pcVar6);
      if ((uVar3 & 1) != 0) {
        uVar3 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_performSelector__026ca7b8,local_90);
        _objc_retainAutoreleasedReturnValue();
        local_98 = uVar3;
        if (uVar3 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_80,PTR_s_appendString__0269ccb0,&cf____taskBarView___);
          FUN_006423f4(local_98,0,4,local_80);
        }
        _objc_storeStrong(&local_98,0);
      }
      puVar5 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_copy_0269d150);
      local_b0 = 0x5dc;
      local_a8[0] = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_length_0269cca0);
      local_c0 = 0;
      local_b8 = puVar5;
      for (local_c8 = (undefined *)0x0; local_c8 < local_b8; local_c8 = local_c8 + local_b0) {
        local_d8 = local_b0;
        local_e0 = (long)local_b8 - (long)local_c8;
        local_1d8 = local_e0;
        if (local_b0 < local_e0) {
          local_1d8 = local_b0;
        }
        local_e8 = local_1d8;
        local_d0 = local_1d8;
        local_38 = local_c8;
        local_40 = local_1d8;
        local_30 = local_c8;
        local_28 = local_1d8;
        puVar7 = local_a8[0];
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_a8[0],PTR_s_substringWithRange__0269d138,local_c8,local_1d8);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR_WCRefineHelper_026ce000;
        local_c0 = local_c0 + 1;
        puVar8 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_f0 = puVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                   &cf__HomeTreep_lu___);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_Log__026a60e0);
        (*(code *)PTR__objc_release_02578630)(puVar8);
        _objc_storeStrong(&local_f0,0);
      }
      _objc_storeStrong((long)local_c8 - (long)local_b8,local_a8);
      _objc_storeStrong(&local_88,0);
      _objc_storeStrong(&local_80,0);
      _objc_storeStrong(&local_70,0);
      local_60 = 0;
    }
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  return;
}

