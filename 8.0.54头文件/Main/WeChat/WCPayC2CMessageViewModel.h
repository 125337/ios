@interface WCPayC2CMessageViewModel : WCPayBaseMessageViewModel
{
    BOOL _hasGetFullCoverInfoDetail; // +0x70
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)cellViewClassName;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (id)sourceTitle;
- (id)sourceTag;
- (id)titleText;
- (id)descText;
- (id)redSkinLogoUrl;
- (id)redSkinLogoMd5;
- (double)iconSize;
- (id)iconName;
- (unsigned long long)bubbleType;
- (id)iconUrl;
- (id)additionalAccessibilityDescription;
- (id)redEnvelopeShowResource;
- (id)bubbleWidgetUrl;
- (id)bubbleWidgetMd5;
- (BOOL)isExclusiveHongBaoMsg;
- (id)getExclusiveHbNickname;
- (BOOL)shouldHideBubbleDescLabel;
- (BOOL)hasReferImage;
- (id)getReferImageViewWithSize:(CGSize)arg1;
- (id)getReferImage;
- (CGSize)measure:(CGSize)arg1;
- (id)bubblePagUrl;
- (id)pagWidgateMd5;
- (id)bubbleAtmosphereUrl;
- (void)updateCoverInfoFullContent;
- (BOOL)hasGetFullCoverInfoDetail;
- (void)setHasGetFullCoverInfoDetail:(BOOL)arg1;
@end

