@interface AutoCollectObject : NSObject
{
    NSString * _collectKey; // +0x8
    NSString * _logTrace; // +0x10
}
- (id)initWith:(id)arg1 andLogTrace:(id)arg2;
- (id)collectKey;
- (void)setCollectKey:(id)arg1;
- (id)logTrace;
- (void)setLogTrace:(id)arg1;
- (void).cxx_destruct;
@end

