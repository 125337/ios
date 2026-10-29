@interface WCCustomDumpMgr : NSObject
+ (id)shareInstance;
+ (BOOL)dumpTypeCanBeCustomDump:(unsigned long long)arg1;
- (id)init;
- (void)dealloc;
- (void)syncDump:(id)arg1;
- (void)asyncDump:(id)arg1;
- (void)dumpFlutter:(id)arg1;
- (void)onPreconditionFailure:(id)arg1;
@end
