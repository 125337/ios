@interface EmoticonCameraReportObject : MMObject
{
    unsigned long long m_enterTime; // +0x8
    unsigned long long m_totalTime; // +0x10
    unsigned long long m_startRecordTime; // +0x18
    unsigned long long m_recordTime; // +0x20
    unsigned long long m_startEditTime; // +0x28
    unsigned long long m_editTime; // +0x30
    unsigned long long m_startComposeTime; // +0x38
    unsigned long long m_composeTime; // +0x40
    unsigned long long m_startUploadTime; // +0x48
    unsigned long long m_uploadTime; // +0x50
    unsigned long long m_recentPulledByCameraEmoticonLabelTime; // +0x58
    unsigned long long m_scene; // +0x60
    NSString * m_lastExposureLensId; // +0x68
    NSString * m_chooseLensId; // +0x70
    NSString * m_chooseLensName; // +0x78
    BOOL _removeBg; // +0x80
    BOOL _fastPlay; // +0x81
    BOOL _isWxam; // +0x82
    BOOL _cameraPositionBack; // +0x83
    int _attachedEmoticonCount; // +0x84
    unsigned int _dataSize; // +0x88
    NSString * _attachedText; // +0x90
    NSString * _textColor; // +0x98
    NSString * _followMd5; // +0xa0
    NSString * _md5; // +0xa8
    NSString * _activityId; // +0xb0
    NSString * _followLensId; // +0xb8
    NSString * _lensId; // +0xc0
    NSString * _lensName; // +0xc8
    unsigned long long _lensSource; // +0xd0
    long long _lensPosition; // +0xd8
    unsigned long long _lensSourceType; // +0xe0
}
+ (void)reportShowEmoticonCameraEntrance;
+ (void)reportClickEmoticonCameraLabelInMessage;
+ (void)reportAction:(unsigned long long)arg1 enterTime:(unsigned long long)arg2 totalTime:(unsigned long long)arg3 recordTime:(unsigned long long)arg4 editTime:(unsigned long long)arg5 composeTime:(unsigned long long)arg6 uploadTime:(unsigned long long)arg7 composeFailReason:(unsigned long long)arg8 uploadFailReason:(unsigned long long)arg9 scene:(unsigned long long)arg10 lensId:(id)arg11 lensPosition:(unsigned long long)arg12 boardPullUpInterval:(unsigned long long)arg13 lensName:(id)arg14 lensSource:(unsigned long long)arg15 sourceType:(unsigned long long)arg16;
+ (void)reportAction:(unsigned long long)arg1 enterTime:(unsigned long long)arg2 totalTime:(unsigned long long)arg3 recordTime:(unsigned long long)arg4 editTime:(unsigned long long)arg5 composeTime:(unsigned long long)arg6 uplaodTime:(unsigned long long)arg7 scene:(unsigned long long)arg8 boardPullUpInterval:(unsigned long long)arg9 lensId:(id)arg10 lensName:(id)arg11 lensPosition:(unsigned long long)arg12 source:(unsigned long long)arg13 sourceType:(unsigned long long)arg14;
+ (void)reportFailureAction:(unsigned long long)arg1 enterTime:(unsigned long long)arg2 composeFailReason:(unsigned long long)arg3 uploadFailReason:(unsigned long long)arg4 scene:(unsigned long long)arg5;
+ (void)reportChooseLens:(id)arg1 lensName:(id)arg2 lensPosition:(unsigned long long)arg3 enterTime:(unsigned long long)arg4 scene:(unsigned long long)arg5 source:(unsigned long long)arg6 sourceType:(unsigned long long)arg7;
- (id)init;
- (void)reportLensExposureWithId:(id)arg1 lensName:(id)arg2 isFromRecommend:(BOOL)arg3;
- (void)reportAction:(unsigned long long)arg1;
- (void)reportComposeFailureWithReason:(unsigned long long)arg1;
- (void)startUpload;
- (void)reportUploadFailureWithReason:(unsigned long long)arg1;
- (void)reportChooseLens:(id)arg1 lensName:(id)arg2 withPosition:(unsigned long long)arg3 source:(unsigned long long)arg4;
- (void)reportProcessEnd;
- (unsigned long long)enterTime;
- (void)setEnterTime:(unsigned long long)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (unsigned long long)recentPulledByCameraEmoticonLabelTime;
- (void)setRecentPulledByCameraEmoticonLabelTime:(unsigned long long)arg1;
- (id)attachedText;
- (void)setAttachedText:(id)arg1;
- (id)textColor;
- (void)setTextColor:(id)arg1;
- (BOOL)removeBg;
- (void)setRemoveBg:(BOOL)arg1;
- (BOOL)fastPlay;
- (void)setFastPlay:(BOOL)arg1;
- (int)attachedEmoticonCount;
- (void)setAttachedEmoticonCount:(int)arg1;
- (BOOL)isWxam;
- (void)setIsWxam:(BOOL)arg1;
- (unsigned int)dataSize;
- (void)setDataSize:(unsigned int)arg1;
- (id)followMd5;
- (void)setFollowMd5:(id)arg1;
- (id)md5;
- (void)setMd5:(id)arg1;
- (id)activityId;
- (void)setActivityId:(id)arg1;
- (BOOL)cameraPositionBack;
- (void)setCameraPositionBack:(BOOL)arg1;
- (id)followLensId;
- (void)setFollowLensId:(id)arg1;
- (id)lensId;
- (void)setLensId:(id)arg1;
- (id)lensName;
- (void)setLensName:(id)arg1;
- (unsigned long long)lensSource;
- (void)setLensSource:(unsigned long long)arg1;
- (long long)lensPosition;
- (void)setLensPosition:(long long)arg1;
- (unsigned long long)lensSourceType;
- (void)setLensSourceType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
