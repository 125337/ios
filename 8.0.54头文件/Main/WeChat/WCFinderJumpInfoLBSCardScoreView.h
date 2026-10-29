@interface WCFinderJumpInfoLBSCardScoreView : UIView
{
    UIView * _backView; // +0x8
    NSArray * _scoreIcons; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (void)updateScore:(double)arg1;
- (id)backView;
- (void)setBackView:(id)arg1;
- (id)scoreIcons;
- (void)setScoreIcons:(id)arg1;
- (void).cxx_destruct;
@end

