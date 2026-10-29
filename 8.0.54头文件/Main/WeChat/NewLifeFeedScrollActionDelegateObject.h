@interface NewLifeFeedScrollActionDelegateObject : NSObject <MMScrollActionSheetDelegate, WCMomentsScrollActionSheetBizOriginalArticleRowViewDelegate>
{
    NewLifeScrollActionSheet * _actionSheet; // +0x8
    NSString * _mpUrl; // +0x10
}
- (void)scrollActionSheetDidCancel:(id)arg1;
- (void)scrollActionSheetDidTapTransparent:(id)arg1;
- (void)relayoutScrollSheet;
- (void)originalArticleRowViewDidClick:(id)arg1;
- (id)actionSheet;
- (void)setActionSheet:(id)arg1;
- (id)mpUrl;
- (void)setMpUrl:(id)arg1;
- (void).cxx_destruct;
@end

