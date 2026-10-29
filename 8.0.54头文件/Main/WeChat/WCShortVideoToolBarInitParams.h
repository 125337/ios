@interface WCShortVideoToolBarInitParams : NSObject
{
    BOOL _canRelayoutSubviews; // +0x8
    BOOL _needMaasEffect; // +0x9
    unsigned long long _cameraMode; // +0x10
    unsigned long long _scene; // +0x18
    RecommendedMusicInfo * _patMusicInfo; // +0x20
    unsigned long long _uiStyle; // +0x28
    NSString * _shortURLForPreviewingTemplate; // +0x30
    FinderVideoTemplateInfo * _templateInfo; // +0x38
    unsigned long long _finderEventId; // +0x40
    NSArray * _toolbarBtnOrder; // +0x48
    NSString * _finderUsername; // +0x50
    NSMutableArray * _wxToMaasMusicIds; // +0x58
    double _contentBottomPadding; // +0x60
}
- (unsigned long long)cameraMode;
- (void)setCameraMode:(unsigned long long)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (BOOL)canRelayoutSubviews;
- (void)setCanRelayoutSubviews:(BOOL)arg1;
- (id)patMusicInfo;
- (void)setPatMusicInfo:(id)arg1;
- (unsigned long long)uiStyle;
- (void)setUiStyle:(unsigned long long)arg1;
- (BOOL)needMaasEffect;
- (void)setNeedMaasEffect:(BOOL)arg1;
- (id)shortURLForPreviewingTemplate;
- (void)setShortURLForPreviewingTemplate:(id)arg1;
- (id)templateInfo;
- (void)setTemplateInfo:(id)arg1;
- (unsigned long long)finderEventId;
- (void)setFinderEventId:(unsigned long long)arg1;
- (id)toolbarBtnOrder;
- (void)setToolbarBtnOrder:(id)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)wxToMaasMusicIds;
- (void)setWxToMaasMusicIds:(id)arg1;
- (double)contentBottomPadding;
- (void)setContentBottomPadding:(double)arg1;
- (void).cxx_destruct;
@end

