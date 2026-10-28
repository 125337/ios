@interface WCPlayerLoadingRequest : NSObject
{
    unsigned int _requestSeq; // +0x8
    unsigned long long _readablePos; // +0x10
    NSString * _fileName; // +0x18
    _NSRange _requestRange; // +0x20
}
- (BOOL)isM3U8;
- (BOOL)isFinished;
- (unsigned long long)requestedOffset;
- (long long)requestedLength;
- (unsigned long long)currentOffset;
- (BOOL)requestsAllDataToEndOfResource;
- (void)respondWithData:(id)arg1;
- (void)notifyDataReady:(long long)arg1 length:(long long)arg2;
- (void)finishLoadingWithError:(id)arg1;
- (void)finishLoading;
- (BOOL)fillInformationWithMimeType:(id)arg1 length:(long long)arg2;
- (id)description;
- (id)loadingRequest;
- (id)fileName;
- (BOOL)isShouldfillInformation;
- (void)setNotifyDataPath:(id)arg1;
- (unsigned int)requestSeq;
- (void)setRequestSeq:(unsigned int)arg1;
- (_NSRange)requestRange;
- (void)setRequestRange:(_NSRange)arg1;
- (unsigned long long)readablePos;
- (void)setReadablePos:(unsigned long long)arg1;
- (void)setFileName:(id)arg1;
- (void).cxx_destruct;
@end
