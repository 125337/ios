// FUN_000a03fc @ 000a03fc

undefined1  [16]
FUN_000a03fc(undefined8 param_1,undefined8 param_2,double param_3,double param_4,undefined8 param_5,
            undefined8 param_6)

{
  undefined1 auVar1 [16];
  int iVar2;
  cfstringStruct *pcVar3;
  char *pcVar4;
  undefined *puVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  double *local_1b0;
  double local_f0;
  double local_e8;
  double local_e0;
  undefined8 local_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double dStack_88;
  double local_80;
  double dStack_78;
  undefined *local_68;
  char *local_60 [3];
  cfstringStruct *local_48;
  long local_40;
  char *local_38;
  double local_30;
  double dStack_28;
  
  local_38 = (char *)0x0;
  _objc_storeStrong(&local_38,param_5);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_6);
  dStack_28 = *(double *)(PTR__CGSizeZero_025782f8 + 8);
  local_30 = *(double *)PTR__CGSizeZero_025782f8;
  pcVar3 = &cf_imageSize;
  _NSSelectorFromString();
  pcVar4 = local_38;
  local_48 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_respondsToSelector__026ca818,pcVar3);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_methodSignatureForSelector__0269e190,local_48);
    _objc_retainAutoreleasedReturnValue();
    local_60[0] = pcVar4;
    if (pcVar4 != (char *)0x0) {
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_methodReturnType_0269e198);
      iVar2 = _strcmp(pcVar4,"{CGSize=dd}");
      if (iVar2 == 0) {
        puVar5 = PTR__OBJC_CLASS___NSInvocation_026ce208;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSInvocation_026ce208,
                   PTR_s_invocationWithMethodSignature__0269e1a0,local_60[0]);
        _objc_retainAutoreleasedReturnValue();
        local_68 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_setTarget__0269e1a8,local_38);
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setSelector__0269e1b0,local_48);
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_invoke_0269e1b8);
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_getReturnValue__0269e1c0,&local_30);
        _objc_storeStrong(&local_68,0);
      }
    }
    _objc_storeStrong(local_60,0);
  }
  dVar6 = local_30;
  if ((local_30 <= 0.5) || (dVar6 = dStack_28, dVar7 = param_3, dVar10 = param_4, dStack_28 <= 0.5))
  {
    dVar7 = 0.5;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
    dVar10 = dVar6;
    local_a0 = dVar6;
    local_98 = dVar7;
    local_90 = param_3;
    dStack_88 = param_4;
    local_80 = param_3;
    dStack_78 = param_4;
    if ((0.5 < param_3) && (0.5 < param_4)) {
      local_30 = param_3;
      dStack_28 = param_4;
    }
  }
  dVar6 = local_30;
  if (((local_30 <= 0.5) || (dVar6 = dStack_28, dStack_28 <= 0.5)) && (dVar8 = 0.5, local_40 != 0))
  {
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bounds_026ca548);
    uVar9 = 0x3fe0000000000000;
    local_c0 = dVar6;
    local_b8 = dVar8;
    local_b0 = dVar7;
    local_a8 = dVar10;
    if (dVar7 <= 0.5) {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_frame_026ca640);
      local_1b0 = &local_f0;
      local_f0 = dVar8;
      local_e8 = dVar6;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bounds_026ca548);
      local_1b0 = &local_d0;
      local_e0 = dVar7;
      local_d8 = uVar9;
      local_d0 = dVar8;
      dStack_c8 = dVar6;
    }
    dStack_28 = local_1b0[1];
    local_30 = *local_1b0;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  auVar1._8_8_ = dStack_28;
  auVar1._0_8_ = local_30;
  return auVar1;
}

