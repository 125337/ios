@interface WCFinderPostFeedTsModel : NSObject <PBCoding>
{
    NSString * _feedId; // +0x8
    long long _timeStamp; // +0x10
    long long _useCount; // +0x18
}
+ (void)PBArrayAdd_feedId;
+ (void)PBArrayAdd_timeStamp;
+ (void)PBArrayAdd_useCount;
+ (void)initialize;
+ (BOOL)checkLatestPostDataItem:(id)arg1;
- (id)getPBPropertyTable;
- (id)feedId;
- (void)setFeedId:(id)arg1;
- (long long)timeStamp;
- (void)setTimeStamp:(long long)arg1;
- (long long)useCount;
- (void)setUseCount:(long long)arg1;
- (void).cxx_destruct;
@end
