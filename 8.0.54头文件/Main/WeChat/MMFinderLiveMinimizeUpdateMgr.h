@interface MMFinderLiveMinimizeUpdateMgr : MMUserService <MMServiceProtocol>
{
    MemoryMappedKV * _mappedKV; // +0x8
}
- (void)tryUpdateLocalMinimizeLiveInfo:(id)arg1 reportScene:(long long)arg2;
- (void)tryUpdateLocalMinimizeLiveInfoWithDataItems:(id)arg1 reportScene:(long long)arg2;
- (void)removeLocalMinimizeLiveInfo:(id)arg1;
- (void)updateLocalMinimizeLiveTaskData:(id)arg1;
- (id)mappedKV;
- (void)onServiceClearData;
- (void)setMappedKV:(id)arg1;
- (void).cxx_destruct;
@end

