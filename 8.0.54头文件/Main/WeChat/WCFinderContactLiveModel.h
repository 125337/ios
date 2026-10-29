@interface WCFinderContactLiveModel : NSObject
{
    unsigned long long _liveStatus; // +0x8
    FinderLiveNoticeInfo * _noticeInfo; // +0x10
    FinderLiveNoticeListInfo * _noticeList; // +0x18
    FinderLiveInfo * _liveInfo; // +0x20
    WCFinderDataItem * _dataItem; // +0x28
}
- (unsigned long long)liveStatus;
- (void)setLiveStatus:(unsigned long long)arg1;
- (id)noticeInfo;
- (void)setNoticeInfo:(id)arg1;
- (id)noticeList;
- (void)setNoticeList:(id)arg1;
- (id)liveInfo;
- (void)setLiveInfo:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (void).cxx_destruct;
@end

