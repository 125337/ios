@interface WCCanvasCommonFileRequestObject : NSObject
{
    unsigned int _retryCount; // +0x8
    NSString * _targetURL; // +0x10
    NSString * _fileMD5; // +0x18
    unsigned long long _beginTimeStamp; // +0x20
    CdnComMediaInfo * _cdnComInfo; // +0x28
}
- (id)targetURL;
- (void)setTargetURL:(id)arg1;
- (id)fileMD5;
- (void)setFileMD5:(id)arg1;
- (unsigned long long)beginTimeStamp;
- (void)setBeginTimeStamp:(unsigned long long)arg1;
- (unsigned int)retryCount;
- (void)setRetryCount:(unsigned int)arg1;
- (id)cdnComInfo;
- (void)setCdnComInfo:(id)arg1;
- (void).cxx_destruct;
@end

