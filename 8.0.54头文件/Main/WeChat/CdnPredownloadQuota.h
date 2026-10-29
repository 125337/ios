@interface CdnPredownloadQuota : NSObject
{
    long long _sizeInBytes; // +0x8
    NSDate * _expiredDate; // +0x10
}
- (long long)sizeInBytes;
- (void)setSizeInBytes:(long long)arg1;
- (id)expiredDate;
- (void)setExpiredDate:(id)arg1;
- (void).cxx_destruct;
@end

