@interface WCFinderLyricRecognitionHelper : NSObject
{
    NSString * _videoPath; // +0x8
}
+ (id)helperWithVideoPath:(id)arg1;
- (id)initWithVideoPath:(id)arg1;
- (void)run:(id /* block */)arg1;
- (void)onExportFinish:(id)arg1 complete:(id /* block */)arg2;
- (void)uploadFileThenRecognit:(id)arg1 complete:(id /* block */)arg2;
- (id)videoPath;
- (void)setVideoPath:(id)arg1;
- (void).cxx_destruct;
@end

