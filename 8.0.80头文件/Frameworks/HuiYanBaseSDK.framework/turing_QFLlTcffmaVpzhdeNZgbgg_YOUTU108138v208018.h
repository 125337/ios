@interface turing_QFLlTcffmaVpzhdeNZgbgg_YOUTU108138v208018 : NSObject <NSSecureCoding, NSCopying>
{
    unsigned long long _bytesOfRequest; // +0x8
    unsigned long long _bytesOfResponse; // +0x10
    unsigned long long _networkType; // +0x18
    NSMutableDictionary * _customStatistics; // +0x20
    NSString * _storeKey; // +0x28
    double _timestampOfCollecting; // +0x30
    double _timestampOfPosting; // +0x38
    double _timestampOfResponding; // +0x40
}
+ (id)newRecordForKey:(id)arg1;
+ (id)lastRecordForKey:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (double)elapseOfTotal;
- (double)elapseOfPosting;
- (double)elapseOfCollecting;
- (void)startCollecting;
- (void)startPostingWithNetworkType:(unsigned long long)arg1 withRequestSize:(unsigned long long)arg2;
- (void)donePostingWithResponseSize:(unsigned long long)arg1;
- (void)save;
- (id)initWithKey:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (unsigned long long)bytesOfRequest;
- (void)setBytesOfRequest:(unsigned long long)arg1;
- (unsigned long long)bytesOfResponse;
- (void)setBytesOfResponse:(unsigned long long)arg1;
- (unsigned long long)networkType;
- (void)setNetworkType:(unsigned long long)arg1;
- (id)customStatistics;
- (void)setCustomStatistics:(id)arg1;
- (id)storeKey;
- (void)setStoreKey:(id)arg1;
- (double)timestampOfCollecting;
- (void)setTimestampOfCollecting:(double)arg1;
- (double)timestampOfPosting;
- (void)setTimestampOfPosting:(double)arg1;
- (double)timestampOfResponding;
- (void)setTimestampOfResponding:(double)arg1;
- (void).cxx_destruct;
@end
