@interface TextStateFriendSquareTopicReportItem : NSObject
{
    unsigned int _iconType; // +0x8
    NSString * _iconId; // +0x10
    NSString * _iconCustomDescription; // +0x18
    unsigned long long _userCount; // +0x20
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (id)iconId;
- (void)setIconId:(id)arg1;
- (id)iconCustomDescription;
- (void)setIconCustomDescription:(id)arg1;
- (unsigned int)iconType;
- (void)setIconType:(unsigned int)arg1;
- (unsigned long long)userCount;
- (void)setUserCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
