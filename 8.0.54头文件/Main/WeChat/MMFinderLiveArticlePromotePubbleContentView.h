@interface MMFinderLiveArticlePromotePubbleContentView : MMFinderLivePromotePubbleContentView
{
    MMWebImageView * _titleImgView; // +0x8
    MMUILabel * _titleLabel; // +0x10
    MMUILabel * _anchorLabel; // +0x18
    FinderLivePromoteInfoListMpArticleInfo * _articleInfo; // +0x20
}
- (void)convertPromoteMsgInfo:(id)arg1;
- (void)refreshData;
- (void)handleSingleTapGesture:(id)arg1;
- (void)onTapAction;
- (BOOL)isCurrentPromoteItem:(id)arg1;
- (void)updatePromoteItem:(id)arg1;
- (void)updateFromSyncPromoteResp:(id)arg1;
- (void)updatepromoteBuffer:(id)arg1;
- (id)getCurrentPromoteBuffer;
- (void)onShowed;
- (void)onClosed;
- (void)layoutUI;
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
- (id)articleInfo;
- (void)setArticleInfo:(id)arg1;
- (void).cxx_destruct;
@end

