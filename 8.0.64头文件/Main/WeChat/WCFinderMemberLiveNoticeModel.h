@interface WCFinderMemberLiveNoticeModel : NSObject
{
    FinderLiveNoticeInfo * _noticeInfo; // +0x8
    FinderLiveNoticeListInfo * _noticeList; // +0x10
}
- (id)noticeInfo;
- (void)setNoticeInfo:(id)arg1;
- (id)noticeList;
- (void)setNoticeList:(id)arg1;
- (void).cxx_destruct;
@end
