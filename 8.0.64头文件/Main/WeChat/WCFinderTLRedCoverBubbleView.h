@interface WCFinderTLRedCoverBubbleView : WCFinderJumpInfoView
{
    UIImageView * _redCoverBgImageView; // +0x8
    UIButton * _tipsBtn; // +0x10
    WCFinderJumpInfo * _jumpInfoSource; // +0x18
}
- (id)redCoverBgImageView;
- (id)tipsBtn;
- (id)initWithFrame:(CGRect)arg1;
- (void)setUpView;
- (void)layoutViews;
- (void)onClickBubbleAction;
- (void)updateWithJumpInfo:(id)arg1 showPosition:(int)arg2;
- (void)setRedCoverBgImageView:(id)arg1;
- (void)setTipsBtn:(id)arg1;
- (id)jumpInfoSource;
- (void)setJumpInfoSource:(id)arg1;
- (void).cxx_destruct;
@end
