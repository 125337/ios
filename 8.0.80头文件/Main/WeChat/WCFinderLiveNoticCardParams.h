@interface WCFinderLiveNoticCardParams : NSObject
{
    BOOL _isAuthor; // +0x8
    NSString * _anchorUsername; // +0x10
    FinderLiveNoticeInfo * _noticeInfo; // +0x18
    FinderLiveNoticeListInfo * _noticeList; // +0x20
    FinderLiveNextLiveNotificationInfo * _nextLiveNoticeInfo; // +0x28
    unsigned long long _noticeOpenScene; // +0x30
}
+ (id)paramsWithIsAuthor:(BOOL)arg1 noticeInfo:(id)arg2 noticeList:(id)arg3 nextLiveNoticeInfo:(id)arg4 anchorUsername:(id)arg5;
+ (id)fromNoticeList:(id)arg1 isAuthor:(BOOL)arg2 anchorUsername:(id)arg3;
- (BOOL)shouldShowNoticeCard;
- (BOOL)isAuthor;
- (void)setIsAuthor:(BOOL)arg1;
- (id)anchorUsername;
- (void)setAnchorUsername:(id)arg1;
- (id)noticeInfo;
- (void)setNoticeInfo:(id)arg1;
- (id)noticeList;
- (void)setNoticeList:(id)arg1;
- (id)nextLiveNoticeInfo;
- (void)setNextLiveNoticeInfo:(id)arg1;
- (unsigned long long)noticeOpenScene;
- (void)setNoticeOpenScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
