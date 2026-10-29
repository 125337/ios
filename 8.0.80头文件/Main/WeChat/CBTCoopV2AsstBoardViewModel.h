@interface CBTCoopV2AsstBoardViewModel : CBTAsstBoardBaseViewModel
{
    BOOL _isMarkdownStyle; // +0x8
    BOOL _isHorizontalCardStyle; // +0x9
    BOOL _usesTransparentMarkdownBackground; // +0xa
    NSString * _cardType; // +0x10
    NSString * _coopV2ReportModuleIdentifier; // +0x18
    NSString * _coopV2ReportItemIdentifier; // +0x20
}
- (id)init;
- (id)initWithViewModel:(id)arg1 delegate:(id)arg2;
- (void)dealloc;
- (id)coopV2ReportCardTitle;
- (id)coopV2ReportCardSubtitle;
- (id)coopV2ReportCardDescription;
- (id)coopV2ReportContextAttributes;
- (void)fillHostTraceInfo:(id)arg1;
- (void)didFillHostInfo:(id)arg1;
- (BOOL)isMarkdownStyle;
- (void)setIsMarkdownStyle:(BOOL)arg1;
- (BOOL)isHorizontalCardStyle;
- (void)setIsHorizontalCardStyle:(BOOL)arg1;
- (id)cardType;
- (void)setCardType:(id)arg1;
- (BOOL)usesTransparentMarkdownBackground;
- (void)setUsesTransparentMarkdownBackground:(BOOL)arg1;
- (id)coopV2ReportModuleIdentifier;
- (void)setCoopV2ReportModuleIdentifier:(id)arg1;
- (id)coopV2ReportItemIdentifier;
- (void)setCoopV2ReportItemIdentifier:(id)arg1;
- (void).cxx_destruct;
@end
