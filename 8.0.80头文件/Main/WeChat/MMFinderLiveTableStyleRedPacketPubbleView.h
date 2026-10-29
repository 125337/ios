@interface MMFinderLiveTableStyleRedPacketPubbleView : MMFinderLiveTableStyleCommentPubbleCell <ILinkEventExt>
{
    UIImageView * _iconImageView; // +0x8
    MMFinderLiveLiveRoleSignView * _mysteriousSignView; // +0x10
}
- (BOOL)isUITypeValid;
- (void)layoutUI;
- (void)layoutCommentLabel;
- (void)layoutIconImageView;
- (void)layoutMysteriousSignView;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)mysteriousSignView;
- (void)setMysteriousSignView:(id)arg1;
- (void).cxx_destruct;
@end
