@interface FTSFeatureItem : NSObject <_TtP6WeChat11FTSRowModel_>
{
    unsigned int _featureID; // +0x8
    NSString * _title; // +0x10
    NSString * _titlePY; // +0x18
    NSString * _titleShortPY; // +0x20
    NSString * _tag; // +0x28
    NSString * _actionType; // +0x30
    NSString * _actionUrl; // +0x38
    NSString * _helpUrl; // +0x40
    NSString * _updateUrl; // +0x48
    long long _pluginType; // +0x50
    NSString * _candidateTitle; // +0x58
    NSString * _secoundCandidateTitle; // +0x60
    NSString * _thirdCandidateTitle; // +0x68
}
- (id)userName;
- (id)diffIdentifier;
- (void)setFeatureID:(unsigned int)arg1;
- (id)init;
- (BOOL)shouldJumpWeb;
- (BOOL)shouldJumpNative;
- (BOOL)shouldJumpWeApp;
- (unsigned int)featureID;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)titlePY;
- (void)setTitlePY:(id)arg1;
- (id)titleShortPY;
- (void)setTitleShortPY:(id)arg1;
- (id)tag;
- (void)setTag:(id)arg1;
- (id)actionType;
- (void)setActionType:(id)arg1;
- (id)actionUrl;
- (void)setActionUrl:(id)arg1;
- (id)helpUrl;
- (void)setHelpUrl:(id)arg1;
- (id)updateUrl;
- (void)setUpdateUrl:(id)arg1;
- (long long)pluginType;
- (void)setPluginType:(long long)arg1;
- (id)candidateTitle;
- (void)setCandidateTitle:(id)arg1;
- (id)secoundCandidateTitle;
- (void)setSecoundCandidateTitle:(id)arg1;
- (id)thirdCandidateTitle;
- (void)setThirdCandidateTitle:(id)arg1;
- (void).cxx_destruct;
@end
