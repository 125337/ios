@interface MultiMediaDownloadFavDataState : MultiMediaUploadBaseState
{
    NSString * _thumbFileKey; // +0x8
    NSString * _dataFileKey; // +0x10
}
- (void)start;
- (void)stop;
- (id)getStateName;
- (void)transformToNextState;
- (void)downloadThumbData;
- (void)onThumbDataDownloadSucc:(id)arg1 savePath:(id)arg2;
- (void)dowloadMediaData;
- (void)onMediaDataDownloadSucc:(id)arg1 savePath:(id)arg2;
- (id)thumbFileKey;
- (void)setThumbFileKey:(id)arg1;
- (id)dataFileKey;
- (void)setDataFileKey:(id)arg1;
- (void).cxx_destruct;
@end

