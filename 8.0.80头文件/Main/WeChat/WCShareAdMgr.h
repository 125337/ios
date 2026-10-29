@interface WCShareAdMgr : MMUserService <MMServiceProtocol>
{
    NSMutableDictionary * _adInfoDict; // +0x8
}
- (void)onServiceInit;
- (id)updateMagicAdInfo:(id)arg1;
- (id)getMagicAdInfo:(id)arg1;
- (void)resetMagicAdInfo;
- (id)adInfoDict;
- (void)setAdInfoDict:(id)arg1;
- (void).cxx_destruct;
@end
