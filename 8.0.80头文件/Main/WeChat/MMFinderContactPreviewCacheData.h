@interface MMFinderContactPreviewCacheData : NSObject
{
    WCFinderContactPreviewData * _previewData; // +0x8
    FinderLiveNoticeInfo * _noticeInfo; // +0x10
    FinderLiveNextLiveNotificationInfo * _nextLiveNotificationInfo; // +0x18
}
- (id)previewData;
- (void)setPreviewData:(id)arg1;
- (id)noticeInfo;
- (void)setNoticeInfo:(id)arg1;
- (id)nextLiveNotificationInfo;
- (void)setNextLiveNotificationInfo:(id)arg1;
- (void).cxx_destruct;
@end
