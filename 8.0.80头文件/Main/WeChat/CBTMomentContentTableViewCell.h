@interface CBTMomentContentTableViewCell : CBTMomentBaseTableViewCell
{
    UIView * _customContentView; // +0x8
    MMHeadImageView * _headView; // +0x10
    MMUILabel * _nameLabel; // +0x18
    MMUILabel * _contentLabel; // +0x20
    UIView * _mediaContentView; // +0x28
    NSMutableArray * _mediaImageViewArr; // +0x30
    MMUILabel * _articleLabel; // +0x38
    MMWebImageView * _articleImageView; // +0x40
    UILabel * _timeLabel; // +0x48
    MMUIButton * _configPrivateBtn; // +0x50
    MMUIButton * _likeBtn; // +0x58
    MMUIButton * _uninterestedBtn; // +0x60
    MMUIButton * _commentBtn; // +0x68
    UIView * _likeListTopSeparator; // +0x70
    MMUILabel * _likeUserListLabel; // +0x78
    UIView * _commentViewListTopSeparator; // +0x80
    NSMutableArray * _commentViewList; // +0x88
}
- (void)prepareForReuse;
- (id)momentModel;
- (void)makeCellWithModel:(id)arg1 cellWidth:(double)arg2 indexPath:(id)arg3;
- (void)layoutCustomContentView;
- (void)layoutHeadView;
- (void)layoutNameLabel;
- (void)layoutContentLabel;
- (void)layoutMediaContentViewWithCellWidth:(double)arg1;
- (void)layoutMultiImageWithCellWidth:(double)arg1;
- (void)layoutForwardArticle;
- (void)layoutSingleImage;
- (void)layoutCommentBtn;
- (void)layoutConfigPrivateBtn;
- (void)layoutTimeLabel;
- (void)layoutUninterestedBtn;
- (void)layoutLikeBtn;
- (void)layoutLikeUserListWithCellWidth:(double)arg1;
- (void)reLayoutCommentViewList;
- (void)likeBtnClicked;
- (void)uninterestedBtnClicked;
- (void)onCommentBtnTapped;
- (void)onImageTapped:(id)arg1;
- (void)onForwardArticleTapped:(id)arg1;
- (void)handleForwardArticleTap:(id)arg1;
- (void)onConfigPrivateBtnTapped;
- (void)likeBtnUpdateImage;
- (void)uninterestedBtnUpdateImage;
- (void)setupImageWithData:(id)arg1 imageView:(id)arg2;
- (id)customContentView;
- (void)setCustomContentView:(id)arg1;
- (id)headView;
- (void)setHeadView:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)contentLabel;
- (void)setContentLabel:(id)arg1;
- (id)mediaContentView;
- (void)setMediaContentView:(id)arg1;
- (id)mediaImageViewArr;
- (void)setMediaImageViewArr:(id)arg1;
- (id)articleLabel;
- (void)setArticleLabel:(id)arg1;
- (id)articleImageView;
- (void)setArticleImageView:(id)arg1;
- (id)timeLabel;
- (void)setTimeLabel:(id)arg1;
- (id)configPrivateBtn;
- (void)setConfigPrivateBtn:(id)arg1;
- (id)likeBtn;
- (void)setLikeBtn:(id)arg1;
- (id)uninterestedBtn;
- (void)setUninterestedBtn:(id)arg1;
- (id)commentBtn;
- (void)setCommentBtn:(id)arg1;
- (id)likeListTopSeparator;
- (void)setLikeListTopSeparator:(id)arg1;
- (id)likeUserListLabel;
- (void)setLikeUserListLabel:(id)arg1;
- (id)commentViewListTopSeparator;
- (void)setCommentViewListTopSeparator:(id)arg1;
- (id)commentViewList;
- (void)setCommentViewList:(id)arg1;
- (void).cxx_destruct;
@end
