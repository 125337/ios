// FUN_01b309d4 @ 01b309d4

byte FUN_01b309d4(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 *param_5)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint local_198;
  uint local_194;
  double local_180;
  ulong local_150;
  ulong local_138;
  ulong local_120;
  ulong local_108;
  ulong local_c8;
  ulong local_c0;
  ulong local_b8;
  byte local_a9;
  ulong local_a8;
  ulong local_a0;
  byte local_91;
  ulong local_90;
  ulong local_88;
  byte local_79;
  ulong local_78;
  ulong local_70;
  byte local_61;
  ulong local_60;
  ulong local_58;
  long local_50;
  undefined1 *local_48;
  undefined8 local_40;
  ulong local_38;
  long local_30;
  byte local_21;
  
  local_38 = 0;
  local_30 = param_2;
  _objc_storeStrong(&local_38);
  uVar2 = *(ulong *)(param_2 + 0x20);
  local_50 = param_2;
  local_48 = param_5;
  local_40 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_objectForKeyedSubscript__0269d098,&cf_mesSvrID);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_61 = 0;
  if ((uVar4 & 1) == 0) {
    local_108 = 0;
  }
  else {
    local_108 = *(ulong *)(param_2 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_108,PTR_s_objectForKeyedSubscript__0269d098,&cf_mesSvrID);
    _objc_retainAutoreleasedReturnValue();
    local_61 = 1;
    local_60 = local_108;
    (*(code *)PTR__objc_msgSend_02578628)();
  }
  if ((local_61 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  local_58 = local_108;
  uVar4 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_mesSvrID);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_79 = 0;
  if ((uVar2 & 1) == 0) {
    local_120 = 0;
  }
  else {
    local_120 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_mesSvrID);
    _objc_retainAutoreleasedReturnValue();
    local_79 = 1;
    local_78 = local_120;
    (*(code *)PTR__objc_msgSend_02578628)();
  }
  if ((local_79 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_78);
  }
  (*(code *)PTR__objc_release_02578630)(uVar4);
  local_70 = local_120;
  uVar2 = *(ulong *)(param_2 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_objectForKeyedSubscript__0269d098,&cf_localID);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_91 = 0;
  if ((uVar4 & 1) == 0) {
    local_138 = 0;
  }
  else {
    local_138 = *(ulong *)(param_2 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_138,PTR_s_objectForKeyedSubscript__0269d098,&cf_localID);
    _objc_retainAutoreleasedReturnValue();
    local_91 = 1;
    local_90 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)();
  }
  if ((local_91 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_90);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  local_88 = local_138;
  uVar4 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_localID);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_a9 = 0;
  if ((uVar2 & 1) == 0) {
    local_150 = 0;
  }
  else {
    local_150 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_localID);
    _objc_retainAutoreleasedReturnValue();
    local_a9 = 1;
    local_a8 = local_150;
    (*(code *)PTR__objc_msgSend_02578628)();
  }
  if ((local_a9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_a8);
  }
  (*(code *)PTR__objc_release_02578630)(uVar4);
  local_a0 = local_150;
  uVar4 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_sessionUserName);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  FUN_01b1fc40();
  _objc_retainAutoreleasedReturnValue();
  local_b8 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar4);
  uVar4 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_keyword);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  FUN_01b1fc40();
  _objc_retainAutoreleasedReturnValue();
  local_c0 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar4);
  uVar4 = local_38;
  FUN_01b24660();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_38;
  local_c8 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_time);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if ((uVar4 & 1) == 0) {
    local_180 = 0.0;
  }
  else {
    uVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_time)
    ;
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar4);
    local_180 = param_1;
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  if (((long)local_58 < 1) || (bVar1 = true, local_70 != local_58)) {
    bVar1 = 0 < (long)local_88 && local_a0 == local_88;
  }
  lVar3 = *(long *)(param_2 + 0x28);
  (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
  local_194 = 0;
  if (lVar3 == 0) goto LAB_01b31208;
  uVar4 = *(ulong *)(param_2 + 0x28);
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isEqualToString__0269ccc8,local_c8);
  local_194 = 0;
  if ((uVar4 & 1) == 0) goto LAB_01b31208;
  lVar3 = *(long *)(param_2 + 0x30);
  (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
  if (lVar3 == 0) {
LAB_01b3112c:
    local_194 = 0;
    if (((*(double *)(param_2 + 0x40) <= 0.0) || (local_194 = 0, local_180 <= 0.0)) ||
       (local_194 = 0, 1.0 <= ABS(*(double *)(param_2 + 0x40) - local_180))) goto LAB_01b31208;
  }
  else {
    uVar4 = *(ulong *)(param_2 + 0x30);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isEqualToString__0269ccc8,local_c0);
    if ((uVar4 & 1) == 0) goto LAB_01b3112c;
  }
  lVar3 = *(long *)(param_2 + 0x38);
  (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
  if (lVar3 == 0) {
    uVar4 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0);
    local_198 = 1;
    if (uVar4 != 0) goto LAB_01b311d4;
  }
  else {
LAB_01b311d4:
    uVar5 = *(undefined8 *)(param_2 + 0x38);
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isEqualToString__0269ccc8,local_b8);
    local_198 = (uint)uVar5;
  }
  local_194 = local_198;
LAB_01b31208:
  if (((bVar1) || ((local_194 & 1) != 0)) ||
     (uVar4 = local_38,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_38,PTR_s_isEqual__0269e9a8,*(undefined8 *)(param_2 + 0x20)), (uVar4 & 1) != 0)
     ) {
    *local_48 = 1;
    local_21 = 1;
  }
  else {
    local_21 = 0;
  }
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_38,0);
  return local_21 & 1;
}

