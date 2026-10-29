@interface BTLTopBarReportItem : MMObject
{
    BOOL _hasDotNotice; // +0x8
    BOOL _isLogoCache; // +0x9
    BOOL _isDefaultLogo; // +0xa
    BOOL _isBrandLiving; // +0xb
    unsigned int _eventTime; // +0xc
    unsigned int _exposeCount; // +0x10
    unsigned int _clickCount; // +0x14
    unsigned int _exposeReqId; // +0x18
    unsigned int _barType; // +0x1c
    unsigned int _liveState; // +0x20
    unsigned int _liveScene; // +0x24
    unsigned int _barExpandType; // +0x28
    unsigned int _exposedType; // +0x2c
    unsigned int _memberZoneStatus; // +0x30
    unsigned long long _itemType; // +0x38
    NSString * _itemId; // +0x40
    unsigned long long _index; // +0x48
    NSString * _bizUsrName; // +0x50
    NSString * _logoUrl; // +0x58
    NSString * _syncBuffer; // +0x60
    unsigned long long _eventTimeMs; // +0x68
    NSString * _liveExportId; // +0x70
    unsigned long long _newMsgType; // +0x78
    unsigned long long _finderUin; // +0x80
    NSString * _finderUsername; // +0x88
}
+ (id)itemIdWithBrandItemModel:(id)arg1;
+ (id)reportItemWithBrandItemModel:(id)arg1 index:(unsigned long long)arg2;
+ (id)reportItemWithChannelItemModel:(id)arg1 index:(unsigned long long)arg2;
+ (id)reportItemWithBTLiveBarItemViewModel:(id)arg1 index:(unsigned long long)arg2;
- (BOOL)isSameAsItem:(id)arg1;
- (id)oftenReadBarShowInfo;
- (id)oftenReadBarClickInfo;
- (unsigned long long)itemType;
- (void)setItemType:(unsigned long long)arg1;
- (id)itemId;
- (void)setItemId:(id)arg1;
- (unsigned long long)index;
- (void)setIndex:(unsigned long long)arg1;
- (BOOL)hasDotNotice;
- (void)setHasDotNotice:(BOOL)arg1;
- (id)bizUsrName;
- (void)setBizUsrName:(id)arg1;
- (id)logoUrl;
- (void)setLogoUrl:(id)arg1;
- (id)syncBuffer;
- (void)setSyncBuffer:(id)arg1;
- (BOOL)isLogoCache;
- (void)setIsLogoCache:(BOOL)arg1;
- (unsigned int)eventTime;
- (void)setEventTime:(unsigned int)arg1;
- (unsigned long long)eventTimeMs;
- (void)setEventTimeMs:(unsigned long long)arg1;
- (unsigned int)exposeCount;
- (void)setExposeCount:(unsigned int)arg1;
- (unsigned int)clickCount;
- (void)setClickCount:(unsigned int)arg1;
- (unsigned int)exposeReqId;
- (void)setExposeReqId:(unsigned int)arg1;
- (BOOL)isDefaultLogo;
- (void)setIsDefaultLogo:(BOOL)arg1;
- (unsigned int)barType;
- (void)setBarType:(unsigned int)arg1;
- (unsigned int)liveState;
- (void)setLiveState:(unsigned int)arg1;
- (id)liveExportId;
- (void)setLiveExportId:(id)arg1;
- (BOOL)isBrandLiving;
- (void)setIsBrandLiving:(BOOL)arg1;
- (unsigned int)liveScene;
- (void)setLiveScene:(unsigned int)arg1;
- (unsigned int)barExpandType;
- (void)setBarExpandType:(unsigned int)arg1;
- (unsigned int)exposedType;
- (void)setExposedType:(unsigned int)arg1;
- (unsigned long long)newMsgType;
- (void)setNewMsgType:(unsigned long long)arg1;
- (unsigned int)memberZoneStatus;
- (void)setMemberZoneStatus:(unsigned int)arg1;
- (unsigned long long)finderUin;
- (void)setFinderUin:(unsigned long long)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (void).cxx_destruct;
@end
