@interface IntelligentMsgImgConfigurationMgr : MMUserService <IWeVisModelResExt, MMServiceProtocol>
{
    NSArray * m_arrFigureClassificationLabelId; // +0x8
    NSArray * m_arrFaceAlbumClassificationLabelId; // +0x10
    BOOL m_isEnterBackground; // +0x18
    BOOL m_isFaceFeatureHardwareAcceleration; // +0x19
    BOOL m_isFaceFeatureL2Norm; // +0x1a
}
+ (id)getSimpleMsgFrom:(id)arg1;
+ (id)getMsgFrom:(id)arg1;
+ (id)getMsgFromFTSMsgItem:(id)arg1;
- (id)init;
- (void)initData;
- (void)registerMethod;
- (void)removeNotificationObservers;
- (void)dealloc;
- (id)getArrFaceAlbumClassificationLabelId;
- (id)getArrFigureClassificationLabelId;
- (void)initIntelligentMsgData;
- (id)convertStringArrayToNumberArray:(id)arg1;
- (id)getSearchBarPlaceholder;
- (BOOL)checkIntelligentMsgModelFileExit;
- (BOOL)isIntelligentMsgImgEffective;
- (BOOL)isIntelligentMsgImgSwitchOpen;
- (void)setIsIntelligentMsgImgTurnOn:(BOOL)arg1;
- (void)asynModifyIntelligentMsgImgTurnOn:(BOOL)arg1;
- (BOOL)isIntelligentMsgImgTurnOn;
- (BOOL)isIntelligentMsgImgSimilarWordAbtestSwitchOpen;
- (BOOL)isSupportIntelligentGPU;
- (BOOL)isIntelligentGPUAbtestSwitchOpen;
- (BOOL)isIntelligentOCRDataReportAbtestSwitchOpen;
- (BOOL)isIntelligentFaceClusterDataReportAbtestSwitchOpen;
- (BOOL)isSupportIntelligentNPU;
- (BOOL)isIntelligentNPUAbtestSwitchOpen;
- (BOOL)isSupportIntelligentAMX;
- (BOOL)isIntelligentAMXAbtestSwitchOpen;
- (BOOL)isFaceFeatureHardwareAcceleration;
- (BOOL)isFaceFeatureL2Norm;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)reportIntelligentMsgEveryDay;
- (void)doReportIntelligentMsgEveryDay;
- (id)getIntelligentMsgEveryDayId;
- (void)onModelUpdate:(id)arg1;
- (void)onModelListWillUpdate:(id)arg1;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (BOOL)isEnterBackground;
- (void).cxx_destruct;
@end

