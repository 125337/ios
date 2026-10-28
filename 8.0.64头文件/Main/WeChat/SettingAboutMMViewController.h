@interface SettingAboutMMViewController : MMUIViewController <MMNewTipsMgrExt, TransitioningAnimationDelegate>
{
    MMTableViewInfo * m_tableViewInfo; // +0x70
    UILabel * m_labelProduct; // +0x78
    BOOL m_bFullVersion; // +0x80
    MMUILabel * _labelVersion; // +0x88
}
- (id)init;
- (void)reloadData;
- (id)tableFooterViewOnUpdate:(id)arg1 urlStr:(id)arg2;
- (void)updateProduct;
- (id)appstoreVersion;
- (id)getHeaderView;
- (void)viewDidLayoutSubviews;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (double)maxWidthForBottomViews;
- (void)addBottomView;
- (id)copyrightLabel;
- (id)bottomButtonWithString:(id)arg1;
- (id)getICPAttrContentWithLineHeight:(double)arg1 descender:(double)arg2 string:(id)arg3 darkMode:(BOOL)arg4;
- (id)genFooterButtonListViewWithMaxWidth:(double)arg1;
- (void)showAgreementWebviewWithUrl:(id)arg1;
- (void)showKFPhoneNumActionSheetWithConfig:(int)arg1;
- (void)showRate;
- (void)showSystemNotice;
- (void)showWhatsNewEnd;
- (void)showUpdate;
- (void)showWhatsNewWillEnd;
- (void)viewDidAppear:(BOOL)arg1;
- (void)onTipsShowInfoChangeWithPathKey:(id)arg1;
- (void)openICPWebView;
- (void)openAlgorithmWebView;
- (void).cxx_destruct;
@end
