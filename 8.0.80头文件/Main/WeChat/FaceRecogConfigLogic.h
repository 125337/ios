@interface FaceRecogConfigLogic : MMObject <PBMessageObserverDelegate>
{
    CdnInfo * _cdnInfo; // +0x8
    BOOL _bRSA; // +0x10
    int _bioCheckLiveFlag; // +0x14
    unsigned int _identifyType; // +0x18
    int _idcRedirectCount; // +0x1c
    id <FaceRecogConfigLogicDelegate> _delegate; // +0x20
    NSString * _appId; // +0x28
    NSString * _verifyInfo; // +0x30
    id _liveSelectData; // +0x38
    double _faceRatio; // +0x40
    unsigned long long _bioId; // +0x48
    NSString * _configBuffer; // +0x50
    NSDictionary * _liveSelect; // +0x58
}
- (void)dealloc;
- (void)resetConfig;
- (BOOL)isConfigReady;
- (unsigned long long)getBioId;
- (id)getConfigBuffer;
- (BOOL)startGetBioConfigForType:(unsigned int)arg1 atScene:(unsigned int)arg2;
- (BOOL)startGetBioConfigForType:(unsigned int)arg1 atScene:(unsigned int)arg2 userTicket:(id)arg3 isRsa:(BOOL)arg4;
- (BOOL)startRsaGetBioConfigForType:(unsigned int)arg1 atScene:(unsigned int)arg2 userTicket:(id)arg3;
- (void)initCdnInfo;
- (void)unInitCdnInfo;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleGetBioConfig:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (int)bioCheckLiveFlag;
- (void)setBioCheckLiveFlag:(int)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)verifyInfo;
- (void)setVerifyInfo:(id)arg1;
- (id)liveSelectData;
- (void)setLiveSelectData:(id)arg1;
- (double)faceRatio;
- (void)setFaceRatio:(double)arg1;
- (unsigned int)identifyType;
- (void)setIdentifyType:(unsigned int)arg1;
- (unsigned long long)bioId;
- (void)setBioId:(unsigned long long)arg1;
- (id)configBuffer;
- (void)setConfigBuffer:(id)arg1;
- (int)idcRedirectCount;
- (void)setIdcRedirectCount:(int)arg1;
- (id)liveSelect;
- (void)setLiveSelect:(id)arg1;
- (void).cxx_destruct;
@end
