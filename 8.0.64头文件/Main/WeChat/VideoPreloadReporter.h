@interface VideoPreloadReporter : MMObject
{
    NSMutableDictionary * m_dict; // +0x8
}
- (void)reset;
- (id)init;
- (void)onPreloadTaskCreate:(id)arg1 data:(id)arg2;
- (void)onPreloadTaskComplete:(id)arg1 preloadDuration:(unsigned int)arg2 preloadDataSize:(unsigned int)arg3 preloadVideoSize:(unsigned int)arg4;
- (void)doReport:(id)arg1;
- (void).cxx_destruct;
@end
