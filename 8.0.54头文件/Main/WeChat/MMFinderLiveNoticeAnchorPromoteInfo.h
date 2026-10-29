@interface MMFinderLiveNoticeAnchorPromoteInfo : MMFinderLiveAnchorPromoteInfo
{
    FinderLiveNoticeInfo * _noticeInfo; // +0x30
}
+ (id)createNoticeAnchorPromoteInfoFrom:(id)arg1;
- (id)promoteKey;
- (id)noticeInfo;
- (void)setNoticeInfo:(id)arg1;
- (void).cxx_destruct;
@end

