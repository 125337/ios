@interface WCFinderCommentControversyTipsView : UIView <WCFinderJumpInfoViewProtocol>
{
    int _showPosition; // +0x8
    id <WCFinderCommentControversyTipsViewDelegate> _delegate; // +0x10
    WCFinderJumpInfo * _jumpInfo; // +0x18
    UIView * _containerView; // +0x20
    UIImageView * _iconImageView; // +0x28
    UILabel * _titleLabel; // +0x30
    UIImageView * _arrowImageView; // +0x38
    UITapGestureRecognizer * _tapGesture; // +0x40
    unsigned long long _feedExposeTimestamp; // +0x48
    unsigned long long _viewExposeTimestamp; // +0x50
}
+ (double)viewHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)setUpUI;
- (void)layoutSubviews;
- (void)tapAction:(id)arg1;
- (void)doUpdateWithJumpInfo:(id)arg1;
- (void)updateWithJumpInfo:(id)arg1 showPosition:(int)arg2;
- (void)updateWithJumpInfo:(id)arg1 style:(id)arg2;
- (void)startExposeAction;
- (void)setFeedExposeTime:(unsigned long long)arg1;
- (unsigned long long)feedExposeTime;
- (unsigned long long)viewExposeTime;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)jumpInfo;
- (void)setJumpInfo:(id)arg1;
- (int)showPosition;
- (void)setShowPosition:(int)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)tapGesture;
- (void)setTapGesture:(id)arg1;
- (unsigned long long)feedExposeTimestamp;
- (void)setFeedExposeTimestamp:(unsigned long long)arg1;
- (unsigned long long)viewExposeTimestamp;
- (void)setViewExposeTimestamp:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
