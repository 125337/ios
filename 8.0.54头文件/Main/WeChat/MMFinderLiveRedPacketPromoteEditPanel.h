@interface MMFinderLiveRedPacketPromoteEditPanel : MMFinderLiveLinkPromoteEditPanel
{
    id /* block */ _completion; // +0x8
    NSString * _finderUserName; // +0x10
}
- (void)setupPageSheetConfig;
- (id)getCurrentLeftButton;
- (void)leftButtonAction;
- (id)titleText;
- (id)validUriPrefixes;
- (void)onLinkConfirmed:(id)arg1;
- (void)fetchRedPacketInfoForLink:(id)arg1 completion:(id /* block */)arg2;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (id)finderUserName;
- (void)setFinderUserName:(id)arg1;
- (void).cxx_destruct;
@end

