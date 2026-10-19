// isAnimating @0x9efc4

/* Function Stack Size: 0x10 bytes */

bool WCMYYAnimatedImageView::isAnimating(ID param_1,SEL param_2)

{
  bool bVar1;
  
  bVar1 = _objc_msgSend_currentIsPlayingAnimation(param_1);
  return bVar1;
}

