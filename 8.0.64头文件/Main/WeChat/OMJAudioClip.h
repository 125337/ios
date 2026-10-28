@interface OMJAudioClip : NSObject
{
    BOOL _isLooping; // +0x8
    NSString * _filePath; // +0x10
    double _volume; // +0x18
    struct _timeRangeInAsset; // +0x20
}
- (id)initWithFilePath:(id)arg1 volume:(float)arg2;
- (id)initWithFilePath:(id)arg1 timeRangeInAsset:(struct)arg2 volume:(float)arg3;
- (id)initWithFilePath:(id)arg1 timeRangeInAsset:(struct)arg2 volume:(float)arg3 isLooping:(BOOL)arg4;
- (id)filePath;
- (struct)timeRangeInAsset;
- (double)volume;
- (BOOL)isLooping;
- (void)setIsLooping:(BOOL)arg1;
- (void).cxx_destruct;
@end
