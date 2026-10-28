@interface MMFinderLiveFetchMoneyAnnouncementCell : WCTableViewNormalCellManager <MMFinderLiveFetchMoneyAnnouncementViewDelegate>
{
    MMFinderLiveFetchMoneyAnnouncementView * _announcementView; // +0x8
    id <MMFinderLiveFetchMoneyAnnouncementCellDelegate> _delegate; // +0x10
}
- (id)initWithAnnouncement:(id)arg1 delegate:(id)arg2 customHeight:(double)arg3 width:(double)arg4;
- (void)initCellConfig;
- (void)layoutUI;
- (void)clickMMFinderLiveFetchMoneyAnnouncementView:(id)arg1;
- (id)announcementView;
- (void)setAnnouncementView:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
