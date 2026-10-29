@interface WCPlayerLoadingRequestTaskInfo : NSObject
{
    int _taskSeq; // +0x8
    float _downloadSec; // +0xc
    WCPlayerLoadingRequest * _loadingRequest; // +0x10
    _NSRange _dataRange; // +0x18
}
- (id)initWithSeq:(int)arg1;
- (BOOL)isEqualToLoadingRequest:(id)arg1;
- (id)description;
- (int)taskSeq;
- (void)setTaskSeq:(int)arg1;
- (_NSRange)dataRange;
- (void)setDataRange:(_NSRange)arg1;
- (float)downloadSec;
- (void)setDownloadSec:(float)arg1;
- (id)loadingRequest;
- (void)setLoadingRequest:(id)arg1;
- (void).cxx_destruct;
@end

