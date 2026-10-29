@interface WCFinderFeedbackCGIParam : NSObject
{
    int _reportScene; // +0x8
    int _satisfactionQuestSubType; // +0xc
    unsigned long long _feedbackType; // +0x10
    long long _subType; // +0x18
    NSArray * _subTypeList; // +0x20
    unsigned long long _objectID; // +0x28
    NSString * _nonceID; // +0x30
    NSString * _exportId; // +0x38
    NSString * _sessionBuffer; // +0x40
    unsigned long long _liveScene; // +0x48
    NSString * _sessionExtraKey; // +0x50
    NSString * _notInterestedReason; // +0x58
}
- (unsigned long long)feedbackType;
- (void)setFeedbackType:(unsigned long long)arg1;
- (long long)subType;
- (void)setSubType:(long long)arg1;
- (id)subTypeList;
- (void)setSubTypeList:(id)arg1;
- (unsigned long long)objectID;
- (void)setObjectID:(unsigned long long)arg1;
- (id)nonceID;
- (void)setNonceID:(id)arg1;
- (id)exportId;
- (void)setExportId:(id)arg1;
- (id)sessionBuffer;
- (void)setSessionBuffer:(id)arg1;
- (int)reportScene;
- (void)setReportScene:(int)arg1;
- (unsigned long long)liveScene;
- (void)setLiveScene:(unsigned long long)arg1;
- (id)sessionExtraKey;
- (void)setSessionExtraKey:(id)arg1;
- (int)satisfactionQuestSubType;
- (void)setSatisfactionQuestSubType:(int)arg1;
- (id)notInterestedReason;
- (void)setNotInterestedReason:(id)arg1;
- (void).cxx_destruct;
@end
