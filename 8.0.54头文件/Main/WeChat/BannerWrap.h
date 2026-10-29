@interface BannerWrap : NSObject
{
    BOOL _editable; // +0x8
    unsigned int _index; // +0xc
    UIView<MFBanner> * _banner; // +0x10
}
- (id)banner;
- (void)setBanner:(id)arg1;
- (unsigned int)index;
- (void)setIndex:(unsigned int)arg1;
- (BOOL)editable;
- (void)setEditable:(BOOL)arg1;
- (void).cxx_destruct;
@end

