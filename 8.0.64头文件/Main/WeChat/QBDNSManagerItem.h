@interface QBDNSManagerItem : NSObject
{
    int _status; // +0x8
    NSArray * _records; // +0x10
    long long _err; // +0x18
    NSDate * _badDate; // +0x20
    NSDate * _emptyDate; // +0x28
}
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void).cxx_destruct;
- (id)records;
- (void)setRecords:(id)arg1;
- (int)status;
- (void)setStatus:(int)arg1;
- (long long)err;
- (void)setErr:(long long)arg1;
- (id)badDate;
- (void)setBadDate:(id)arg1;
- (id)emptyDate;
- (void)setEmptyDate:(id)arg1;
@end
