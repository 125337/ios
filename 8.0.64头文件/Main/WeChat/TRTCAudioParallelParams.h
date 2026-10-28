@interface TRTCAudioParallelParams : NSObject
{
    unsigned int _maxCount; // +0x8
    NSArray * _includeUsers; // +0x10
}
- (RemoteAudioSelectorParams)convertToCppParams;
- (id)init;
- (unsigned int)maxCount;
- (void)setMaxCount:(unsigned int)arg1;
- (id)includeUsers;
- (void)setIncludeUsers:(id)arg1;
- (void).cxx_destruct;
@end
