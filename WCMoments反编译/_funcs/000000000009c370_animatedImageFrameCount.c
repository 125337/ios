// animatedImageFrameCount @0x9c370

/* Function Stack Size: 0x10 bytes */

unsigned_long_long WCMYYFrameImage::animatedImageFrameCount(ID param_1,SEL param_2)

{
  undefined8 local_30;
  undefined8 local_18;
  
  if (*(long *)(param_1 + (long)_imagePaths) == 0) {
    if (*(long *)(param_1 + (long)_imageDatas) == 0) {
      local_18 = 1;
    }
    else {
      local_18 = _objc_msgSend_count(*(undefined8 *)(param_1 + (long)_imageDatas),local_30);
    }
  }
  else {
    local_18 = _objc_msgSend_count(*(undefined8 *)(param_1 + (long)_imagePaths),local_30);
  }
  return local_18;
}

