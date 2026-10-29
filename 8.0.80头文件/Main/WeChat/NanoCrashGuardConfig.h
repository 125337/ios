@interface NanoCrashGuardConfig : NSObject
{
    NSMutableArray * _guardVersions; // +0x8
    BOOL _exception; // +0x10
    NSString * _path; // +0x18
}
+ (void)checkABTest:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (void)addGuardVersionFrom:(id)arg1 to:(id)arg2;
- (void)clearGuardVersion;
- (void)setException:(BOOL)arg1;
- (void)synchronize;
- (BOOL)isEnableGuard;
- (void).cxx_destruct;
@end
