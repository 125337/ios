@interface WCCardMsgTips : MMObject <PBCoding>
{
    unsigned int _newCount; // +0x8
    unsigned int _lastUpdateTime; // +0xc
    NSString * _nsTipWording; // +0x10
    NSString * _nsTipIconUrl; // +0x18
}
+ (void)PBArrayAdd_newCount;
+ (void)PBArrayAdd_lastUpdateTime;
+ (void)PBArrayAdd_nsTipWording;
+ (void)PBArrayAdd_nsTipIconUrl;
+ (void)initialize;
- (id)getPBPropertyTable;
- (void)saveCardMsgTipsToCache;
- (void)loadCardMsgTipsFromCache;
- (id)pathForCardMsgTips;
- (unsigned int)newCount;
- (void)setNewCount:(unsigned int)arg1;
- (unsigned int)lastUpdateTime;
- (void)setLastUpdateTime:(unsigned int)arg1;
- (id)nsTipWording;
- (void)setNsTipWording:(id)arg1;
- (id)nsTipIconUrl;
- (void)setNsTipIconUrl:(id)arg1;
- (void).cxx_destruct;
@end

