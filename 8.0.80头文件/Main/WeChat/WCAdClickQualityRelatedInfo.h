@interface WCAdClickQualityRelatedInfo : NSObject
{
    CGPoint _clickPoint; // +0x8
    CGPoint _clickPointToWindow; // +0x18
    CGSize _relatedViewSize; // +0x28
}
- (CGPoint)clickPoint;
- (void)setClickPoint:(CGPoint)arg1;
- (CGPoint)clickPointToWindow;
- (void)setClickPointToWindow:(CGPoint)arg1;
- (CGSize)relatedViewSize;
- (void)setRelatedViewSize:(CGSize)arg1;
@end
