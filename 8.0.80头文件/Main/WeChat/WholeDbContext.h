@interface WholeDbContext : NSObject
{
    NSString * _tmpDbPath; // +0x8
    NSString * _tmpMediaRoot; // +0x10
    NSString * _srcMd5Username; // +0x18
    WCTDatabase * _wholeDbDatabase; // +0x20
    WXGRoamPackageHandler * _packageHandler; // +0x28
}
- (id)tmpDbPath;
- (void)setTmpDbPath:(id)arg1;
- (id)tmpMediaRoot;
- (void)setTmpMediaRoot:(id)arg1;
- (id)srcMd5Username;
- (void)setSrcMd5Username:(id)arg1;
- (id)wholeDbDatabase;
- (void)setWholeDbDatabase:(id)arg1;
- (id)packageHandler;
- (void)setPackageHandler:(id)arg1;
- (void).cxx_destruct;
@end
