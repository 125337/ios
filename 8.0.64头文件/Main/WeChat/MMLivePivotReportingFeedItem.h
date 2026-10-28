@interface MMLivePivotReportingFeedItem : NSObject
{
    unsigned int _associatedBlockedLoadingDurationInMilliseconds; // +0x8
    unsigned int _timeToFirstFrameInMilliseconds; // +0xc
    unsigned int _cumulatedStayDurationInMilliseconds; // +0x10
    unsigned int _cumulatedPlayDurationInMilliseconds; // +0x14
    unsigned long long _objectId; // +0x18
    unsigned long long _lastExposureUnixEpochTime; // +0x20
    unsigned long long _lastBeginPlayingUnixEpochTime; // +0x28
}
- (unsigned long long)objectId;
- (void)setObjectId:(unsigned long long)arg1;
- (unsigned int)associatedBlockedLoadingDurationInMilliseconds;
- (void)setAssociatedBlockedLoadingDurationInMilliseconds:(unsigned int)arg1;
- (unsigned int)timeToFirstFrameInMilliseconds;
- (void)setTimeToFirstFrameInMilliseconds:(unsigned int)arg1;
- (unsigned int)cumulatedStayDurationInMilliseconds;
- (void)setCumulatedStayDurationInMilliseconds:(unsigned int)arg1;
- (unsigned int)cumulatedPlayDurationInMilliseconds;
- (void)setCumulatedPlayDurationInMilliseconds:(unsigned int)arg1;
- (unsigned long long)lastExposureUnixEpochTime;
- (void)setLastExposureUnixEpochTime:(unsigned long long)arg1;
- (unsigned long long)lastBeginPlayingUnixEpochTime;
- (void)setLastBeginPlayingUnixEpochTime:(unsigned long long)arg1;
@end
