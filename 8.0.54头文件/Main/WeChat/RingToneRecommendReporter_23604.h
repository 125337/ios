@interface RingToneRecommendReporter_23604 : KvReportBaseItem
{
    BOOL _reportedExposed; // +0x8
    unsigned int _previewTimeMs; // +0xc
    unsigned int _chooseTimeMs; // +0x10
    NSString * _feedID; // +0x18
    unsigned long long _feedType; // +0x20
    unsigned long long _exposureCount; // +0x28
    unsigned long long _evnetCode; // +0x30
    unsigned long long _scene; // +0x38
    NSString * _searchKeyword; // +0x40
    unsigned long long _usageRange; // +0x48
    NSString * _friendName; // +0x50
    NSString * _sessionID; // +0x58
    unsigned long long _setType; // +0x60
    unsigned long long _channel; // +0x68
    unsigned long long _vibrateType; // +0x70
    unsigned long long _recommendReasonType; // +0x78
    unsigned long long _cmdID; // +0x80
    unsigned long long _lastExposureCount; // +0x88
    NSString * _searchID; // +0x90
    NSString * _requestID; // +0x98
    unsigned long long _isVedioStream; // +0xa0
    NSString * _extrainfo; // +0xa8
    unsigned long long _pageKeepTimeStamp; // +0xb0
    unsigned long long _startPlayRingTimeStamp; // +0xb8
    RingToneDetail * _playingRingTone; // +0xc0
}
- (unsigned int)reportNSStringPreprocessType;
- (unsigned int)reportKvId;
- (id)reportOrderedFieldNameArr;
- (void)doReport;
- (void)doReportImmediately;
- (void)startPageKeepTimer;
- (void)reportExposedFirstRing:(id)arg1 exposedCount:(unsigned int)arg2 eventType:(unsigned long long)arg3;
- (void)reportPlayRing:(id)arg1 eventType:(unsigned long long)arg2;
- (void)reportEventCodeOnly:(unsigned long long)arg1 reset:(BOOL)arg2;
- (void)reportStopPlayRing;
- (id)feedID;
- (void)setFeedID:(id)arg1;
- (unsigned long long)feedType;
- (void)setFeedType:(unsigned long long)arg1;
- (unsigned long long)exposureCount;
- (void)setExposureCount:(unsigned long long)arg1;
- (unsigned long long)evnetCode;
- (void)setEvnetCode:(unsigned long long)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)searchKeyword;
- (void)setSearchKeyword:(id)arg1;
- (unsigned int)previewTimeMs;
- (void)setPreviewTimeMs:(unsigned int)arg1;
- (unsigned int)chooseTimeMs;
- (void)setChooseTimeMs:(unsigned int)arg1;
- (unsigned long long)usageRange;
- (void)setUsageRange:(unsigned long long)arg1;
- (id)friendName;
- (void)setFriendName:(id)arg1;
- (id)sessionID;
- (void)setSessionID:(id)arg1;
- (unsigned long long)setType;
- (void)setSetType:(unsigned long long)arg1;
- (unsigned long long)channel;
- (void)setChannel:(unsigned long long)arg1;
- (unsigned long long)vibrateType;
- (void)setVibrateType:(unsigned long long)arg1;
- (unsigned long long)recommendReasonType;
- (void)setRecommendReasonType:(unsigned long long)arg1;
- (unsigned long long)cmdID;
- (void)setCmdID:(unsigned long long)arg1;
- (unsigned long long)lastExposureCount;
- (void)setLastExposureCount:(unsigned long long)arg1;
- (BOOL)reportedExposed;
- (void)setReportedExposed:(BOOL)arg1;
- (id)searchID;
- (void)setSearchID:(id)arg1;
- (id)requestID;
- (void)setRequestID:(id)arg1;
- (unsigned long long)isVedioStream;
- (void)setIsVedioStream:(unsigned long long)arg1;
- (id)extrainfo;
- (void)setExtrainfo:(id)arg1;
- (unsigned long long)pageKeepTimeStamp;
- (void)setPageKeepTimeStamp:(unsigned long long)arg1;
- (unsigned long long)startPlayRingTimeStamp;
- (void)setStartPlayRingTimeStamp:(unsigned long long)arg1;
- (id)playingRingTone;
- (void)setPlayingRingTone:(id)arg1;
- (void).cxx_destruct;
@end

