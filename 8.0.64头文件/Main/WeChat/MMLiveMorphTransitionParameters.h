@interface MMLiveMorphTransitionParameters : NSObject
{
    UIView * _primaryView; // +0x8
    CGSize _mediaSize; // +0x10
    CGRect _sourceFrame; // +0x20
}
- (CGRect)sourceFrame;
- (void)setSourceFrame:(CGRect)arg1;
- (id)primaryView;
- (void)setPrimaryView:(id)arg1;
- (CGSize)mediaSize;
- (void)setMediaSize:(CGSize)arg1;
- (void).cxx_destruct;
@end
