@interface WASubscriptionMessagePageSheetMessageItem : MMObject
{
    BOOL _isAudioTemplate; // +0x8
    BOOL _isAcceptWithAudio; // +0x9
    BOOL _isForceNotifyTemplate; // +0xa
    BOOL _isAcceptWithForceNotify; // +0xb
    BOOL _selected; // +0xc
    int _templateType; // +0x10
    NSString * _audioTemplateUrl; // +0x18
    NSString * _wording; // +0x20
    NSString * _sceneDescription; // +0x28
    NSString * _templateID; // +0x30
    NSArray * _detailList; // +0x38
    unsigned long long _infoButtonClickCount; // +0x40
}
- (id)initWith:(id)arg1;
- (void)fillWithMsgItem:(id)arg1;
- (id)toReportDictionary;
- (id)toUIItem;
- (BOOL)isAudioTemplate;
- (BOOL)isAcceptWithAudio;
- (void)setIsAcceptWithAudio:(BOOL)arg1;
- (id)audioTemplateUrl;
- (id)wording;
- (void)setWording:(id)arg1;
- (id)sceneDescription;
- (void)setSceneDescription:(id)arg1;
- (id)templateID;
- (void)setTemplateID:(id)arg1;
- (BOOL)isForceNotifyTemplate;
- (BOOL)isAcceptWithForceNotify;
- (void)setIsAcceptWithForceNotify:(BOOL)arg1;
- (id)detailList;
- (void)setDetailList:(id)arg1;
- (BOOL)selected;
- (void)setSelected:(BOOL)arg1;
- (unsigned long long)infoButtonClickCount;
- (void)setInfoButtonClickCount:(unsigned long long)arg1;
- (int)templateType;
- (void)setTemplateType:(int)arg1;
- (void).cxx_destruct;
@end
