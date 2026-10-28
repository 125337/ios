@interface _TtC6WeChat25AudioFileBehaviorReporter : NSObject
{
     source; // +0x8
     fileExt; // +0x10
     fileMD5; // +0x20
     msgSvrID; // +0x30
     chatName; // +0x38
     action; // +0x48
}
- (id)initWithSource:(unsigned long long)arg1 fileExt:(id)arg2 fileMD5:(id)arg3 msgSvrID:(long long)arg4 chatName:(id)arg5;
- (void)reportWithAction:(long long)arg1;
- (id)init;
- (void).cxx_destruct;
@end
