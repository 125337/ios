@interface WCAdHalfScreenFinderLiveNoticeView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>
{
    id <WCAdHalfScreenFinderLiveNoticeViewDelegate> _delegate; // +0x8
    WCAdFinderLiveNoticeInfo * _finderLiveNoticeInfo; // +0x10
}
- (id)initWithFinderLiveNoticeInfo:(id)arg1;
- (void)initSubview;
- (void)initCommonUI;
- (void)initDetailUI;
- (void)onClickPageSheetConfirmButton;
- (id)titleForPageSheetConfirmButton;
- (long long)styleForPageSheetConfirmButton;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)finderLiveNoticeInfo;
- (void)setFinderLiveNoticeInfo:(id)arg1;
- (void).cxx_destruct;
@end

