// _WCMTOCropViewUsesGlassDesign @0xc0020

bool _WCMTOCropViewUsesGlassDesign(void)

{
  int iVar1;
  
  iVar1 = ___isPlatformVersionAtLeast(2,0x1a,0);
  return iVar1 != 0;
}

