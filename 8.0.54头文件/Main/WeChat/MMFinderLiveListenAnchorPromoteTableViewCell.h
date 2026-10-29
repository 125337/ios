@interface MMFinderLiveListenAnchorPromoteTableViewCell : MMFinderLiveAnchorPromoteTableViewCell
{
    MMWebImageView * _titleImgView; // +0x40
    MMUILabel * _titleLabel; // +0x48
    MMUILabel * _descLabel; // +0x50
    MMFinderLiveLisTenAnchorPromoteInfo * _listenPromoteInfo; // +0x58
}
+ (id)identifier;
- (BOOL)enableMenuAction;
- (void)layoutUI;
- (void)updatePromoteInfo:(id)arg1;
- (id)promoteInfo;
- (void)layoutTitleImgView;
- (void)layoutTitleLabel;
- (void)layoutDescLabel;
- (void)updateLabelsOriginY;
- (id)titleImgView;
- (void)setTitleImgView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)listenPromoteInfo;
- (void)setListenPromoteInfo:(id)arg1;
- (void).cxx_destruct;
@end

