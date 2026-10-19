// .cxx_destruct @0x6a290

/* Function Stack Size: 0x10 bytes */

void WCMYBImage::_cxx_destruct(ID param_1,SEL param_2)

{
  _objc_storeStrong(param_1 + (long)_preloadedLock);
  _objc_storeStrong(param_1 + (long)_preloadedFrames,0);
  _objc_storeStrong(param_1 + (long)_decoder,0);
  return;
}

