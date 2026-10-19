// ___42-[WCMCommentTransition_animateTransition:]_block_invoke @0xfb74

void ___42__WCMCommentTransition_animateTransition___block_invoke
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 local_b0;
  undefined1 auStack_a0 [48];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 auStack_50 [48];
  long local_20;
  long local_18;
  
  local_20 = param_5;
  local_18 = param_5;
  uVar1 = _objc_msgSend_presenting(*(undefined8 *)(param_5 + 0x28));
  if ((uVar1 & 1) == 0) {
    local_70 = _objc_msgSend_bounds(*(undefined8 *)(param_5 + 0x20),local_b0);
    local_68 = param_2;
    local_60 = param_3;
    local_58 = param_4;
    _CGAffineTransformMakeTranslation(auStack_50,0,param_4);
  }
  else {
    _memcpy(auStack_50,PTR__CGAffineTransformIdentity_00110738,0x30);
  }
  uVar2 = *(undefined8 *)(param_5 + 0x20);
  _memcpy(auStack_a0,auStack_50,0x30);
  _objc_msgSend_setTransform_(uVar2,local_b0,auStack_a0);
  return;
}

