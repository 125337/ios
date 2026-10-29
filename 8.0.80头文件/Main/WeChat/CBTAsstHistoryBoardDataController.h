@interface CBTAsstHistoryBoardDataController : CBTAsstBoardDataController
{
    NSData * _initialBubbleExtraInfo; // +0x8
}
- (BOOL)shouldForceCloudHistoryLoad;
- (void)loadInitialPageWithCompletion:(id /* block */)arg1;
- (BOOL)shouldHideDeleteMenuItemForCell:(id)arg1;
- (id)initialBubbleExtraInfo;
- (void)setInitialBubbleExtraInfo:(id)arg1;
- (void).cxx_destruct;
@end
