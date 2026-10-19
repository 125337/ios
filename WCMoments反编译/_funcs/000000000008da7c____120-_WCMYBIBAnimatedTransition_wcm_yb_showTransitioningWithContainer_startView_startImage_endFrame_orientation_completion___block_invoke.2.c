// ___120-[WCMYBIBAnimatedTransition_wcm_yb_showTransitioningWithContainer:startView:startImage:endFrame:orientation:completion:]_block_invoke.2 @0x8da7c

void ___120__WCMYBIBAnimatedTransition_wcm_yb_showTransitioningWithContainer_startView_startImage_endFrame_orientation_completion___block_invoke_2
               (long param_1)

{
  undefined8 local_38;
  
  if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
    _objc_msgSend_removeFromSuperview(*(undefined8 *)(param_1 + 0x20),local_38);
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  }
  return;
}

