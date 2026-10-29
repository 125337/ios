@interface WCFinderTopicListParams : NSObject
{
    int _type; // +0x8
    int _tabType; // +0xc
    int _fromType; // +0x10
    unsigned int _topicNewLifeEnterScene; // +0x14
    int _poiFromType; // +0x18
    int _poiTabID; // +0x1c
    int _poiFromScene; // +0x20
    NSString * _topic; // +0x28
    FinderLocation * _location; // +0x30
    NSString * _latitude; // +0x38
    NSString * _longitude; // +0x40
    NSString * _refObjectId; // +0x48
    NSString * _groupBuyBypassData; // +0x50
    FinderGetTopicListResponse * _cacheResponse; // +0x58
    NSArray * _cacheDataItems; // +0x60
    WCFinderSectionInfo * _sectionInfo; // +0x68
    NSString * _refUsername; // +0x70
    unsigned long long _eventTopicId; // +0x78
    NSString * _encryptedTopicId; // +0x80
    id <WCFinderEventViewControllerDelegate> _eventDelegate; // +0x88
    unsigned long long _musicTopicId; // +0x90
    NSString * _patTopicStr; // +0x98
    unsigned long long _eventEnterScene; // +0xa0
    unsigned long long _eventNewLifeEnterScene; // +0xa8
    unsigned long long _sourceType; // +0xb0
    unsigned long long _entryType; // +0xb8
    NSString * _jsapiKVReportInfo; // +0xc0
}
- (void)setBindEvent:(id)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (id)topic;
- (void)setTopic:(id)arg1;
- (id)location;
- (void)setLocation:(id)arg1;
- (id)latitude;
- (void)setLatitude:(id)arg1;
- (id)longitude;
- (void)setLongitude:(id)arg1;
- (id)refObjectId;
- (void)setRefObjectId:(id)arg1;
- (id)groupBuyBypassData;
- (void)setGroupBuyBypassData:(id)arg1;
- (id)cacheResponse;
- (void)setCacheResponse:(id)arg1;
- (id)cacheDataItems;
- (void)setCacheDataItems:(id)arg1;
- (id)sectionInfo;
- (void)setSectionInfo:(id)arg1;
- (int)tabType;
- (void)setTabType:(int)arg1;
- (int)fromType;
- (void)setFromType:(int)arg1;
- (id)refUsername;
- (void)setRefUsername:(id)arg1;
- (unsigned long long)eventTopicId;
- (void)setEventTopicId:(unsigned long long)arg1;
- (id)encryptedTopicId;
- (void)setEncryptedTopicId:(id)arg1;
- (id)eventDelegate;
- (void)setEventDelegate:(id)arg1;
- (unsigned long long)musicTopicId;
- (void)setMusicTopicId:(unsigned long long)arg1;
- (id)patTopicStr;
- (void)setPatTopicStr:(id)arg1;
- (unsigned long long)eventEnterScene;
- (void)setEventEnterScene:(unsigned long long)arg1;
- (unsigned long long)eventNewLifeEnterScene;
- (void)setEventNewLifeEnterScene:(unsigned long long)arg1;
- (unsigned int)topicNewLifeEnterScene;
- (void)setTopicNewLifeEnterScene:(unsigned int)arg1;
- (unsigned long long)sourceType;
- (void)setSourceType:(unsigned long long)arg1;
- (unsigned long long)entryType;
- (void)setEntryType:(unsigned long long)arg1;
- (id)jsapiKVReportInfo;
- (void)setJsapiKVReportInfo:(id)arg1;
- (int)poiFromType;
- (void)setPoiFromType:(int)arg1;
- (int)poiTabID;
- (void)setPoiTabID:(int)arg1;
- (int)poiFromScene;
- (void)setPoiFromScene:(int)arg1;
- (void).cxx_destruct;
@end

