@interface CBTCoopV2LiteAppViewModel : CBTCoopV2AsstBoardViewModel
{
    BOOL _hasPresentedLiteAppContent; // +0x8
    NSString * _liteAppResourceID; // +0x10
    NSString * _liteAppTitleText; // +0x18
    NSString * _targetLiteAppID; // +0x20
    NSString * _targetLiteAppPage; // +0x28
    NSString * _targetLiteAppQuery; // +0x30
    NSString * _renderLiteAppID; // +0x38
    NSString * _renderLiteAppPage; // +0x40
    NSString * _renderLiteAppQuery; // +0x48
    NSString * _minVersion; // +0x50
    NSString * _targetTitle; // +0x58
    NSNumber * _clientBottomMargin; // +0x60
    NSNumber * _liteAppUpperMargin; // +0x68
    double _liteAppContentHeight; // +0x70
    id /* block */ _liteAppInsertionCompleted; // +0x78
    NSString * _targetH5URL; // +0x80
    NSString * _targetWeAppID; // +0x88
    NSString * _targetWeAppPage; // +0x90
    NSString * _targetWeAppPlayLoad; // +0x98
    NSString * _debugMode; // +0xa0
}
+ (id)launchQueryForTarget:(id)arg1 serverQuery:(id)arg2;
+ (XmlReaderNode_t *)findAppMsgNodeFromRoot:(XmlReaderNode_t *)arg1;
+ (id)stringValueForChild:(const char *)arg1 node:(XmlReaderNode_t *)arg2;
+ (double)heightForText:(id)arg1 font:(id)arg2 width:(double)arg3;
+ (id)liteAppUplinkOriginFromDispatchPayload:(id)arg1 hostViewModel:(id)arg2;
- (id)initWithViewModel:(id)arg1 delegate:(id)arg2;
- (double)mesureContentViewHeightWithWidth:(double)arg1;
- (id)getCellReuseId;
- (id)copyableText;
- (double)bubbleWidthForCellWidth:(double)arg1;
- (double)titleBottomMargin;
- (double)bubbleHeightForCellWidth:(double)arg1;
- (double)liteAppViewWidthForCellWidth:(double)arg1;
- (double)liteAppViewHeightForCellWidth:(double)arg1;
- (double)titleHeightForCellWidth:(double)arg1;
- (BOOL)usesExpandRevealAnimation;
- (void)didInsertIntoTableView;
- (double)fontScaleFactor;
- (id)contentSignature;
- (BOOL)shouldShowForwardMenuItem;
- (BOOL)shouldUseUnsupportedPlaceholderForForwardHistory;
- (id)coopV2ReportCardTitle;
- (id)coopV2ReportCardSubtitle;
- (id)copyContent;
- (id)forwardHistoryTitleText;
- (BOOL)canJumpToTarget;
- (void)openTargetFromViewController:(id)arg1;
- (void)openTargetLiteAppFromViewController:(id)arg1;
- (void)openTargetH5;
- (void)openTargetWeApp;
- (void)updateLiteAppDataFromCardWrap:(id)arg1;
- (id)liteAppResourceID;
- (void)setLiteAppResourceID:(id)arg1;
- (id)liteAppTitleText;
- (void)setLiteAppTitleText:(id)arg1;
- (id)targetLiteAppID;
- (void)setTargetLiteAppID:(id)arg1;
- (id)targetLiteAppPage;
- (void)setTargetLiteAppPage:(id)arg1;
- (id)targetLiteAppQuery;
- (void)setTargetLiteAppQuery:(id)arg1;
- (id)renderLiteAppID;
- (void)setRenderLiteAppID:(id)arg1;
- (id)renderLiteAppPage;
- (void)setRenderLiteAppPage:(id)arg1;
- (id)renderLiteAppQuery;
- (void)setRenderLiteAppQuery:(id)arg1;
- (id)minVersion;
- (void)setMinVersion:(id)arg1;
- (id)targetTitle;
- (void)setTargetTitle:(id)arg1;
- (id)clientBottomMargin;
- (void)setClientBottomMargin:(id)arg1;
- (id)liteAppUpperMargin;
- (void)setLiteAppUpperMargin:(id)arg1;
- (double)liteAppContentHeight;
- (void)setLiteAppContentHeight:(double)arg1;
- (BOOL)hasPresentedLiteAppContent;
- (void)setHasPresentedLiteAppContent:(BOOL)arg1;
- (id /* block */)liteAppInsertionCompleted;
- (void)setLiteAppInsertionCompleted:(id /* block */)arg1;
- (id)targetH5URL;
- (void)setTargetH5URL:(id)arg1;
- (id)targetWeAppID;
- (void)setTargetWeAppID:(id)arg1;
- (id)targetWeAppPage;
- (void)setTargetWeAppPage:(id)arg1;
- (id)targetWeAppPlayLoad;
- (void)setTargetWeAppPlayLoad:(id)arg1;
- (id)debugMode;
- (void)setDebugMode:(id)arg1;
- (void).cxx_destruct;
@end
