@interface MMLiveCDNPlayerIllegalItemInfo : NSObject
{
    NSString * _itemId; // +0x8
    NSString * _url; // +0x10
    long long _currentScene; // +0x18
    long long _lastScene; // +0x20
    long long _commentScene; // +0x28
    NSString * _streamId; // +0x30
    NSString * _itemPtr; // +0x38
}
- (id)initWithItemId:(id)arg1 url:(id)arg2 currentScene:(long long)arg3 lastScene:(long long)arg4 commentScene:(long long)arg5 streamId:(id)arg6 itemPtr:(id)arg7;
- (id)toDictionary;
- (BOOL)isEqual:(id)arg1;
- (id)itemId;
- (void)setItemId:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (long long)currentScene;
- (void)setCurrentScene:(long long)arg1;
- (long long)lastScene;
- (void)setLastScene:(long long)arg1;
- (long long)commentScene;
- (void)setCommentScene:(long long)arg1;
- (id)streamId;
- (void)setStreamId:(id)arg1;
- (id)itemPtr;
- (void)setItemPtr:(id)arg1;
- (void).cxx_destruct;
@end
