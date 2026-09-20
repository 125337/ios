// FUN_003a01e0 @ 003a01e0

void FUN_003a01e0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  char *local_198;
  undefined1 auStack_108 [48];
  undefined1 auStack_d8 [48];
  double local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  char *local_88 [2];
  double local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  char *local_48;
  char *local_40;
  undefined8 local_38;
  long local_30;
  char *local_28;
  
  local_28 = (char *)0x0;
  _objc_storeStrong(&local_28,param_5);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_6);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_7);
  pcVar1 = "NewMainFrameCell";
  _objc_getClass();
  pcVar2 = local_28;
  local_40 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_dequeueReusableCellWithIdentifie_026a2808,DAT_026e0280);
  _objc_retainAutoreleasedReturnValue();
  local_48 = pcVar2;
  if ((pcVar2 == (char *)0x0) ||
     ((local_40 != (char *)0x0 &&
      ((*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,local_40),
      ((ulong)pcVar2 & 1) == 0)))) {
    if (local_40 == (char *)0x0) {
      local_198 = PTR__OBJC_CLASS___UITableViewCell_026ce200;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UITableViewCell_026ce200,PTR_s_class_0269cd60);
    }
    else {
      local_198 = local_40;
    }
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    pcVar1 = local_48;
    local_48 = local_198;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
  }
  FUN_0036b608(local_48,0);
  pcVar1 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_textLabel_0269fd00);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_detailTextLabel_0269fd08);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_textLabel_0269fd00);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_detailTextLabel_0269fd08);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  lVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_cellData_026a27b0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (lVar3 == 0) {
    puVar4 = PTR_WCRefineGroupDataProvider_026ce540;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineGroupDataProvider_026ce540,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_session_0269d000);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_nativeCellDataForSession__026a2810);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setCellData__026a2818);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(lVar3);
    (*(code *)PTR__objc_release_02578630)(puVar4);
  }
  lVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_cellData_026a27b0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  pcVar1 = local_48;
  if (lVar3 != 0) {
    lVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_cellData_026a27b0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_frame_026ca640);
    local_78 = param_1;
    local_70 = param_2;
    local_68 = param_3;
    local_60 = param_4;
    FUN_0036b910(pcVar1,lVar3);
    (*(code *)PTR__objc_release_02578630)(lVar3);
  }
  FUN_0036baa4(local_48,local_38);
  FUN_0036b608(local_48,0);
  pcVar1 = local_48;
  FUN_0036bd00();
  _objc_retainAutoreleasedReturnValue();
  local_88[0] = pcVar1;
  if (pcVar1 != (char *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_frame_026ca640);
    uVar6 = 0x3fe0000000000000;
    local_a8 = param_1;
    local_a0 = param_2;
    local_98 = param_3;
    local_90 = param_4;
    if (0.5 < ABS(param_1)) {
      _memcpy(auStack_d8,PTR__CGAffineTransformIdentity_025782d8,0x30);
      pcVar1 = local_88[0];
      _memcpy(auStack_108,auStack_d8,0x30);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_setTransform__026caad0,auStack_108);
      (*(code *)PTR__objc_msgSend_02578628)(local_88[0],PTR_s_frame_026ca640);
      (*(code *)PTR__objc_msgSend_02578628)
                (0,uVar6,param_3,param_4,local_88[0],PTR_s_setFrame__026ca960);
    }
  }
  FUN_0036bf30(local_48);
  pcVar1 = local_48;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(local_88);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(pcVar1);
  return;
}

