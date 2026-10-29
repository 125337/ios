@interface MMFinderLiveArticleAnchorPromoteTableViewCell : MMFinderLiveAnchorPromoteTableViewCell
{
    MMWebImageView * _titleImgView; // +0x40
    MMUILabel * _titleLabel; // +0x48
    MMUILabel * _anchorLabel; // +0x50
    MMFinderLiveMpArticleAnchorPromoteInfo * _articlePromoteInfo; // +0x58
}
+ (id)identifier;
- (void)layoutUI;
- (void)updatePromoteInfo:(id)arg1;
- (id)promoteInfo;
- (BOOL)enableMenuAction;
- (void)layoutTitleImgView;
- (void)layoutTitleLabel;
- (void)layoutAnchorLabel;
- (void)updateLabelsOriginY;
- (id)titleImgView;
- (void)setTitleImgView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)anchorLabel;
- (void)setAnchorLabel:(id)arg1;
- (id)articlePromoteInfo;
- (void)setArticlePromoteInfo:(id)arg1;
- (void).cxx_destruct;
@end

