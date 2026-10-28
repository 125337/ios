@interface MMFinderLiveMusicVolumnBar : UIView
{
    BOOL _showing; // +0x8
    id /* block */ _volumnAdjustCallback; // +0x10
    MMFinderLiveMusicVolumnContentView * _contentView; // +0x18
}
+ (double)preferHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutContentView;
- (void)setVolumnAdjustCallback:(id /* block */)arg1;
- (void)reduceVolumnToLowVoice;
- (void)recoverPreviousVolumn;
- (int)currentVolumn;
- (void)setVolumn:(int)arg1;
- (void)updateUIWithVolumn:(int)arg1;
- (BOOL)showing;
- (void)setShowing:(BOOL)arg1;
- (id /* block */)volumnAdjustCallback;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (void).cxx_destruct;
@end
