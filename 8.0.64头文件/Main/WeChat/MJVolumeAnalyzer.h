@interface MJVolumeAnalyzer : NSObject
{
    OMCAutoVolumeCalculator * _volumeCalculator; // +0x8
}
- (id)init;
- (void)dealloc;
- (void)analyzeWithContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)analyzeImplWithClipSegment:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)volumeCalculator;
- (void)setVolumeCalculator:(id)arg1;
- (void).cxx_destruct;
@end
