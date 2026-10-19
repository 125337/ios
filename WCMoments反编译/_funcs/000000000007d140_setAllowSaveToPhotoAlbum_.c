// setAllowSaveToPhotoAlbum: @0x7d140

/* Function Stack Size: 0x14 bytes */

void WCMYBIBImageData::setAllowSaveToPhotoAlbum_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + 0x19) = (byte)param_3 & 1;
  return;
}

