@interface WCFinderPOIRelatedStreamOpenParams : NSObject
{
    BOOL _disableHoldHalfScreen; // +0x8
    BOOL _useHalfScreen; // +0x9
    BOOL _canForward; // +0xa
    int _commentScene; // +0xc
    unsigned int _poiSrcType; // +0x10
    UINavigationController * _navVC; // +0x18
    UIViewController * _fromVC; // +0x20
    NSString * _groupBuyBypassData; // +0x28
    WCFinderPOIParamsModel * _poiParamsModel; // +0x30
    unsigned long long _entryScene; // +0x38
    unsigned long long _cardType; // +0x40
}
- (id)initWithPoiParamsModel:(id)arg1 commentScene:(int)arg2 poiSrcType:(unsigned int)arg3 entryScene:(unsigned long long)arg4 cardType:(unsigned long long)arg5 navVC:(id)arg6;
- (id)navVC;
- (void)setNavVC:(id)arg1;
- (id)fromVC;
- (void)setFromVC:(id)arg1;
- (BOOL)disableHoldHalfScreen;
- (void)setDisableHoldHalfScreen:(BOOL)arg1;
- (BOOL)useHalfScreen;
- (void)setUseHalfScreen:(BOOL)arg1;
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
- (unsigned long long)entryScene;
- (void)setEntryScene:(unsigned long long)arg1;
- (unsigned long long)cardType;
- (void)setCardType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

