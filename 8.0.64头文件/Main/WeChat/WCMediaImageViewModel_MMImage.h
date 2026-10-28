@interface WCMediaImageViewModel_MMImage : WCMediaImageViewModel
{
    MMImage * _mmImage; // +0x8
}
- (id)initWithMMImage:(id)arg1;
- (BOOL)isLivePhoto;
- (void)fillExtraDataInImageMaterial:(id)arg1;
- (id)mmImage;
- (void).cxx_destruct;
@end
