@interface OVCPreprocTask : NSObject
{
    BOOL _isAudioAnalysisEnabled; // +0x8
    int _priority; // +0xc
    NSString * _localIdentifier; // +0x10
    NSString * _filePath; // +0x18
    long long _assetMediaType; // +0x20
    unsigned long long _transcodePolicy; // +0x28
    unsigned long long _transcodeDimensionLevel; // +0x30
    NSString * _analysisParams; // +0x38
}
+ (id)taskWithLocalIdentifier:(id)arg1 priority:(int)arg2 transcodePolicy:(unsigned long long)arg3 analysisParams:(id)arg4;
+ (id)taskWithFilePath:(id)arg1 assetMediaType:(long long)arg2 priority:(int)arg3 transcodePolicy:(unsigned long long)arg4 analysisParams:(id)arg5;
- (id)initWithLocalIdentifier:(id)arg1 priority:(int)arg2 transcodePolicy:(unsigned long long)arg3 analysisParams:(id)arg4;
- (id)initWithFilePath:(id)arg1 assetMediaType:(long long)arg2 priority:(int)arg3 transcodePolicy:(unsigned long long)arg4 analysisParams:(id)arg5;
- (id)localIdentifier;
- (id)filePath;
- (long long)assetMediaType;
- (int)priority;
- (unsigned long long)transcodePolicy;
- (unsigned long long)transcodeDimensionLevel;
- (void)setTranscodeDimensionLevel:(unsigned long long)arg1;
- (BOOL)isAudioAnalysisEnabled;
- (void)setIsAudioAnalysisEnabled:(BOOL)arg1;
- (id)analysisParams;
- (void).cxx_destruct;
@end
