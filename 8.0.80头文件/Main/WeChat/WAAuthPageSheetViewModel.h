@interface WAAuthPageSheetViewModel : NSObject
{
    BOOL _disableAcceptButton; // +0x8
    BOOL _disableDismissWhenAccept; // +0x9
    BOOL _hideAuthTitle; // +0xa
    BOOL _isAgentMode; // +0xb
    WAAuthorizeSheetInfo * _infoModel; // +0x10
    id <IWAAuthorizePage> _pageSheet; // +0x18
    id /* block */ _acceptButtonUpdateAction; // +0x20
    id /* block */ _showNeedAcceptProtocolAnimation; // +0x28
    UIFont * _descTitleFont; // +0x30
    UIFont * _descSubTitleFont; // +0x38
    UIColor * _descBackgroundColor; // +0x40
    double _descHorizontalPadding; // +0x48
    double _listItemHorizontalPadding; // +0x50
    double _agentBorrowedContentWidth; // +0x58
}
- (id)init;
- (id)initWithPageSheet:(id)arg1;
- (id)initWithInfoModel:(id)arg1 pageSheet:(id)arg2;
- (BOOL)checkCanAccept;
- (id)resultInfo;
- (id)infoModel;
- (void)setInfoModel:(id)arg1;
- (id)pageSheet;
- (void)setPageSheet:(id)arg1;
- (BOOL)disableAcceptButton;
- (void)setDisableAcceptButton:(BOOL)arg1;
- (id /* block */)acceptButtonUpdateAction;
- (void)setAcceptButtonUpdateAction:(id /* block */)arg1;
- (id /* block */)showNeedAcceptProtocolAnimation;
- (void)setShowNeedAcceptProtocolAnimation:(id /* block */)arg1;
- (BOOL)disableDismissWhenAccept;
- (void)setDisableDismissWhenAccept:(BOOL)arg1;
- (id)descTitleFont;
- (void)setDescTitleFont:(id)arg1;
- (id)descSubTitleFont;
- (void)setDescSubTitleFont:(id)arg1;
- (id)descBackgroundColor;
- (void)setDescBackgroundColor:(id)arg1;
- (BOOL)hideAuthTitle;
- (void)setHideAuthTitle:(BOOL)arg1;
- (double)descHorizontalPadding;
- (void)setDescHorizontalPadding:(double)arg1;
- (double)listItemHorizontalPadding;
- (void)setListItemHorizontalPadding:(double)arg1;
- (BOOL)isAgentMode;
- (void)setIsAgentMode:(BOOL)arg1;
- (double)agentBorrowedContentWidth;
- (void)setAgentBorrowedContentWidth:(double)arg1;
- (void).cxx_destruct;
@end
