@interface GameHaowanImageUploadTask : GameHaowanUploadTask <ICdnComMgrExt>
{
    float _lastPercent; // +0x38
    NSString * _fileKey; // +0x40
    NSMutableArray * _resIds; // +0x48
    unsigned long long _startUploadTime; // +0x50
}
- (void)onStart;
- (void)startNextImageUpload;
- (void)OnCdnUploadProgress:(id)arg1;
- (void)OnCdnUpload:(id)arg1;
- (unsigned long long)currentIndex;
- (void)trackEventUploadSucceed;
- (void)trackEventUploadFailed:(long long)arg1;
- (void)trackEventStartUpload;
- (id)fileKey;
- (void)setFileKey:(id)arg1;
- (float)lastPercent;
- (void)setLastPercent:(float)arg1;
- (id)resIds;
- (void)setResIds:(id)arg1;
- (unsigned long long)startUploadTime;
- (void)setStartUploadTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
