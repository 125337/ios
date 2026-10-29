@interface WWKFLocationRequestView : MMUIView
{
    CContact * _contact; // +0x8
    id <WWKFLocationRequestViewDelegate> _delegate; // +0x10
    MMHeadImageView * _headView; // +0x18
    MMUILabel * _headerTitleLabel; // +0x20
    MMUILabel * _contentTitleLabel; // +0x28
    MMUILabel * _contentSubTitleLabel; // +0x30
    UIButton * _rejectButton; // +0x38
    UIButton * _approveButton; // +0x40
    MMUIButton * _learnMoreButton; // +0x48
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initView;
- (void)setupLayout;
- (void)updateView;
- (void)setContact:(id)arg1;
- (void)layoutSubviews;
- (void)sizeToFit;
- (void)onReject;
- (void)onApprove;
- (void)onLearnMore;
- (id)contact;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)headView;
- (void)setHeadView:(id)arg1;
- (id)headerTitleLabel;
- (void)setHeaderTitleLabel:(id)arg1;
- (id)contentTitleLabel;
- (void)setContentTitleLabel:(id)arg1;
- (id)contentSubTitleLabel;
- (void)setContentSubTitleLabel:(id)arg1;
- (id)rejectButton;
- (void)setRejectButton:(id)arg1;
- (id)approveButton;
- (void)setApproveButton:(id)arg1;
- (id)learnMoreButton;
- (void)setLearnMoreButton:(id)arg1;
- (void).cxx_destruct;
@end
