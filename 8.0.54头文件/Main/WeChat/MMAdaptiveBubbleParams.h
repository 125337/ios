@interface MMAdaptiveBubbleParams : NSObject
{
    BOOL _needBlurEffect; // +0x8
    UIImage * _mainPartBgImage; // +0x10
    UIImage * _arrowImage; // +0x18
}
- (BOOL)needBlurEffect;
- (void)setNeedBlurEffect:(BOOL)arg1;
- (id)mainPartBgImage;
- (void)setMainPartBgImage:(id)arg1;
- (id)arrowImage;
- (void)setArrowImage:(id)arg1;
- (void).cxx_destruct;
@end

