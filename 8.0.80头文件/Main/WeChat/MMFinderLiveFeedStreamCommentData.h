@interface MMFinderLiveFeedStreamCommentData : NSObject
{
    unsigned int _receiveSvrTime; // +0x8
    MMLiveCommentDataItem * _data; // +0x10
    unsigned long long _calculatedLen; // +0x18
}
- (id)identifier;
- (void)calculateLength;
- (id)data;
- (void)setData:(id)arg1;
- (unsigned int)receiveSvrTime;
- (void)setReceiveSvrTime:(unsigned int)arg1;
- (unsigned long long)calculatedLen;
- (void)setCalculatedLen:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
