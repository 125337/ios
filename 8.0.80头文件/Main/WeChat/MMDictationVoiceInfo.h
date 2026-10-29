@interface MMDictationVoiceInfo : NSObject
{
    BOOL _offlineSpeaking; // +0x8
    BOOL _inOfflineOnscreenSegment; // +0x9
    BOOL _hasCommittedResult; // +0xa
    BOOL _lastCommittedResultContainsOffline; // +0xb
    BOOL _onlineTailReceived; // +0xc
    unsigned int _onlineOfflineSwitchCount; // +0x10
    unsigned long long _triggerScene; // +0x18
    NSString * _voiceId; // +0x20
    NSString * _ilinkStreamID; // +0x28
    NSDate * _startTime; // +0x30
    NSDate * _endTime; // +0x38
    long long _stopReason; // +0x40
    long long _stopMode; // +0x48
    unsigned long long _stopTime; // +0x50
    unsigned long long _translatedTextLength; // +0x58
    unsigned long long _totalDataUsageCellular; // +0x60
    unsigned long long _totalDataUsageWifi; // +0x68
    NSMutableArray * _decibelSamples; // +0x70
    NSMutableString * _responseDelayStr; // +0x78
    NSMutableString * _displayDelayStr; // +0x80
    NSMutableString * _offlineDelayStr; // +0x88
    unsigned long long _firstTextTime; // +0x90
    unsigned long long _recordEndTime; // +0x98
    unsigned long long _lastOfflineResultTime; // +0xa0
    unsigned long long _offlineOnscreenCount; // +0xa8
    unsigned long long _offlineOnscreenDuration; // +0xb0
    unsigned long long _offlineOnscreenSegmentPeak; // +0xb8
    unsigned long long _offlineOnscreenSegmentStartTime; // +0xc0
    NSString * _offlineResultText; // +0xc8
    NSString * _onlineResultText; // +0xd0
    unsigned long long _onlineCatchupEditCount; // +0xd8
}
- (id)init;
- (void)appendDelay:(unsigned long long)arg1 toString:(id)arg2;
- (unsigned long long)currentOfflineOnscreenCount;
- (unsigned long long)currentOfflineOnscreenDuration;
- (unsigned int)averageDecibelFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (unsigned int)averageDecibelForDelayTime:(unsigned long long)arg1;
- (unsigned int)averageDecibel;
- (id)description;
- (unsigned long long)triggerScene;
- (void)setTriggerScene:(unsigned long long)arg1;
- (id)voiceId;
- (void)setVoiceId:(id)arg1;
- (id)ilinkStreamID;
- (void)setIlinkStreamID:(id)arg1;
- (id)startTime;
- (void)setStartTime:(id)arg1;
- (id)endTime;
- (void)setEndTime:(id)arg1;
- (long long)stopReason;
- (void)setStopReason:(long long)arg1;
- (long long)stopMode;
- (void)setStopMode:(long long)arg1;
- (unsigned long long)stopTime;
- (void)setStopTime:(unsigned long long)arg1;
- (unsigned long long)translatedTextLength;
- (void)setTranslatedTextLength:(unsigned long long)arg1;
- (unsigned long long)totalDataUsageCellular;
- (void)setTotalDataUsageCellular:(unsigned long long)arg1;
- (unsigned long long)totalDataUsageWifi;
- (void)setTotalDataUsageWifi:(unsigned long long)arg1;
- (id)decibelSamples;
- (void)setDecibelSamples:(id)arg1;
- (id)responseDelayStr;
- (void)setResponseDelayStr:(id)arg1;
- (id)displayDelayStr;
- (void)setDisplayDelayStr:(id)arg1;
- (id)offlineDelayStr;
- (void)setOfflineDelayStr:(id)arg1;
- (unsigned long long)firstTextTime;
- (void)setFirstTextTime:(unsigned long long)arg1;
- (unsigned long long)recordEndTime;
- (void)setRecordEndTime:(unsigned long long)arg1;
- (unsigned long long)lastOfflineResultTime;
- (void)setLastOfflineResultTime:(unsigned long long)arg1;
- (BOOL)offlineSpeaking;
- (void)setOfflineSpeaking:(BOOL)arg1;
- (unsigned long long)offlineOnscreenCount;
- (void)setOfflineOnscreenCount:(unsigned long long)arg1;
- (unsigned long long)offlineOnscreenDuration;
- (void)setOfflineOnscreenDuration:(unsigned long long)arg1;
- (BOOL)inOfflineOnscreenSegment;
- (void)setInOfflineOnscreenSegment:(BOOL)arg1;
- (BOOL)hasCommittedResult;
- (void)setHasCommittedResult:(BOOL)arg1;
- (BOOL)lastCommittedResultContainsOffline;
- (void)setLastCommittedResultContainsOffline:(BOOL)arg1;
- (unsigned int)onlineOfflineSwitchCount;
- (void)setOnlineOfflineSwitchCount:(unsigned int)arg1;
- (unsigned long long)offlineOnscreenSegmentPeak;
- (void)setOfflineOnscreenSegmentPeak:(unsigned long long)arg1;
- (unsigned long long)offlineOnscreenSegmentStartTime;
- (void)setOfflineOnscreenSegmentStartTime:(unsigned long long)arg1;
- (id)offlineResultText;
- (void)setOfflineResultText:(id)arg1;
- (id)onlineResultText;
- (void)setOnlineResultText:(id)arg1;
- (BOOL)onlineTailReceived;
- (void)setOnlineTailReceived:(BOOL)arg1;
- (unsigned long long)onlineCatchupEditCount;
- (void)setOnlineCatchupEditCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
