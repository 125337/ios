@interface CBTCoopV2WeAppViewModel : CBTCoopV2AsstBoardViewModel
{
    BOOL _isMCPDeveloperAgentCard; // +0x8
    unsigned int _actionType; // +0xc
    unsigned int _packageType; // +0x10
    NSString * _appID; // +0x18
    NSString * _pagePath; // +0x20
    NSString * _routePagePath; // +0x28
    NSString * _titleText; // +0x30
    NSString * _subtitleText; // +0x38
    NSString * _iconURL; // +0x40
    NSString * _followupMessage; // +0x48
    NSString * _recallSource; // +0x50
    NSString * _payload; // +0x58
    WAAgentResult * _weAppResult; // +0x60
    WAContact * _weAppContact; // +0x68
}
+ (BOOL)markPreRenderedIfNeededForKey:(id)arg1;
+ (BOOL)shouldSkipHandoffForTask:(id)arg1 handoff:(id)arg2;
+ (BOOL)isAgentCardScene:(unsigned long long)arg1;
+ (id)handoffIdFromPayload:(id)arg1;
+ (id)resolvedXMLFromCardWrap:(id)arg1 hitMMCardTag:(BOOL *)arg2;
+ (XmlReaderNode_t *)findAppMsgNodeFromRoot:(XmlReaderNode_t *)arg1;
+ (id)stringValueForChild:(const char *)arg1 node:(XmlReaderNode_t *)arg2 defaultValue:(id)arg3;
+ (id)firstNonEmptyString:(id)arg1;
- (id)initWithViewModel:(id)arg1 delegate:(id)arg2;
- (void)didFillHostInfo:(id)arg1;
- (id)getCellReuseId;
- (double)mesureContentViewHeightWithWidth:(double)arg1;
- (BOOL)canRenderWeAppCard;
- (double)cardWidthForCellWidth:(double)arg1;
- (double)cardHeight;
- (double)leadingSize;
- (double)contentInset;
- (double)leadingTextGap;
- (double)titleLineHeight;
- (double)subtitleLineHeight;
- (id)contentSignature;
- (id)copyableText;
- (id)coopV2ReportCardTitle;
- (id)coopV2ReportCardSubtitle;
- (id)copyContent;
- (BOOL)isForwardable;
- (BOOL)shouldUseUnsupportedPlaceholderForForwardHistory;
- (id)forwardHistoryTitleText;
- (id)buildForwardMessageWrapsWithContext:(id)arg1;
- (BOOL)showsActionButton;
- (void)openWeAppFromViewController:(id)arg1;
- (void)openWeAppOnlyFromViewController:(id)arg1;
- (void)triggerFollowup;
- (void)updateFromCardWrap:(id)arg1;
- (void)preRenderWeApp;
- (void)prerenderWithHandoffInfo:(id)arg1 pagePath:(id)arg2 handoffId:(id)arg3 appMsgItem:(id)arg4;
- (BOOL)updateFromXML:(id)arg1;
- (void)updateFromLegacyCardWrap:(id)arg1;
- (void)refreshWeAppDerivedData;
- (void)applyContact:(id)arg1 notify:(BOOL)arg2;
- (void)rebuildMessageWrap;
- (void)loadWeAppContactAsync;
- (id)appID;
- (void)setAppID:(id)arg1;
- (id)pagePath;
- (void)setPagePath:(id)arg1;
- (id)routePagePath;
- (void)setRoutePagePath:(id)arg1;
- (id)titleText;
- (void)setTitleText:(id)arg1;
- (id)subtitleText;
- (void)setSubtitleText:(id)arg1;
- (id)iconURL;
- (void)setIconURL:(id)arg1;
- (unsigned int)actionType;
- (void)setActionType:(unsigned int)arg1;
- (id)followupMessage;
- (void)setFollowupMessage:(id)arg1;
- (id)recallSource;
- (void)setRecallSource:(id)arg1;
- (id)payload;
- (void)setPayload:(id)arg1;
- (unsigned int)packageType;
- (void)setPackageType:(unsigned int)arg1;
- (id)weAppResult;
- (void)setWeAppResult:(id)arg1;
- (id)weAppContact;
- (void)setWeAppContact:(id)arg1;
- (BOOL)isMCPDeveloperAgentCard;
- (void)setIsMCPDeveloperAgentCard:(BOOL)arg1;
- (void).cxx_destruct;
@end
