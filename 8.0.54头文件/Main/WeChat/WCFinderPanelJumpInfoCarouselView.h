@interface WCFinderPanelJumpInfoCarouselView : UIView
{
    int _showPosition; // +0x8
    WCFinderJumpInfo * _jumpInfo; // +0x10
    id <WCFinderPanelJumpInfoCarouselViewDelegate> _delegate; // +0x18
    NSMutableDictionary * _actionDic; // +0x20
    MMWebImageView * _iconImageView; // +0x28
    UILabel * _titleLabel; // +0x30
    UILabel * _subTitleLabel; // +0x38
    WCFinderNetIconTextBtn * _jumpButton; // +0x40
}
- (id)initWithFrame:(CGRect)arg1 showPosition:(int)arg2;
- (id)actionDic;
- (id)titleLabel;
- (id)subTitleLabel;
- (id)jumpButton;
- (id)iconImageView;
- (void)resetUIState;
- (void)jumpButtonClicked;
- (void)updateWithBGMJumpInfo:(id)arg1 contentVM:(id)arg2;
- (void)bindSessionReportFromJumpInfo:(id)arg1 contentVM:(id)arg2;
- (void)layoutAllSubviews;
- (int)showPosition;
- (void)setShowPosition:(int)arg1;
- (id)jumpInfo;
- (void)setJumpInfo:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setActionDic:(id)arg1;
- (void)setIconImageView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setSubTitleLabel:(id)arg1;
- (void)setJumpButton:(id)arg1;
- (void).cxx_destruct;
@end

