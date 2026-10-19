// _WCMYYImageTypeToUTType @0x92868

undefined8 _WCMYYImageTypeToUTType(long param_1)

{
  undefined8 local_8;
  
  if (param_1 == 1) {
    local_8 = *(undefined8 *)PTR__kUTTypeJPEG_00110920;
  }
  else if (param_1 == 2) {
    local_8 = *(undefined8 *)PTR__kUTTypeJPEG2000_00110928;
  }
  else if (param_1 == 3) {
    local_8 = *(undefined8 *)PTR__kUTTypeTIFF_00110938;
  }
  else if (param_1 == 4) {
    local_8 = *(undefined8 *)PTR__kUTTypeBMP_00110908;
  }
  else if (param_1 == 5) {
    local_8 = *(undefined8 *)PTR__kUTTypeICO_00110918;
  }
  else if (param_1 == 6) {
    local_8 = *(undefined8 *)PTR__kUTTypeAppleICNS_00110900;
  }
  else if (param_1 == 7) {
    local_8 = *(undefined8 *)PTR__kUTTypeGIF_00110910;
  }
  else if (param_1 == 8) {
    local_8 = *(undefined8 *)PTR__kUTTypePNG_00110930;
  }
  else {
    local_8 = 0;
  }
  return local_8;
}

