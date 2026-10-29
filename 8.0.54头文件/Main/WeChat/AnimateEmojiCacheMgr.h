@interface AnimateEmojiCacheMgr : MMUserService <NSCacheDelegate, MMServiceProtocol>
{
    unsigned int _realCacheCout; // +0x8
    unsigned int _realCacheFrameCount; // +0xc
    NSString * _currentRoomID; // +0x10
    unsigned long long _lastMsgTime; // +0x18
    unsigned long long _lastLocalID; // +0x20
    NSCache * _cache; // +0x28
}
- (void)onServiceInit;
- (void)onServiceMemoryWarning;
- (id)cache;
- (void)onStartAnimateEmojiCheckPoint:(id)arg1;
- (void)onEndAnimateEmojiCheckPoint:(id)arg1;
- (void)onUpdateAnimateEmojiCheckPoint:(id)arg1 contact:(id)arg2 fromHistory:(BOOL)arg3;
- (BOOL)shouldAutoPlayAnimateEmoji:(id)arg1 roomID:(id)arg2;
- (id)getFramesForAnimateEmojiNode:(id)arg1;
- (id)getAnimatedImage:(id)arg1;
- (id)animatedImageOfDecodedFrames:(id)arg1;
- (void)onEnterRoom:(id)arg1;
- (void)onEixtRoom:(id)arg1;
- (void)onAddMsg:(id)arg1 roomID:(id)arg2;
- (void)onAddHistoryLastMsg:(id)arg1 roomID:(id)arg2;
- (BOOL)isSameRoomID:(id)arg1;
- (void)recordCacheChange:(id)arg1 incr:(BOOL)arg2;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (id)currentRoomID;
- (void)setCurrentRoomID:(id)arg1;
- (unsigned long long)lastMsgTime;
- (void)setLastMsgTime:(unsigned long long)arg1;
- (unsigned long long)lastLocalID;
- (void)setLastLocalID:(unsigned long long)arg1;
- (void)setCache:(id)arg1;
- (unsigned int)realCacheCout;
- (void)setRealCacheCout:(unsigned int)arg1;
- (unsigned int)realCacheFrameCount;
- (void)setRealCacheFrameCount:(unsigned int)arg1;
- (void).cxx_destruct;
@end

