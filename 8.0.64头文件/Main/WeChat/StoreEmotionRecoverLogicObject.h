@interface StoreEmotionRecoverLogicObject : MMObject <StoreEmotionRecoverMyPanelListCgiDelegate>
{
    BOOL _m_isActive; // +0x8
    BOOL _m_hasStartLogic; // +0x9
    int _scene; // +0xc
    StoreEmotionRecoverMyPanelListCgi * _downloadCgi; // +0x10
    id <StoreEmotionRecoverLogicObjectDelegate> _delegate; // +0x18
}
- (id)initWithDelegate:(id)arg1;
- (void)startRequest;
- (BOOL)isActive;
- (void)startInternalRequest;
- (BOOL)canStartCgiNow;
- (void)onStoreEmotionRecoverMyPanelListCgiOKWithPids:(id)arg1;
- (void)onStoreEmotionRecoverMyPanelListCgiFailed;
- (void)onStoreEmotionRecoverMyPanelListOKWithSetInfos:(id)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (id)downloadCgi;
- (void)setDownloadCgi:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)m_isActive;
- (void)setM_isActive:(BOOL)arg1;
- (BOOL)m_hasStartLogic;
- (void)setM_hasStartLogic:(BOOL)arg1;
- (void).cxx_destruct;
@end
