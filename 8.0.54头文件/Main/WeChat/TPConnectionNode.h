@interface TPConnectionNode : NSObject
{
    void * _nativeConnNode; // +0x8
}
- (id)init;
- (void)dealloc;
- (BOOL)addAction:(long long)arg1;
- (void)removeAction:(long long)arg1;
- (BOOL)setLongActionConfig:(long long)arg1 cfgType:(long long)arg2 cfgValue:(long long)arg3;
- (void *)getNativeConnNode;
- (void *)nativeConnNode;
- (void)setNativeConnNode:(void *)arg1;
@end

