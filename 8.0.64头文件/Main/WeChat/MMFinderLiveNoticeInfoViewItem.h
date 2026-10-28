@interface MMFinderLiveNoticeInfoViewItem : NSObject <WCFinderLiveExt, MMFinderLiveNoticeListViewItem>
{
    BOOL _isAuthor; // +0x8
    id <MMFinderLiveNoticeInfoViewItemDelegate> _delegate; // +0x10
    FinderLiveNoticeInfo * _noticeInfo; // +0x18
    NSString * _finderUserName; // +0x20
}
- (Class)cellClass;
- (id)initWithNoticeInfo:(id)arg1 isAuthor:(BOOL)arg2 finderUserName:(id)arg3;
- (void)didUpdate;
- (void)onFinderLiveNoticeWithNoticeId:(id)arg1 reserveStateChanged:(unsigned long long)arg2;
- (void)onFinderLiveNoticeWithNoticeId:(id)arg1 hasPurchaseStateChanged:(BOOL)arg2;
- (void)onFinderLiveNoticeForFinderUsername:(id)arg1 isTop:(BOOL)arg2 noticeId:(id)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)noticeInfo;
- (id)finderUserName;
- (BOOL)isAuthor;
- (void).cxx_destruct;
@end
