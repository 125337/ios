// setGalleryIdleSamples: @0x5b130

/* Function Stack Size: 0x18 bytes */

void WCMFeedController::setGalleryIdleSamples_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + (long)_galleryIdleSamples) = param_3;
  return;
}

