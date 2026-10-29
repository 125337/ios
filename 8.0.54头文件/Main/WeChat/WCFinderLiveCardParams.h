@interface WCFinderLiveCardParams : NSObject
{
    MMFinderLiveContentVM * _livingContentVM; // +0x8
    WCFinderLiveNoticCardParams * _noticeParams; // +0x10
}
- (id)initWithLivingContentVM:(id)arg1 noticeParams:(id)arg2;
- (id)livingContentVM;
- (void)setLivingContentVM:(id)arg1;
- (id)noticeParams;
- (void)setNoticeParams:(id)arg1;
- (void).cxx_destruct;
@end

