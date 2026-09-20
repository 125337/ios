// FUN_01b15274 @ 01b15274

void FUN_01b15274(undefined8 param_1,undefined8 param_2,long param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  undefined1 auStack_120 [48];
  undefined1 auStack_f0 [48];
  undefined1 auStack_c0 [48];
  undefined1 auStack_90 [48];
  double local_60;
  undefined8 uStack_58;
  double local_50;
  undefined8 local_48;
  double local_40;
  undefined8 uStack_38;
  long local_30;
  long local_28;
  
  dVar1 = DAT_02323f88;
  dVar2 = DAT_02323f88;
  local_30 = param_3;
  local_28 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_3 + 0x20),PTR_s_center_026ca560);
  dVar3 = dVar2 + *(double *)(param_3 + 0x28);
  uVar4 = *(undefined8 *)(param_3 + 0x30);
  local_50 = dVar2;
  local_48 = param_2;
  FUN_01b09530();
  local_60 = dVar3;
  uStack_58 = uVar4;
  local_40 = dVar3;
  uStack_38 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (dVar3,uVar4,*(undefined8 *)(param_3 + 0x20),PTR_s_setCenter__026ca8c0);
  uVar4 = DAT_02323f68;
  if (*(double *)(param_3 + 0x28) <= 0.0) {
    uVar4 = DAT_0233a2d8;
  }
  _CGAffineTransformMakeRotation(uVar4);
  _CGAffineTransformMakeScale(dVar1);
  _CGAffineTransformConcat(auStack_c0,auStack_f0);
  uVar4 = *(undefined8 *)(param_3 + 0x20);
  _memcpy(auStack_120,auStack_90,0x30);
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_setTransform__026caad0,auStack_120);
  (*(code *)PTR__objc_msgSend_02578628)(0,*(undefined8 *)(param_3 + 0x20),PTR_s_setAlpha__026ca860);
  return;
}

