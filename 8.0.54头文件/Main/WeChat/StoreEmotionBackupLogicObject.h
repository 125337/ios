@interface StoreEmotionBackupLogicObject : MMObject <StoreEmotionUploadMyPanelListCgiDelegate>
{
    BOOL m_hasCheckFileExist; // +0x8
    BOOL _stopFileMagration; // +0x9
    BOOL _m_isActive; // +0xa
    BOOL _m_hasStartLogic; // +0xb
    StoreEmotionUploadMyPanelListCgi * _uploadCgi; // +0x10
    id <StoreEmotionBackupLogicObjectDelegate> _delegate; // +0x18
    NSArray * _needUploadPids; // +0x20
}
- (id)initWithDelegate:(id)arg1;
- (void)startLogicWithNeedCheckFileExist:(BOOL)arg1;
- (BOOL)isActive;
- (void)asyncCheckFileExist;
- (void)onCheckFileExistFinished;
- (BOOL)checkFileExistWithEmoticonList:(id)arg1 needCheckThumb:(BOOL)arg2;
- (void)startInternalLogic;
- (BOOL)canStartCgiNow;
- (BOOL)checkIfNeedBackup;
- (id)getStoreEmotionList;
- (void)onStoreEmotionUploadMyPanelListCgiOk;
- (void)onStoreEmotionUploadMyPanelListCgiFailed;
- (BOOL)hasCheckFileExist;
- (BOOL)stopFileMagration;
- (void)setStopFileMagration:(BOOL)arg1;
- (id)uploadCgi;
- (void)setUploadCgi:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)needUploadPids;
- (void)setNeedUploadPids:(id)arg1;
- (BOOL)m_isActive;
- (void)setM_isActive:(BOOL)arg1;
- (BOOL)m_hasStartLogic;
- (void)setM_hasStartLogic:(BOOL)arg1;
- (void).cxx_destruct;
@end

