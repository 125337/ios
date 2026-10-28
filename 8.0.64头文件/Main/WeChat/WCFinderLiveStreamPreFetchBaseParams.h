@interface WCFinderLiveStreamPreFetchBaseParams : NSObject
{
    int _fromScene; // +0x8
    int _commentScene; // +0xc
    WCFinderLiveTabInfo * _tabInfo; // +0x10
    unsigned long long _pullType; // +0x18
    NSData * _lastBuffer; // +0x20
    unsigned long long _relatedObjectId; // +0x28
    NSString * _fromSceneStr; // +0x30
    NSString * _byPassInfo; // +0x38
    NSMutableArray * _unreadDataItems; // +0x40
}
- (id)prefetchCacheHashKey;
- (BOOL)isRequestEqaulToCache:(id)arg1;
- (id)tabInfo;
- (void)setTabInfo:(id)arg1;
- (unsigned long long)pullType;
- (void)setPullType:(unsigned long long)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (unsigned long long)relatedObjectId;
- (void)setRelatedObjectId:(unsigned long long)arg1;
- (int)fromScene;
- (void)setFromScene:(int)arg1;
- (id)fromSceneStr;
- (void)setFromSceneStr:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (id)byPassInfo;
- (void)setByPassInfo:(id)arg1;
- (id)unreadDataItems;
- (void)setUnreadDataItems:(id)arg1;
- (void).cxx_destruct;
@end
