@interface MMMusicLyricPlayingLabel : UILabel
{
    CALayer * _maskLayer; // +0x8
    NSMutableArray * _lineMaskLayers; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)setText:(id)arg1;
- (void)drawTextInRect:(CGRect)arg1;
- (void)setProgress:(double)arg1 animated:(BOOL)arg2 animateDuration:(double)arg3;
- (void)pause;
- (void)resume;
- (id)maskLayer;
- (void)setMaskLayer:(id)arg1;
- (id)lineMaskLayers;
- (void)setLineMaskLayers:(id)arg1;
- (void).cxx_destruct;
@end

