@interface MMFinderLivePromoteManageLogicNoticeCreationContext : NSObject
{
    BOOL _showNoticeListAfterCreation; // +0x8
    id <MMLiveLoadIndicating> _noticeListLoadIndicator; // +0x10
}
- (BOOL)showNoticeListAfterCreation;
- (void)setShowNoticeListAfterCreation:(BOOL)arg1;
- (id)noticeListLoadIndicator;
- (void)setNoticeListLoadIndicator:(id)arg1;
- (void).cxx_destruct;
@end
