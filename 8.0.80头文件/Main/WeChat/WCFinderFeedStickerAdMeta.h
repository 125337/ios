@interface WCFinderFeedStickerAdMeta : NSObject
{
    BOOL _isShowing; // +0x8
    BOOL _hadRequest; // +0x9
    BOOL _hadShowAdList; // +0xa
    FinderAdsStreamResp * _resp; // +0x10
    unsigned long long _showPosition; // +0x18
    long long _showPlayPercent; // +0x20
    unsigned long long _requestPosition; // +0x28
    unsigned long long _requestCostTime; // +0x30
    NSString * _bypData; // +0x38
}
- (id)initWithAdItem:(id)arg1;
- (id)heatupFeedID;
- (id)resp;
- (void)setResp:(id)arg1;
- (unsigned long long)showPosition;
- (void)setShowPosition:(unsigned long long)arg1;
- (long long)showPlayPercent;
- (void)setShowPlayPercent:(long long)arg1;
- (BOOL)isShowing;
- (void)setIsShowing:(BOOL)arg1;
- (unsigned long long)requestPosition;
- (void)setRequestPosition:(unsigned long long)arg1;
- (unsigned long long)requestCostTime;
- (void)setRequestCostTime:(unsigned long long)arg1;
- (BOOL)hadRequest;
- (void)setHadRequest:(BOOL)arg1;
- (BOOL)hadShowAdList;
- (void)setHadShowAdList:(BOOL)arg1;
- (id)bypData;
- (void)setBypData:(id)arg1;
- (void).cxx_destruct;
@end
