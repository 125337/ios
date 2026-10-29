@interface NewLifePostParameter : NSObject
{
    BOOL _selectDefaultEnvelope; // +0x8
    int _enterScene; // +0xc
    FinderEventInfo * _event; // +0x10
    NSString * _topic; // +0x18
    FinderLocation * _location; // +0x20
    NSString * _topicId; // +0x28
    id <NewLifePostEndDelegate> _postEndDelegate; // +0x30
    NewLifeRedDotTipsShowInfo * _profilePostRedDotInfo; // +0x38
    unsigned long long _initSelectTabIndex; // +0x40
}
- (id)generateTopicContent;
- (id)event;
- (void)setEvent:(id)arg1;
- (id)topic;
- (void)setTopic:(id)arg1;
- (id)location;
- (void)setLocation:(id)arg1;
- (int)enterScene;
- (void)setEnterScene:(int)arg1;
- (BOOL)selectDefaultEnvelope;
- (void)setSelectDefaultEnvelope:(BOOL)arg1;
- (id)topicId;
- (void)setTopicId:(id)arg1;
- (id)postEndDelegate;
- (void)setPostEndDelegate:(id)arg1;
- (id)profilePostRedDotInfo;
- (void)setProfilePostRedDotInfo:(id)arg1;
- (unsigned long long)initSelectTabIndex;
- (void)setInitSelectTabIndex:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

