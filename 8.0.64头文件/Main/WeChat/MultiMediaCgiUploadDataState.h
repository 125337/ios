@interface MultiMediaCgiUploadDataState : MultiMediaUploadBaseState
{
    UniversalC2CDataUploader * _uploader; // +0x8
}
- (id)uploader;
- (long long)getUploaderScene;
- (void)start;
- (void)stop;
- (id)getStateName;
- (void)setUploader:(id)arg1;
- (void).cxx_destruct;
@end
