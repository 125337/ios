@interface WCPhotoAccountReportInfo : NSObject <NSCoding, PBCoding>
{
    NSString * _username; // +0x8
    NSString * _feedId; // +0x10
    NSString * _feedIndex; // +0x18
}
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_feedId;
+ (void)PBArrayAdd_feedIndex;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)feedId;
- (void)setFeedId:(id)arg1;
- (id)feedIndex;
- (void)setFeedIndex:(id)arg1;
- (void).cxx_destruct;
@end
