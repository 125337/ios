// allowSaveToPhotoAlbum @0x7d120

/* Function Stack Size: 0x10 bytes */

bool WCMYBIBImageData::allowSaveToPhotoAlbum(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 0x19) & 1;
}

