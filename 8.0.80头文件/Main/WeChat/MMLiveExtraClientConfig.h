@interface MMLiveExtraClientConfig : NSObject
{
    FinderGetLiveMsgResp_ExtraClientConfig * _respExtraConfig; // +0x8
    unsigned long long _userChangingConfigCnt; // +0x10
}
- (BOOL)updateWithRespExtraClientConfig:(id)arg1;
- (BOOL)updateLocalUserEnablePreviewLiveFloatMsg:(BOOL)arg1;
- (void)userStartChangingConfig;
- (void)userStopChangingConfig;
- (BOOL)checkConfigEqual:(id)arg1;
- (BOOL)isUserChangingConfig;
- (BOOL)userEnableLiveFeedBarrage;
- (BOOL)sysEnableLiveFeedBarrage;
- (id)hotWordFloatMsgConfig;
- (unsigned long long)hotWordStyle;
- (id)respExtraConfig;
- (void)setRespExtraConfig:(id)arg1;
- (unsigned long long)userChangingConfigCnt;
- (void)setUserChangingConfigCnt:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
