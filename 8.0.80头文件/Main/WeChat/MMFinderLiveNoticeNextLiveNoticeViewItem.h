@interface MMFinderLiveNoticeNextLiveNoticeViewItem : NSObject <MMFinderLiveNoticeListViewItem>
{
    BOOL _isAuthor; // +0x8
    id <MMFinderLiveNoticeNextLiveNoticeViewItemDelegate> _delegate; // +0x10
    FinderLiveNextLiveNotificationInfo * _nextLiveNoticeInfo; // +0x18
    NSString * _finderUserName; // +0x20
}
- (Class)cellClass;
- (id)initWithNextLiveNoticeInfo:(id)arg1 isAuthor:(BOOL)arg2 finderUserName:(id)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)nextLiveNoticeInfo;
- (void)setNextLiveNoticeInfo:(id)arg1;
- (id)finderUserName;
- (BOOL)isAuthor;
- (void).cxx_destruct;
@end
