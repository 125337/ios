@interface WCFinderPOIBasicInfoRequestParams : NSObject
{
    BOOL _isPrefetch; // +0x8
    int _commentScene; // +0xc
    int _fromCommentScene; // +0x10
    NSString * _poiId; // +0x18
    NSString * _poiName; // +0x20
    NSString * _poiAddress; // +0x28
    unsigned long long _fromObjectId; // +0x30
}
- (id)poiId;
- (void)setPoiId:(id)arg1;
- (id)poiName;
- (void)setPoiName:(id)arg1;
- (id)poiAddress;
- (void)setPoiAddress:(id)arg1;
- (unsigned long long)fromObjectId;
- (void)setFromObjectId:(unsigned long long)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (int)fromCommentScene;
- (void)setFromCommentScene:(int)arg1;
- (BOOL)isPrefetch;
- (void)setIsPrefetch:(BOOL)arg1;
- (void).cxx_destruct;
@end
