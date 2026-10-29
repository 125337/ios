@interface OpenImResourceMgr : NSObject <IMMLanguageMgrExt, PBMessageObserverDelegate>
{
    NSMutableDictionary * m_TypeResource; // +0x8
    OpenImResourceStorage * m_resourceStorage; // +0x10
}
+ (id)resourcePathType;
+ (BOOL)isWeWorkOpenIm:(id)arg1;
+ (BOOL)isHardwareOpenIm:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)tryLoadOpenImTypeResource:(id)arg1;
- (BOOL)checkOpenImTypeResourceLanguageIsEqual:(id)arg1;
- (void)saveOpenImTypeResource;
- (BOOL)checkOpenImResourceReady:(id)arg1 wordings:(id)arg2 checkTime:(BOOL)arg3;
- (BOOL)checkOpenImResourceReady:(id)arg1 subType:(unsigned int)arg2 wordings:(id)arg3 checkTime:(BOOL)arg4;
- (BOOL)tryUpdateOpenImResource:(id)arg1 wordings:(id)arg2;
- (BOOL)tryUpdateOpenImResource:(id)arg1 subType:(unsigned int)arg2 wordings:(id)arg3;
- (BOOL)tryUpdateOpenImResource:(id)arg1 wordings:(id)arg2 checkTime:(BOOL)arg3;
- (BOOL)tryUpdateOpenImResource:(id)arg1 subType:(unsigned int)arg2 wordings:(id)arg3 checkTime:(BOOL)arg4;
- (id)GetOpenImAppidResource:(id)arg1 subType:(unsigned int)arg2;
- (id)openimAcctType:(id)arg1;
- (id)openimAcctType:(id)arg1 subType:(unsigned int)arg2;
- (unsigned int)openimFuncFlag:(id)arg1 subType:(unsigned int)arg2;
- (id)openimName:(id)arg1 subType:(unsigned int)arg2;
- (id)openimIconURL:(id)arg1 subType:(unsigned int)arg2;
- (id)openimIntroURL:(id)arg1 subType:(unsigned int)arg2;
- (id)openimCustomHeader:(id)arg1 subType:(unsigned int)arg2;
- (id)openimFuncTip:(id)arg1 subType:(unsigned int)arg2;
- (id)openimDescIconUrl:(id)arg1 subType:(unsigned int)arg2;
- (id)openimContactListName:(id)arg1;
- (id)openimContactListIconUrl:(id)arg1;
- (id)openimCardName:(id)arg1;
- (id)openimWording:(id)arg1 Appid:(id)arg2;
- (id)openimWording:(id)arg1 Appid:(id)arg2 subType:(unsigned int)arg3;
- (id)openimWordingQuanPin:(id)arg1 Appid:(id)arg2;
- (id)openimWordingQuanPin:(id)arg1 Appid:(id)arg2 subType:(unsigned int)arg3;
- (id)openimWordingShortPY:(id)arg1 Appid:(id)arg2;
- (id)openimWordingShortPY:(id)arg1 Appid:(id)arg2 subType:(unsigned int)arg3;
- (BOOL)updateOpenImResourceFromServer:(id)arg1 subType:(unsigned int)arg2 wordings:(id)arg3;
- (BOOL)doUpdateOpenImResourceFromServer:(id)arg1 subType:(unsigned int)arg2 wordings:(id)arg3 checkTime:(BOOL)arg4;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)getWeWorkOpenImAcctType;
- (id)getHardwareOpenImAcctType;
- (void).cxx_destruct;
@end
