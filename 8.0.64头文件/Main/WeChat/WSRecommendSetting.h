@interface WSRecommendSetting : NSObject <PBCoding>
{
    BOOL _hasConfirmVideoDragTips; // +0x8
    BOOL _hasConfirmVideoGoodLookEducateAlert; // +0x9
    BOOL _hasConfirmVideoGoodLookTipEducateToast; // +0xa
    BOOL _hasWowContent; // +0xb
    unsigned int _wowContentUpdateTs; // +0xc
}
+ (void)PBArrayAdd_hasConfirmVideoDragTips;
+ (void)PBArrayAdd_hasConfirmVideoGoodLookEducateAlert;
+ (void)PBArrayAdd_hasConfirmVideoGoodLookTipEducateToast;
+ (void)PBArrayAdd_hasWowContent;
+ (void)PBArrayAdd_wowContentUpdateTs;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)description;
- (BOOL)hasConfirmVideoDragTips;
- (void)setHasConfirmVideoDragTips:(BOOL)arg1;
- (BOOL)hasConfirmVideoGoodLookEducateAlert;
- (void)setHasConfirmVideoGoodLookEducateAlert:(BOOL)arg1;
- (BOOL)hasConfirmVideoGoodLookTipEducateToast;
- (void)setHasConfirmVideoGoodLookTipEducateToast:(BOOL)arg1;
- (BOOL)hasWowContent;
- (void)setHasWowContent:(BOOL)arg1;
- (unsigned int)wowContentUpdateTs;
- (void)setWowContentUpdateTs:(unsigned int)arg1;
@end
