@interface FlowListFinderItemData : NSObject
{
    NSString * _finderExportId; // +0x8
    NSString * _username; // +0x10
    NSString * _nickname; // +0x18
}
+ (id)makeWithFinderExportId:(id)arg1 username:(id)arg2 nickname:(id)arg3;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)finderExportId;
- (void)setFinderExportId:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (void).cxx_destruct;
@end

