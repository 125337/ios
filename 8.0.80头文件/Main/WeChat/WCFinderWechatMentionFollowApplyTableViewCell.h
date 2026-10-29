@interface WCFinderWechatMentionFollowApplyTableViewCell : UITableViewCell <WCFinderWechatMentionCellViewModelDelegate>
{
    id <WCFinderWechatMentionFollowApplyTableViewCellDelegate> _delegate; // +0x8
    WCFinderHeadImageView * _headImageView; // +0x10
    RichTextView * _titleView; // +0x18
    UILabel * _timestampLabel; // +0x20
    UIImageView * _interactImageView; // +0x28
    UIView * _lineView; // +0x30
    NSLayoutConstraint * _titleWidthConstraint; // +0x38
    WCFinderWechatMentionCellViewModel * _viewModel; // +0x40
    UIView * _multiHeadImageView; // +0x48
    WCFinderHeadImageView * _frontHeadImageView; // +0x50
    WCFinderHeadImageView * _backHeadImageView; // +0x58
}
+ (double)calculateCellHeightWithViewModel:(id)arg1 width:(double)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)setupUI;
- (void)setupMultiImageView;
- (void)setupViewLayout;
- (void)updateNotifyCenterCellWithViewModel:(id)arg1 width:(double)arg2;
- (void)layoutUIWithViewModel:(id)arg1 width:(double)arg2;
- (void)onWechatMentionCellViewModelCellHeightChanged:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)titleView;
- (void)setTitleView:(id)arg1;
- (id)timestampLabel;
- (void)setTimestampLabel:(id)arg1;
- (id)interactImageView;
- (void)setInteractImageView:(id)arg1;
- (id)lineView;
- (void)setLineView:(id)arg1;
- (id)titleWidthConstraint;
- (void)setTitleWidthConstraint:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)multiHeadImageView;
- (void)setMultiHeadImageView:(id)arg1;
- (id)frontHeadImageView;
- (void)setFrontHeadImageView:(id)arg1;
- (id)backHeadImageView;
- (void)setBackHeadImageView:(id)arg1;
- (void).cxx_destruct;
@end
