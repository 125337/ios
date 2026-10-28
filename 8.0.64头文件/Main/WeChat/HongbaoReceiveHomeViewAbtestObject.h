@interface HongbaoReceiveHomeViewAbtestObject : NSObject
{
    BOOL _hasRedSkin; // +0x8
    UIColor * _textColor; // +0x10
    UIColor * _shadowColor; // +0x18
    double _shadowRadius; // +0x20
}
- (id)initWithConfig:(BOOL)arg1;
- (void)convertAbtestObjectFromAbtestString:(id)arg1;
- (id)textColor;
- (void)setTextColor:(id)arg1;
- (id)shadowColor;
- (void)setShadowColor:(id)arg1;
- (double)shadowRadius;
- (void)setShadowRadius:(double)arg1;
- (BOOL)hasRedSkin;
- (void)setHasRedSkin:(BOOL)arg1;
- (void).cxx_destruct;
@end
