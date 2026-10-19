// _WCMYYImageTypeGetExtension @0x92bec

void _WCMYYImageTypeGetExtension(long param_1)

{
  undefined8 local_18;
  
  if (param_1 == 1) {
    local_18 = (*(code *)PTR__objc_retain_00110460)(&cf_jpg);
  }
  else if (param_1 == 2) {
    local_18 = (*(code *)PTR__objc_retain_00110460)(&cf_jp2);
  }
  else if (param_1 == 3) {
    local_18 = (*(code *)PTR__objc_retain_00110460)(&cf_tiff);
  }
  else if (param_1 == 4) {
    local_18 = (*(code *)PTR__objc_retain_00110460)(&cf_bmp);
  }
  else if (param_1 == 5) {
    local_18 = (*(code *)PTR__objc_retain_00110460)(&cf_ico);
  }
  else if (param_1 == 6) {
    local_18 = (*(code *)PTR__objc_retain_00110460)(&cf_icns);
  }
  else if (param_1 == 7) {
    local_18 = (*(code *)PTR__objc_retain_00110460)(&cf_gif);
  }
  else if (param_1 == 8) {
    local_18 = (*(code *)PTR__objc_retain_00110460)(&cf_png);
  }
  else if (param_1 == 9) {
    local_18 = (*(code *)PTR__objc_retain_00110460)(&cf_webp);
  }
  else {
    local_18 = 0;
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

