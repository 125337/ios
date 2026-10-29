@interface MMStoreEmoticonDesignerPackBrowseViewController : MMStoreEmoticonDesignerPackBaseViewController
{
    BOOL _needStaticsInfo; // +0x68
    id <MMStoreEmotionDesignerPackBrowseViewControllerDelegate> _delegate; // +0x70
    NSString * _sdkRequestID; // +0x78
}
- (BOOL)shouldUseRichStyle;
- (BOOL)shouldFetchStaticsInfo;
- (BOOL)shouldRemoveExpiredPack;
- (BOOL)shouldShowDownloadView;
- (BOOL)needSDKReport;
- (unsigned long long)DetailVCEntryScene;
- (unsigned long long)DetailVCEntryExtrance;
- (unsigned long long)currentDesignerEmoticonPackTapEventType;
- (void)OnRewardStoreItem:(id)arg1;
- (void)onTapEmoticonWithItem:(id)arg1;
- (void)OnOpenDetailViewForItem:(id)arg1;
- (void)OnOpenEmojiHalfScreen:(id)arg1;
- (void)registerYReportSdk;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)needStaticsInfo;
- (void)setNeedStaticsInfo:(BOOL)arg1;
- (id)sdkRequestID;
- (void)setSdkRequestID:(id)arg1;
- (void).cxx_destruct;
@end

