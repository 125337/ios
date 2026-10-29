@interface FaceRecogFlashParamProcessor : NSObject
{
    BOOL _useSM4; // +0x8
    long long _workMode; // +0x10
    NSString * _bioId; // +0x18
    NSString * _appId; // +0x20
    NSString * _bizName; // +0x28
    NSString * _personId; // +0x30
    long long _depthFrameCount; // +0x38
    NSData * _selectDataFromConfig; // +0x40
    NSSet * _actionTipsSet; // +0x48
}
- (id)initWithWorkMode:(long long)arg1;
- (unsigned int)getCheckAliveType;
- (int)getBioCheckLiveConfigFlag;
- (long long)getUploadLiveType;
- (long long)getReportLivessType;
- (id)getPayConfigWithActionData:(id)arg1 videoBitRate:(double)arg2;
- (id)getEncodedVideoDataFromYtResult:(id)arg1;
- (id)getLiveSelectDataFromYTConfig:(id)arg1;
- (id)getYtConfigFromResponse:(id)arg1 liveSelectData:(id)arg2;
- (id)getYtConfigFromResponseAssemble:(id)arg1 liveSelectData:(id)arg2 setConfig:(id)arg3;
- (id)generateBioBufferWithYtData:(id)arg1 voiceData:(id)arg2;
- (id)generateLiveBodyWithYTContent:(id)arg1 voiceData:(id)arg2;
- (id)generateLiveHeaderWithKey:(id)arg1 bodyData:(id)arg2;
- (id)preprocessYtData:(id)arg1 voiceData:(id)arg2;
- (id)getBestImageFromYtData:(id)arg1 bioId:(id)arg2;
- (BOOL)isActionTips:(id)arg1;
- (long long)workMode;
- (void)setWorkMode:(long long)arg1;
- (id)bioId;
- (void)setBioId:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)bizName;
- (void)setBizName:(id)arg1;
- (id)personId;
- (void)setPersonId:(id)arg1;
- (long long)depthFrameCount;
- (void)setDepthFrameCount:(long long)arg1;
- (BOOL)useSM4;
- (void)setUseSM4:(BOOL)arg1;
- (id)selectDataFromConfig;
- (void)setSelectDataFromConfig:(id)arg1;
- (id)actionTipsSet;
- (void)setActionTipsSet:(id)arg1;
- (void).cxx_destruct;
@end
