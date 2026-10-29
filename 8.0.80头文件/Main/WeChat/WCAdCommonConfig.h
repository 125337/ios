@interface WCAdCommonConfig : NSObject <NSCoding>
{
    BOOL _forbidAutoPlay; // +0x8
    BOOL _hideFirstBossComment; // +0x9
    BOOL _showPersonalizedInfoInFeedback; // +0xa
    BOOL _hideLikedAdsInFeedback; // +0xb
    BOOL _showReasonToastInFeedback; // +0xc
    BOOL _hideGameGiftTag; // +0xd
    BOOL _hideConsultBar; // +0xe
    BOOL _hideAdChainStrengthenLabel; // +0xf
    int _basicRemWidth; // +0x10
    int _basicRootFontSize; // +0x14
    int _finderLiveStreamDisplayType; // +0x18
}
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)modelCustomTransformFromDictionary:(id)arg1 forConfigTag:(id)arg2;
- (BOOL)forbidAutoPlay;
- (void)setForbidAutoPlay:(BOOL)arg1;
- (int)basicRemWidth;
- (void)setBasicRemWidth:(int)arg1;
- (int)basicRootFontSize;
- (void)setBasicRootFontSize:(int)arg1;
- (BOOL)hideFirstBossComment;
- (void)setHideFirstBossComment:(BOOL)arg1;
- (int)finderLiveStreamDisplayType;
- (void)setFinderLiveStreamDisplayType:(int)arg1;
- (BOOL)showPersonalizedInfoInFeedback;
- (void)setShowPersonalizedInfoInFeedback:(BOOL)arg1;
- (BOOL)hideLikedAdsInFeedback;
- (void)setHideLikedAdsInFeedback:(BOOL)arg1;
- (BOOL)showReasonToastInFeedback;
- (void)setShowReasonToastInFeedback:(BOOL)arg1;
- (BOOL)hideGameGiftTag;
- (void)setHideGameGiftTag:(BOOL)arg1;
- (BOOL)hideConsultBar;
- (void)setHideConsultBar:(BOOL)arg1;
- (BOOL)hideAdChainStrengthenLabel;
- (void)setHideAdChainStrengthenLabel:(BOOL)arg1;
@end
