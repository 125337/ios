@interface WCFinderFeedBindEventInfo : NSObject <YYModel, NSCoding, NSCopying, PBCoding, WCTTableCoding>
{
    unsigned long long _eventTopicId; // +0x8
    NSString * _eventID; // +0x10
    NSString * _eventName; // +0x18
    NSString * _eventCreatorNickName; // +0x20
    unsigned long long _cacheTime; // +0x28
    unsigned long long _eventAttendCount; // +0x30
    unsigned long long _hiddenMark; // +0x38
    FinderEventWordingInfo * _wordingInfo; // +0x40
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)eventID;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_eventID;
+ (const void *)eventName;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_eventName;
+ (const void *)eventCreatorNickName;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_eventCreatorNickName;
+ (const void *)cacheTime;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_cacheTime;
+ (const void *)eventAttendCount;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_eventAttendCount;
+ (const void *)wordingInfo;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_wordingInfo;
+ (const void *)hiddenMark;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_hiddenMark;
+ (void)__wcdb_column_constraint_7:(void *)arg1;
+ (void)__wcdb_index_8:(void *)arg1;
+ (void)PBArrayAdd_eventID;
+ (void)PBArrayAdd_eventName;
+ (void)PBArrayAdd_eventCreatorNickName;
+ (void)PBArrayAdd_eventAttendCount;
+ (void)PBArrayAdd_wordingInfo;
+ (void)PBArrayAdd_hiddenMark;
+ (void)initialize;
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (id)getPBPropertyTable;
- (id)initWithFinderEventInfo:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (unsigned long long)eventTopicId;
- (void)setEventTopicId:(unsigned long long)arg1;
- (id)genEventDescObject;
- (id)shownEventName;
- (id)shortShownEventName;
- (id)shownEventCount;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (id)toXML;
- (id)description;
- (id)eventID;
- (void)setEventID:(id)arg1;
- (id)eventName;
- (void)setEventName:(id)arg1;
- (id)eventCreatorNickName;
- (void)setEventCreatorNickName:(id)arg1;
- (unsigned long long)cacheTime;
- (void)setCacheTime:(unsigned long long)arg1;
- (unsigned long long)eventAttendCount;
- (void)setEventAttendCount:(unsigned long long)arg1;
- (unsigned long long)hiddenMark;
- (void)setHiddenMark:(unsigned long long)arg1;
- (id)wordingInfo;
- (void)setWordingInfo:(id)arg1;
- (void).cxx_destruct;
@end

