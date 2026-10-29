@interface TPVideoInfoBuilder : NSObject
{
    TPVideoInfo * _model; // +0x8
}
- (id)init;
- (long long)width;
- (id)setWidth:(long long)arg1;
- (long long)height;
- (id)setHeight:(long long)arg1;
- (id)downloadFileID;
- (id)setDownloadFileID:(id)arg1;
- (long long)videoCodecId;
- (id)setVideoCodecId:(long long)arg1;
- (id)downloadParamDataArray;
- (id)setDownloadParamDataArray:(id)arg1;
- (id)build;
- (id)model;
- (void)setModel:(id)arg1;
- (void).cxx_destruct;
@end

