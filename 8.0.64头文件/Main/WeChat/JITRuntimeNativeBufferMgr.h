@interface JITRuntimeNativeBufferMgr : NSObject
{
    unsigned long long _bufferIDSequence; // +0x8
    NSMutableDictionary * _localBufferDic; // +0x10
    NSMutableDictionary * _remoteBufferDic; // +0x18
}
- (id)init;
- (id)createLocalNativeBuffer:(id)arg1;
- (id)popLocalNativeBuffer:(id)arg1;
- (id)getLocalNativeBuffer:(id)arg1;
- (void)addRemoteNativeBuffer:(id)arg1 buffer:(id)arg2 allocType:(long long)arg3;
- (id)getRemoteNativeBuffer:(id)arg1;
- (void)removeRemoteNativeBuffer:(id)arg1;
- (void)getLocalBufferFromXHR:(id)arg1 baseUrl:(id)arg2;
- (id)genBufferID;
- (id)localBufferDic;
- (void)setLocalBufferDic:(id)arg1;
- (id)remoteBufferDic;
- (void)setRemoteBufferDic:(id)arg1;
- (void).cxx_destruct;
@end
