@interface WCFinderTopicShareItem : NSObject <WCFinderShareItemProtocol>
{
    unsigned int _topicType; // +0x8
    NSString * _topic; // +0x10
    NSString * _iconUrl; // +0x18
    NSString * _desc; // +0x20
    WCFinderTopicShareLocationItem * _location; // +0x28
    NSString * _patMusicId; // +0x30
    NSString * _fromFeedId; // +0x38
    WCFinderTopicShareTemplateItem * _templateItem; // +0x40
    unsigned long long _musicType; // +0x48
    unsigned long long _topicCount; // +0x50
    WCFinderFeedBindEventInfo * _event; // +0x58
}
+ (void)PBArrayAdd_topic;
+ (void)PBArrayAdd_topicType;
+ (void)PBArrayAdd_iconUrl;
+ (void)PBArrayAdd_desc;
+ (void)PBArrayAdd_location;
+ (void)PBArrayAdd_patMusicId;
+ (void)PBArrayAdd_musicType;
+ (void)PBArrayAdd_topicCount;
+ (void)PBArrayAdd_event;
+ (void)PBArrayAdd_fromFeedId;
+ (void)PBArrayAdd_templateItem;
+ (void)initialize;
- (id)getPBPropertyTable;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (id)toXML;
- (id)chatDesc;
- (id)summayText:(id)arg1 sender:(id)arg2 isChatRoom:(BOOL)arg3;
- (id)momentsSourceText;
- (id)momentsViewWithWCDataItem:(id)arg1;
- (id)momentsDesc;
- (double)momentsHeightForMedia:(id)arg1;
- (id)titleDisplayWithType:(unsigned long long)arg1;
- (id)description;
- (id)topic;
- (void)setTopic:(id)arg1;
- (unsigned int)topicType;
- (void)setTopicType:(unsigned int)arg1;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)location;
- (void)setLocation:(id)arg1;
- (id)patMusicId;
- (void)setPatMusicId:(id)arg1;
- (id)fromFeedId;
- (void)setFromFeedId:(id)arg1;
- (id)templateItem;
- (void)setTemplateItem:(id)arg1;
- (unsigned long long)musicType;
- (void)setMusicType:(unsigned long long)arg1;
- (unsigned long long)topicCount;
- (void)setTopicCount:(unsigned long long)arg1;
- (id)event;
- (void)setEvent:(id)arg1;
- (void).cxx_destruct;
@end

