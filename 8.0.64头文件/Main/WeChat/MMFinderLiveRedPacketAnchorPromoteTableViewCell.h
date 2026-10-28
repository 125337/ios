@interface MMFinderLiveRedPacketAnchorPromoteTableViewCell : MMFinderLiveAnchorPromoteTableViewCell
{
    MMWebImageView * _redPacketImageView; // +0x40
    MMUILabel * _titleLabel; // +0x48
    MMUILabel * _descriptionLabel; // +0x50
    MMFinderLiveRedPacketAnchorPromoteInfo * _redPacketPromoteInfo; // +0x58
}
+ (id)identifier;
- (void)layoutUI;
- (void)updatePromoteInfo:(id)arg1;
- (id)promoteInfo;
- (BOOL)enableMenuAction;
- (void)layoutRedPacketImgView;
- (void)layoutTitleLabel;
- (void)layoutDescriptionLabel;
- (void)updateLabelsOriginY;
- (id)redPacketImageView;
- (void)setRedPacketImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descriptionLabel;
- (void)setDescriptionLabel:(id)arg1;
- (id)redPacketPromoteInfo;
- (void)setRedPacketPromoteInfo:(id)arg1;
- (void).cxx_destruct;
@end
