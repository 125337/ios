@interface WCAdConversionOnlineEventBizModel : NSObject
{
    int _downloadScene; // +0x8
    int _actor; // +0xc
    int _actCode; // +0x10
    int _deeplinkScene; // +0x14
    int _deeplinkType; // +0x18
    int _autoDownload; // +0x1c
    int _dialogType; // +0x20
    int _wvProgress; // +0x24
    int _lpType; // +0x28
    int _clickReqType; // +0x2c
    int _originErrorCode; // +0x30
    NSString * _aid; // +0x38
    NSString * _traceId; // +0x40
    NSString * _pid; // +0x48
    unsigned long long _costTime; // +0x50
    NSString * _pageExitAction; // +0x58
    NSString * _uxInfo; // +0x60
    NSString * _vangoghId; // +0x68
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (id)aid;
- (void)setAid:(id)arg1;
- (id)traceId;
- (void)setTraceId:(id)arg1;
- (id)pid;
- (void)setPid:(id)arg1;
- (unsigned long long)costTime;
- (void)setCostTime:(unsigned long long)arg1;
- (int)downloadScene;
- (void)setDownloadScene:(int)arg1;
- (int)actor;
- (void)setActor:(int)arg1;
- (int)actCode;
- (void)setActCode:(int)arg1;
- (int)deeplinkScene;
- (void)setDeeplinkScene:(int)arg1;
- (int)deeplinkType;
- (void)setDeeplinkType:(int)arg1;
- (int)autoDownload;
- (void)setAutoDownload:(int)arg1;
- (int)dialogType;
- (void)setDialogType:(int)arg1;
- (int)wvProgress;
- (void)setWvProgress:(int)arg1;
- (int)lpType;
- (void)setLpType:(int)arg1;
- (int)clickReqType;
- (void)setClickReqType:(int)arg1;
- (int)originErrorCode;
- (void)setOriginErrorCode:(int)arg1;
- (id)pageExitAction;
- (void)setPageExitAction:(id)arg1;
- (id)uxInfo;
- (void)setUxInfo:(id)arg1;
- (id)vangoghId;
- (void)setVangoghId:(id)arg1;
- (void).cxx_destruct;
@end
