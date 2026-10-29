@interface CBTAsstBoardSessionTaskInfo : NSObject
{
    unsigned int _status; // +0x8
    long long _startIndex; // +0x10
    NSString * _processIdentity; // +0x18
}
- (id)initWithStartIndex:(long long)arg1;
- (long long)startIndex;
- (void)setStartIndex:(long long)arg1;
- (unsigned int)status;
- (void)setStatus:(unsigned int)arg1;
- (id)processIdentity;
- (void)setProcessIdentity:(id)arg1;
- (void).cxx_destruct;
@end
