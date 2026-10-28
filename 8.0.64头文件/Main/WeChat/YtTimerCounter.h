@interface YtTimerCounter : NSObject
{
    unsigned long long elaspeTimeMs; // +0x8
    unsigned long long targetTimeoutMs; // +0x10
    BOOL needTimer; // +0x18
    NSString * name; // +0x20
    BOOL needShowTimer; // +0x28
}
- (id)initWith:(unsigned long long)arg1 withName:(id)arg2 withTips:(BOOL)arg3;
- (void)start;
- (void)reset;
- (BOOL)checkTimeout;
- (void)cancel;
- (BOOL)isWorking;
- (void).cxx_destruct;
@end
