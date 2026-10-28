@interface WCPayOfflineDisableBlockTipsView : MMUIView
{
    id <WCPayOfflineDisableBlockTipsViewDelegate> _delegate; // +0x8
    WCPayOfflinePayDisableBlockLayer * _viewData; // +0x10
    WCPayOfflinePayDisableBlockLayerTextInfo * _curTextInfo; // +0x18
}
- (id)initTipsViewWithFrame:(CGRect)arg1 delegate:(id)arg2 viewData:(id)arg3;
- (void)setupContentView;
- (void)genCurLanguageTextInfo;
- (id)getCurLanguageMainWording;
- (id)getCurLanguageRemainderContent;
- (id)getCurLanguageBtnText;
- (void)confirmBtnClick;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)viewData;
- (void)setViewData:(id)arg1;
- (id)curTextInfo;
- (void)setCurTextInfo:(id)arg1;
- (void).cxx_destruct;
@end
