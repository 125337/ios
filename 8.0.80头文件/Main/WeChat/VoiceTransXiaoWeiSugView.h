@interface VoiceTransXiaoWeiSugView : UIView
{
    long long _sugCount; // +0x8
    double _topArcTopY; // +0x10
    double _bottomArcBottomY; // +0x18
    NSArray * _originTexts; // +0x20
    UIView * _contentView; // +0x28
    NSMutableArray * _arcLayers; // +0x30
    NSMutableArray * _arcLabels; // +0x38
    NSMutableArray * _arcRadii; // +0x40
    long long _selectedIndex; // +0x48
    CGPoint _arcCenter; // +0x50
}
+ (double)topArcTopYForArcCenter:(CGPoint)arg1 baseRadius:(double)arg2 sugCount:(long long)arg3;
- (id)initWithFrame:(CGRect)arg1;
- (void)configureWithSugList:(id)arg1 arcCenter:(CGPoint)arg2 baseRadius:(double)arg3 maxWidth:(double)arg4;
- (id)arcPathAtRadius:(double)arg1 angle:(double)arg2;
- (double)measureWidth:(id)arg1 font:(id)arg2;
- (id)truncate:(id)arg1 toArcLength:(double)arg2 font:(id)arg3;
- (long long)sugIndexAtPoint:(CGPoint)arg1;
- (void)setSelectedSugIndex:(long long)arg1;
- (id)textAtIndex:(long long)arg1;
- (void)playRevealAnimationWithDuration:(double)arg1 riseY:(double)arg2 alphaStartFraction:(double)arg3;
- (void)reset;
- (long long)sugCount;
- (double)topArcTopY;
- (double)bottomArcBottomY;
- (id)originTexts;
- (void)setOriginTexts:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)arcLayers;
- (void)setArcLayers:(id)arg1;
- (id)arcLabels;
- (void)setArcLabels:(id)arg1;
- (id)arcRadii;
- (void)setArcRadii:(id)arg1;
- (CGPoint)arcCenter;
- (void)setArcCenter:(CGPoint)arg1;
- (long long)selectedIndex;
- (void)setSelectedIndex:(long long)arg1;
- (void).cxx_destruct;
@end
