@interface BrandFansMsgSettingsViewModel : NSObject
{
    BOOL _blockSpamMessage; // +0x8
    BOOL _fansMsgRedDotEnable; // +0x9
    BOOL _privateMsgScopeEnable; // +0xa
    BOOL _isOneMsgBeforeReply; // +0xb
    int _bizType; // +0xc
    NSString * _bizuin; // +0x10
    unsigned long long _privateMsgScope; // +0x18
    id /* block */ _onUpdated; // +0x20
}
+ (id)displayTextForScope:(unsigned long long)arg1;
- (id)initWithBizuin:(id)arg1 bizType:(int)arg2;
- (void)dealloc;
- (BOOL)showOneMsgBeforeReply;
- (void)restoreFromCache;
- (void)resetDefaultValue;
- (void)saveToCache;
- (void)notifyUpdated;
- (void)updateFromServer;
- (void)updateBlockSpamMessage:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)updateFansMsgRedDotEnable:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)updatePrivateMsgScope:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)updateIsOneMsgBeforeReply:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)cleanNotifyAndFansMsgRedDot;
- (id)updateSettingsWithItems:(id)arg1 completion:(id /* block */)arg2;
- (id)bizuin;
- (void)setBizuin:(id)arg1;
- (int)bizType;
- (void)setBizType:(int)arg1;
- (BOOL)blockSpamMessage;
- (void)setBlockSpamMessage:(BOOL)arg1;
- (BOOL)fansMsgRedDotEnable;
- (void)setFansMsgRedDotEnable:(BOOL)arg1;
- (BOOL)privateMsgScopeEnable;
- (void)setPrivateMsgScopeEnable:(BOOL)arg1;
- (unsigned long long)privateMsgScope;
- (void)setPrivateMsgScope:(unsigned long long)arg1;
- (BOOL)isOneMsgBeforeReply;
- (void)setIsOneMsgBeforeReply:(BOOL)arg1;
- (id /* block */)onUpdated;
- (void)setOnUpdated:(id /* block */)arg1;
- (void).cxx_destruct;
@end
