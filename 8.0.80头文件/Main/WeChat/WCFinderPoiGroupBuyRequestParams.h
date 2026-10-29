@interface WCFinderPoiGroupBuyRequestParams : NSObject
{
    int _commentScene; // +0x8
    unsigned long long _groupBuyTab; // +0x10
    NSString * _poiId; // +0x18
    NSString * _jumpInfoToGroupbuyByPass; // +0x20
    NSString * _lastBuffer; // +0x28
}
- (unsigned long long)groupBuyTab;
- (void)setGroupBuyTab:(unsigned long long)arg1;
- (id)poiId;
- (void)setPoiId:(id)arg1;
- (id)jumpInfoToGroupbuyByPass;
- (void)setJumpInfoToGroupbuyByPass:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (void).cxx_destruct;
@end
