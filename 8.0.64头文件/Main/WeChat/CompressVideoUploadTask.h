@interface CompressVideoUploadTask : VideoUploadTask <MsgDataDownloadDelegate>
{
    BOOL _isSkipTransH264; // +0x8
    BOOL _bTryHevcConvert; // +0x9
    BOOL _isTryCompressVideoFromRawVideo; // +0xa
    double _compressProgress; // +0x10
    unsigned long long _m_ui64StartTime; // +0x18
    VideoEncodeParams * _params; // +0x20
    MsgDataDownloadLogic * _downloadLogic; // +0x28
    ThumbImageUploader * _thumbImageUploader; // +0x30
}
- (id)initWithMsgWrap:(id)arg1;
- (id)params;
- (id)downloadLogic;
- (id)thumbImageUploader;
- (BOOL)isNeedCompress;
- (void)startTask;
- (void)stopTask;
- (void)asyncCompressVideo:(BOOL)arg1;
- (BOOL)tryConvertToH264;
- (void)downloadVideo;
- (void)tryUploadData;
- (void)uploadVideoData;
- (id)getUploadThumbPath;
- (void)uploadVideoDataToCdn;
- (void)onCheckExistOnlyFail;
- (void)onUploadFail:(id)arg1;
- (void)reportOnUploadSucc:(id)arg1;
- (void)onUploadSuccess:(id)arg1;
- (void)tryOverwriteMsgContent:(id)arg1;
- (void)onDownloadSuccess:(id)arg1;
- (void)onDownloadCommonFail:(id)arg1;
- (void)onDownloadExpireFail:(id)arg1;
- (void)onDownloadCancel:(id)arg1;
- (double)compressProgress;
- (void)setCompressProgress:(double)arg1;
- (unsigned long long)m_ui64StartTime;
- (void)setM_ui64StartTime:(unsigned long long)arg1;
- (BOOL)isSkipTransH264;
- (void)setIsSkipTransH264:(BOOL)arg1;
- (BOOL)bTryHevcConvert;
- (void)setBTryHevcConvert:(BOOL)arg1;
- (BOOL)isTryCompressVideoFromRawVideo;
- (void)setIsTryCompressVideoFromRawVideo:(BOOL)arg1;
- (void)setParams:(id)arg1;
- (void)setDownloadLogic:(id)arg1;
- (void)setThumbImageUploader:(id)arg1;
- (void).cxx_destruct;
@end
