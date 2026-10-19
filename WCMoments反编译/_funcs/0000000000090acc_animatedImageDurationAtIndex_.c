// animatedImageDurationAtIndex: @0x90acc

/* Function Stack Size: 0x18 bytes */

double WCMYYImage::animatedImageDurationAtIndex_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  double local_18;
  
  local_18 = (double)_objc_msgSend_frameDurationAtIndex_
                               (*(undefined8 *)(param_1 + (long)_decoder),param_2,param_3);
  if (local_18 < 0.010999999940395355) {
    local_18 = 0.10000000149011612;
  }
  return local_18;
}

