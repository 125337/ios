@interface MJTemplateFinderEventTopicInfo : NSObject <PBCoding, NSCopying>
{
    NSString * _creatorNickname; // +0x8
    NSString * _eventName; // +0x10
}
+ (void)PBArrayAdd_creatorNickname;
+ (void)PBArrayAdd_eventName;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)initWithEventTopicInfo:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)description;
- (id)creatorNickname;
- (void)setCreatorNickname:(id)arg1;
- (id)eventName;
- (void)setEventName:(id)arg1;
- (void).cxx_destruct;
@end
