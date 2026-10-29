@interface WCFinderLiveKtvGetPlayMemberResult : NSObject
{
    unsigned int _continueFlag; // +0x8
    NSMutableArray * _onlineUserStateItems; // +0x10
    NSData * _lastBuffer; // +0x18
}
- (id)onlineUserStateItems;
- (void)setOnlineUserStateItems:(id)arg1;
- (unsigned int)continueFlag;
- (void)setContinueFlag:(unsigned int)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (void).cxx_destruct;
@end

