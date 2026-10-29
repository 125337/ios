@interface GCInteractView : UIView
{
    UILabel * _titleLabel; // +0x8
    MMHeadImageView * _headView; // +0x10
    GCInteractFourAvatarView * _avatarGroupView; // +0x18
    UILabel * _countLabel; // +0x20
    UILabel * _actionDescLabel; // +0x28
    UILabel * _timeLabel; // +0x30
    UILabel * _actionTextLabel; // +0x38
    UILabel * _quotoLabel; // +0x40
    UIView * _qutoLineView; // +0x48
    MMWebImageView * _rightImgView; // +0x50
    UIButton * _rightFollowBtn; // +0x58
    GCInteractBtmActioniew * _btmActionView; // +0x60
    GCInteractCellModel * _bindCellModel; // +0x68
    RichTextView * _actionRichTextView; // +0x70
    RichTextView * _quotoRichTextView; // +0x78
    UILabel * _wechatNickLabel; // +0x80
    UILabel * _markLabel; // +0x88
}
- (id)initWithFrame:(CGRect)arg1;
- (void)handleHeadTap;
- (void)didClickFollowBtn;
- (void)handleFollow;
- (void)didClickVoteBtn;
- (void)handleVote;
- (void)didClickReplyBtn;
- (void)didClickJumpAllBtn;
- (id)removeEmPrefix:(id)arg1;
- (void)configureWithCellModel:(id)arg1;
- (id)colorFromColorStr:(id)arg1;
- (void)configureTitleRightLabel:(id)arg1 insets:(UIEdgeInsets)arg2 withSpace:(double)arg3 subviewMaxWidth:(double)arg4 maxRight:(double)arg5 fromLeft:(double)arg6;
- (void)configureBtmActionView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)headView;
- (void)setHeadView:(id)arg1;
- (id)avatarGroupView;
- (void)setAvatarGroupView:(id)arg1;
- (id)countLabel;
- (void)setCountLabel:(id)arg1;
- (id)actionDescLabel;
- (void)setActionDescLabel:(id)arg1;
- (id)timeLabel;
- (void)setTimeLabel:(id)arg1;
- (id)actionTextLabel;
- (void)setActionTextLabel:(id)arg1;
- (id)quotoLabel;
- (void)setQuotoLabel:(id)arg1;
- (id)qutoLineView;
- (void)setQutoLineView:(id)arg1;
- (id)rightImgView;
- (void)setRightImgView:(id)arg1;
- (id)rightFollowBtn;
- (void)setRightFollowBtn:(id)arg1;
- (id)btmActionView;
- (void)setBtmActionView:(id)arg1;
- (id)bindCellModel;
- (void)setBindCellModel:(id)arg1;
- (id)actionRichTextView;
- (void)setActionRichTextView:(id)arg1;
- (id)quotoRichTextView;
- (void)setQuotoRichTextView:(id)arg1;
- (id)wechatNickLabel;
- (void)setWechatNickLabel:(id)arg1;
- (id)markLabel;
- (void)setMarkLabel:(id)arg1;
- (void).cxx_destruct;
@end
