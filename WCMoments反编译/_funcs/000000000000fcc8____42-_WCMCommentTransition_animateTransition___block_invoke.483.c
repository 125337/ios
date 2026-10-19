// ___42-[WCMCommentTransition_animateTransition:]_block_invoke.483 @0xfcc8

void ___42__WCMCommentTransition_animateTransition___block_invoke_483
               (long param_1,undefined1 param_2)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 local_98;
  undefined1 auStack_90 [48];
  undefined1 auStack_60 [55];
  byte local_29;
  long local_28;
  undefined1 local_19;
  long local_18;
  
  local_28 = param_1;
  local_19 = param_2;
  local_18 = param_1;
  bVar1 = _objc_msgSend_transitionWasCancelled(*(undefined8 *)(param_1 + 0x20));
  local_29 = (bVar1 ^ 1) & 1;
  _objc_msgSend_completeTransition_(*(undefined8 *)(param_1 + 0x20),local_98,local_29);
  uVar2 = _objc_msgSend_presenting(*(undefined8 *)(param_1 + 0x28),local_98);
  if (((uVar2 & 1) == 0) && ((local_29 & 1) != 0)) {
    _memcpy(auStack_60,PTR__CGAffineTransformIdentity_00110738,0x30);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    _memcpy(auStack_90,auStack_60,0x30);
    _objc_msgSend_setTransform_(uVar3,local_98,auStack_90);
  }
  return;
}

