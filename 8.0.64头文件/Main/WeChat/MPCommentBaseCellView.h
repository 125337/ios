@interface MPCommentBaseCellView : UITableViewCell
{
    MMWebImageView * m_headImageView; // +0x8
    MMUILabel * m_nickNameLabel; // +0x10
    MMUILabel * m_tipsLabel; // +0x18
    MMUIButton * m_likeButton; // +0x20
    RichTextView * m_contentLabel; // +0x28
    MMUIButton * m_deleteBtn; // +0x30
    MMUIButton * m_replyBtn; // +0x38
    UIView * m_dividerView; // +0x40
    MPCommentBaseCellViewModel * _viewModel; // +0x48
    id <MPCommentViewCellDelegate> _viewDelegate; // +0x50
}
- (id)initWithViewModel:(id)arg1;
- (void)updateWithViewModel:(id)arg1;
- (void)initSubViews;
- (void)initHeadImageView;
- (void)initNicknameLabel;
- (void)initContentLabel;
- (void)initDeleteBtn;
- (void)initLikeBtn;
- (void)initTipsLabel;
- (void)initDividerView;
- (void)initReplyBtn;
- (void)layoutButtons;
- (void)onClickDeleteBtn;
- (void)onClickReplyBtn;
- (void)onClickLikeBtn;
- (void)updateLikeBtn;
- (id)viewModel;
- (id)viewDelegate;
- (void)setViewDelegate:(id)arg1;
- (void).cxx_destruct;
@end
