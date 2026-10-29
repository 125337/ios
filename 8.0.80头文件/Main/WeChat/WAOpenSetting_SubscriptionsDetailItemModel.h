@interface WAOpenSetting_SubscriptionsDetailItemModel : NSObject
{
    BOOL _isAudioTemplate; // +0x8
    BOOL _acceptAudio; // +0x9
    BOOL _isForceNotifyTemplate; // +0xa
    BOOL _isAcceptWithForceNotify; // +0xb
    unsigned int _templateType; // +0xc
    unsigned int _tid; // +0x10
    NSString * _title; // +0x18
    NSString * _templateId; // +0x20
    long long _status; // +0x28
}
- (id)title;
- (void)setTitle:(id)arg1;
- (id)templateId;
- (void)setTemplateId:(id)arg1;
- (unsigned int)templateType;
- (void)setTemplateType:(unsigned int)arg1;
- (unsigned int)tid;
- (void)setTid:(unsigned int)arg1;
- (long long)status;
- (void)setStatus:(long long)arg1;
- (BOOL)isAudioTemplate;
- (void)setIsAudioTemplate:(BOOL)arg1;
- (BOOL)acceptAudio;
- (void)setAcceptAudio:(BOOL)arg1;
- (BOOL)isForceNotifyTemplate;
- (void)setIsForceNotifyTemplate:(BOOL)arg1;
- (BOOL)isAcceptWithForceNotify;
- (void)setIsAcceptWithForceNotify:(BOOL)arg1;
- (void).cxx_destruct;
@end
