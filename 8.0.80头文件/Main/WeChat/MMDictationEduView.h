@interface MMDictationEduView : UIView
{
    BOOL _hasReported; // +0x8
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (BOOL)hasReported;
- (void)setHasReported:(BOOL)arg1;
@end
