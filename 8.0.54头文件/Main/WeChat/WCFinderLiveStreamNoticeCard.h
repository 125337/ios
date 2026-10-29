@interface WCFinderLiveStreamNoticeCard : NSObject
{
    FinderLiveNoticeInfo * _noticeInfo; // +0x8
    WCFinderContact * _contact; // +0x10
}
+ (id)finderLiveStreamNoticeCardFrom:(id)arg1;
- (id)toFinderLiveStreamNoticeCard;
- (id)noticeInfo;
- (void)setNoticeInfo:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (void).cxx_destruct;
@end

