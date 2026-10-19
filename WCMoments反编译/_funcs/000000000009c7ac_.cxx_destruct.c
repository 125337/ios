// .cxx_destruct @0x9c7ac

/* Function Stack Size: 0x10 bytes */

void WCMYYFrameImage::_cxx_destruct(ID param_1,SEL param_2)

{
  _objc_storeStrong(param_1 + (long)_frameDurations);
  _objc_storeStrong(param_1 + (long)_imageDatas,0);
  _objc_storeStrong(param_1 + (long)_imagePaths,0);
  return;
}

