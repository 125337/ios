@interface WCFinderLiveNoticeCellViewModel : NSObject <WCFinderLiveExt, WCFinderContactExt>
{
    BOOL _shouldShowNoticeInfo; // +0x8
    BOOL _hasShowFlag; // +0x9
    FinderLiveNoticeInfo * _noticeInfo; // +0x10
    NSString * _noticeTitle; // +0x18
    NSString * _username; // +0x20
    id <WCFinderLiveNoticeCellViewModelDelegate> _delegate; // +0x28
}
- (id)initWithContact:(id)arg1;
- (id)initWithFinderUsername:(id)arg1 liveNoticeInfo:(id)arg2;
- (id)initWithFinderUsername:(id)arg1 liveNoticeInfo:(id)arg2 enableUsernameExtension:(BOOL)arg3;
- (id)copy;
- (unsigned long long)reserveState;
- (void)setNoticeInfo:(id)arg1;
- (void)updateLiveNoticeInfo:(id)arg1;
- (BOOL)shouldShowNoticeInfo;
- (void)onFinderLiveNoticeWithNoticeId:(id)arg1 reserveStateChanged:(unsigned long long)arg2;
- (void)onFinderLiveNoticeWithNoticeId:(id)arg1 hasPurchaseStateChanged:(BOOL)arg2;
- (void)onFinderLiveNoticeForFinderUsername:(id)arg1 isTop:(BOOL)arg2 noticeId:(id)arg3;
- (void)onLiveNoticeReserveStateChanged:(id)arg1 info:(id)arg2 error:(id)arg3;
- (BOOL)isNoticeInfoStateChange:(id)arg1;
- (void)onFinderContactLiveUpdateWithNoticeInfo:(id)arg1 noticeList:(id)arg2 commentScene:(int)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)noticeInfo;
- (id)noticeTitle;
- (void)setNoticeTitle:(id)arg1;
- (void)setShouldShowNoticeInfo:(BOOL)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)hasShowFlag;
- (void)setHasShowFlag:(BOOL)arg1;
- (void).cxx_destruct;
@end

