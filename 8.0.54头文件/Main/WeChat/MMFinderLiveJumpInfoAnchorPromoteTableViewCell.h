@interface MMFinderLiveJumpInfoAnchorPromoteTableViewCell : MMFinderLiveAnchorPromoteTableViewCell
{
    MMWebImageView * _titleImgView; // +0x40
    MMUILabel * _titleTagLabel; // +0x48
    MMUILabel * _titleLabel; // +0x50
    MMUILabel * _descLabel; // +0x58
    MMFinderLiveJumpInfoAnchorPromoteInfo * _jumpInfoPromoteInfo; // +0x60
}
+ (id)identifier;
- (BOOL)enableMenuAction;
- (void)layoutUI;
- (void)updatePromoteInfo:(id)arg1;
- (id)promoteInfo;
- (void)layoutTitleImgView;
- (void)layoutTitleTagLabel;
- (void)layoutTitleLabel;
- (void)layoutDescLabel;
- (void)updateLabelsOriginY;
- (id)titleImgView;
- (void)setTitleImgView:(id)arg1;
- (id)titleTagLabel;
- (void)setTitleTagLabel:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)jumpInfoPromoteInfo;
- (void)setJumpInfoPromoteInfo:(id)arg1;
- (void).cxx_destruct;
@end

