@interface WCFinderTLRedCoverBubbleView : UIView <WCFinderJumpInfoViewProtocol>
{
    int _showPosition; // +0x8
    id <WCFinderTLRedCoverBubbleViewDelegate> _delegate; // +0x10
    UIImageView * _redCoverBgImageView; // +0x18
    UIButton * _tipsBtn; // +0x20
    WCFinderJumpInfo * _jumpInfoSource; // +0x28
}
- (id)redCoverBgImageView;
- (id)tipsBtn;
- (id)initWithFrame:(CGRect)arg1;
- (void)setUpView;
- (void)layoutViews;
- (void)onClickBubbleAction;
- (void)updateWithJumpInfo:(id)arg1 showPosition:(int)arg2;
- (id)jumpInfo;
- (int)showPosition;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setRedCoverBgImageView:(id)arg1;
- (void)setTipsBtn:(id)arg1;
- (id)jumpInfoSource;
- (void)setJumpInfoSource:(id)arg1;
- (void)setShowPosition:(int)arg1;
- (void).cxx_destruct;
@end

