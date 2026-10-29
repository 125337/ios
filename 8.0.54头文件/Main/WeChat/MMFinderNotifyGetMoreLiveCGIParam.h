@interface MMFinderNotifyGetMoreLiveCGIParam : NSObject
{
    float _longitude; // +0x8
    float _latitude; // +0xc
    unsigned int _noticeType; // +0x10
    NSString * _reportExtInfo; // +0x18
    unsigned long long _objectID; // +0x20
    NSData * _lastBuffer; // +0x28
    FinderClientStatus * _status; // +0x30
    NSArray * _objectIDArray; // +0x38
}
- (id)reportExtInfo;
- (void)setReportExtInfo:(id)arg1;
- (unsigned long long)objectID;
- (void)setObjectID:(unsigned long long)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id)status;
- (void)setStatus:(id)arg1;
- (float)longitude;
- (void)setLongitude:(float)arg1;
- (float)latitude;
- (void)setLatitude:(float)arg1;
- (id)objectIDArray;
- (void)setObjectIDArray:(id)arg1;
- (unsigned int)noticeType;
- (void)setNoticeType:(unsigned int)arg1;
- (void).cxx_destruct;
@end

