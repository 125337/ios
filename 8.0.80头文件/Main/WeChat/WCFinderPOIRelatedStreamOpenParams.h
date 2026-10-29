@interface WCFinderPOIRelatedStreamOpenParams : NSObject
{
    BOOL _disableHoldHalfScreen; // +0x8
    BOOL _useHalfScreen; // +0x9
    BOOL _showHalfBgMask; // +0xa
    BOOL _canForward; // +0xb
    int _commentScene; // +0xc
    unsigned int _poiSrcType; // +0x10
    int _entryScene; // +0x14
    int _cardType; // +0x18
    UINavigationController * _navVC; // +0x20
    UIViewController * _fromVC; // +0x28
    NSString * _groupBuyBypassData; // +0x30
    WCFinderPOIParamsModel * _poiParamsModel; // +0x38
}
- (id)initWithPoiParamsModel:(id)arg1 commentScene:(int)arg2 poiSrcType:(unsigned int)arg3 entryScene:(int)arg4 cardType:(int)arg5 navVC:(id)arg6;
- (id)navVC;
- (void)setNavVC:(id)arg1;
- (id)fromVC;
- (void)setFromVC:(id)arg1;
- (BOOL)disableHoldHalfScreen;
- (void)setDisableHoldHalfScreen:(BOOL)arg1;
- (BOOL)useHalfScreen;
- (void)setUseHalfScreen:(BOOL)arg1;
- (BOOL)showHalfBgMask;
- (void)setShowHalfBgMask:(BOOL)arg1;
- (BOOL)canForward;
- (void)setCanForward:(BOOL)arg1;
- (id)groupBuyBypassData;
- (void)setGroupBuyBypassData:(id)arg1;
- (id)poiParamsModel;
- (void)setPoiParamsModel:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (unsigned int)poiSrcType;
- (void)setPoiSrcType:(unsigned int)arg1;
- (int)entryScene;
- (void)setEntryScene:(int)arg1;
- (int)cardType;
- (void)setCardType:(int)arg1;
- (void).cxx_destruct;
@end
