// FUN_00022eb0 @ 00022eb0

byte FUN_00022eb0(undefined8 param_1,long *param_2,undefined8 *param_3,ulong *param_4)

{
  bool bVar1;
  long lVar2;
  cfstringStruct *pcVar3;
  ulong uVar4;
  cfstringStruct *pcVar5;
  long lVar6;
  ulong uVar7;
  uint local_194;
  cfstringStruct *local_180;
  cfstringStruct *local_158;
  cfstringStruct *local_130;
  cfstringStruct *local_e0;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  byte local_b9;
  cfstringStruct *local_b8;
  byte local_a9;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  byte local_91;
  cfstringStruct *local_90;
  byte local_81;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  long local_68 [3];
  cfstringStruct *local_50;
  ulong *local_48;
  undefined8 *local_40;
  long *local_38;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  pcVar3 = (cfstringStruct *)PTR_WCRefineAIStore_026ce048;
  local_48 = param_4;
  local_40 = param_3;
  local_38 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_68[0] = 0;
  local_70 = (cfstringStruct *)0x0;
  local_81 = 0;
  local_91 = 0;
  local_50 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_chatPolishEnabled_0269d340);
  if (((ulong)pcVar3 & 1) == 0) {
    local_130 = &cf___;
  }
  else {
    local_130 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_chatPolishCommand_0269d348);
    _objc_retainAutoreleasedReturnValue();
    local_81 = 1;
    local_80 = local_130;
    FUN_0001a2e4();
    _objc_retainAutoreleasedReturnValue();
    local_91 = 1;
    local_90 = local_130;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_78 = local_130;
  if ((local_91 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_90);
  }
  if ((local_81 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_80);
  }
  local_a9 = 0;
  local_b9 = 0;
  pcVar3 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_chatImageEnabled_0269d350);
  if (((ulong)pcVar3 & 1) == 0) {
    local_158 = &cf___;
  }
  else {
    local_158 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_chatImageCommand_0269d358);
    _objc_retainAutoreleasedReturnValue();
    local_a9 = 1;
    local_a8 = local_158;
    FUN_0001a2e4();
    _objc_retainAutoreleasedReturnValue();
    local_b9 = 1;
    local_b8 = local_158;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_a0 = local_158;
  if ((local_b9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_b8);
  }
  if ((local_a9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_a8);
  }
  pcVar3 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_chatVideoEnabled_0269d360);
  bVar1 = ((ulong)pcVar3 & 1) == 0;
  if (bVar1) {
    local_180 = &cf___;
  }
  else {
    local_d0 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_chatVideoCommand_0269d368);
    _objc_retainAutoreleasedReturnValue();
    local_180 = local_d0;
    FUN_0001a2e4();
    _objc_retainAutoreleasedReturnValue();
    local_e0 = local_180;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_c8 = local_180;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_e0);
    (*(code *)PTR__objc_release_02578630)(local_d0);
  }
  pcVar3 = local_78;
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
  local_194 = 0;
  if (pcVar3 != (cfstringStruct *)0x0) {
    uVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasPrefix__0269d320,local_78);
    local_194 = (uint)uVar4;
  }
  if ((local_194 & 1) != 0) {
    pcVar3 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
    pcVar5 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
    if (pcVar5 <= pcVar3) {
      _objc_storeStrong((long)pcVar3 - (long)pcVar5,local_68,&cf_polish);
      _objc_storeStrong(&local_70,local_78);
    }
  }
  pcVar3 = local_a0;
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_length_0269cca0);
  if ((pcVar3 != (cfstringStruct *)0x0) &&
     (uVar4 = local_30,
     (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasPrefix__0269d320,local_a0),
     (uVar4 & 1) != 0)) {
    pcVar3 = local_a0;
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_length_0269cca0);
    pcVar5 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
    if (pcVar5 <= pcVar3) {
      _objc_storeStrong((long)pcVar3 - (long)pcVar5,local_68,&cf_image);
      _objc_storeStrong(&local_70,local_a0);
    }
  }
  pcVar3 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
  if ((pcVar3 != (cfstringStruct *)0x0) &&
     (uVar4 = local_30,
     (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasPrefix__0269d320,local_c8),
     (uVar4 & 1) != 0)) {
    pcVar3 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
    pcVar5 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
    if (pcVar5 <= pcVar3) {
      _objc_storeStrong((long)pcVar3 - (long)pcVar5,local_68,&cf_video);
      _objc_storeStrong(&local_70,local_c8);
    }
  }
  lVar6 = local_68[0];
  (*(code *)PTR__objc_msgSend_02578628)(local_68[0],PTR_s_length_0269cca0);
  lVar2 = local_68[0];
  if (lVar6 == 0) {
    local_21 = 0;
  }
  else {
    if (local_38 != (long *)0x0) {
      _objc_retainAutorelease();
      *local_38 = lVar2;
    }
    pcVar3 = local_70;
    if (local_40 != (undefined8 *)0x0) {
      _objc_retainAutorelease();
      *local_40 = pcVar3;
    }
    uVar4 = local_30;
    if (local_48 != (ulong *)0x0) {
      pcVar3 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_substringFromIndex__0269d120,pcVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar4;
      FUN_0001a2e4();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *local_48 = uVar7;
      (*(code *)PTR__objc_release_02578630)(uVar4);
    }
    local_21 = 1;
  }
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_a0,0);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(local_68,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

