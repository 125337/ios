@interface BrandFansMsgSettingsViewModel : NSObject
{
    BOOL _blockSpamMessage; // +0x8
    BOOL _fansMsgRedDotEnable; // +0x9
    NSString * _bizuin; // +0x10
    id /* block */ _onUpdated; // +0x18
}
- (id)initWithBizuin:(id)arg1;
- (void)dealloc;
- (void)restoreFromCache;
- (void)resetDefaultValue;
- (void)saveToCache;
- (void)updateFromServer;
- (void)updateBlockSpamMessage:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)updateFansMsgRedDotEnable:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)cleanNotifyAndFansMsgRedDot;
- (id)updateSettingsWithItems:(id)arg1 completion:(id /* block */)arg2;
- (id)bizuin;
- (void)setBizuin:(id)arg1;
- (BOOL)blockSpamMessage;
- (void)setBlockSpamMessage:(BOOL)arg1;
- (BOOL)fansMsgRedDotEnable;
- (void)setFansMsgRedDotEnable:(BOOL)arg1;
- (id /* block */)onUpdated;
- (void)setOnUpdated:(id /* block */)arg1;
- (void).cxx_destruct;
@end
