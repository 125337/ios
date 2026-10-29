@interface WCThreadQOSManagerConfig : NSObject <PBCoding>
{
    BOOL _enabled; // +0x8
    int _strategy; // +0xc
    NSMutableArray * _whiteListThreads; // +0x10
    NSMutableArray * _blackListThreads; // +0x18
}
+ (void)PBArrayAdd_enabled;
+ (void)PBArrayAdd_strategy;
+ (void)PBArrayAdd_whiteListThreads;
+ (void)PBArrayAdd_blackListThreads;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (void)updateWithXLabConfig:(id)arg1;
- (BOOL)enabled;
- (void)setEnabled:(BOOL)arg1;
- (int)strategy;
- (void)setStrategy:(int)arg1;
- (id)whiteListThreads;
- (void)setWhiteListThreads:(id)arg1;
- (id)blackListThreads;
- (void)setBlackListThreads:(id)arg1;
- (void).cxx_destruct;
@end

