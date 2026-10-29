@interface WCFinderSyncComposeResModel : NSObject
{
    BOOL _bResult; // +0x8
    NSError * _error; // +0x10
    NSString * _outputFile; // +0x18
    ABAReportPrams * _videoScoreParams; // +0x20
}
- (BOOL)bResult;
- (void)setBResult:(BOOL)arg1;
- (id)error;
- (void)setError:(id)arg1;
- (id)outputFile;
- (void)setOutputFile:(id)arg1;
- (id)videoScoreParams;
- (void)setVideoScoreParams:(id)arg1;
- (void).cxx_destruct;
@end

