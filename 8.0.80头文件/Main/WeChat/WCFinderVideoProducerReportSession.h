@interface WCFinderVideoProducerReportSession : NSObject
{
    BOOL _hasFinishedVideoProducerActionRecorder; // +0x8
    NSString * _sessionID; // +0x10
    WCFinderVideoProducerActionRecorder * _currentVideoProducerActionRecorder; // +0x18
    WCMomentsPickerActionRecorder * _currentPickerActionRecorder; // +0x20
    NSMutableArray * _videoProducerActionRecorderList; // +0x28
}
- (id)initWithSessionID:(id)arg1 assetInfoList:(id)arg2;
- (void)dealloc;
- (void)startPickerActionRecorderWithAssetInfoList:(id)arg1;
- (void)startVideoProducerActionRecorder:(unsigned int)arg1;
- (void)stopVideoProducerActionRecorder;
- (void)finishVideoProducerActionRecorder;
- (id)sessionID;
- (void)setSessionID:(id)arg1;
- (id)currentVideoProducerActionRecorder;
- (void)setCurrentVideoProducerActionRecorder:(id)arg1;
- (id)currentPickerActionRecorder;
- (void)setCurrentPickerActionRecorder:(id)arg1;
- (id)videoProducerActionRecorderList;
- (void)setVideoProducerActionRecorderList:(id)arg1;
- (BOOL)hasFinishedVideoProducerActionRecorder;
- (void)setHasFinishedVideoProducerActionRecorder:(BOOL)arg1;
- (void).cxx_destruct;
@end
