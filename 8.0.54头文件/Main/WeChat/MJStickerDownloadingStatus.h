@interface MJStickerDownloadingStatus : NSObject
{
    float _progress; // +0x8
    unsigned long long _status; // +0x10
    NSArray * _progressCallback; // +0x18
    NSArray * _completionCallback; // +0x20
}
- (unsigned long long)status;
- (void)setStatus:(unsigned long long)arg1;
- (float)progress;
- (void)setProgress:(float)arg1;
- (id)progressCallback;
- (void)setProgressCallback:(id)arg1;
- (id)completionCallback;
- (void)setCompletionCallback:(id)arg1;
- (void).cxx_destruct;
@end

