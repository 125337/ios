@interface CBTAsstBoardChatDetailViewModel : CBTAsstBoardBaseViewModel
{
    NSArray * _selectedUsernames; // +0x8
}
- (id)initWithSelectedUsernames:(id)arg1;
- (id)initWithViewModel:(id)arg1 delegate:(id)arg2;
- (BOOL)isSourceFromUser;
- (id)getCellReuseId;
- (double)mesureContentViewHeightWithWidth:(double)arg1;
- (BOOL)isForwardable;
- (BOOL)shouldReport;
- (BOOL)shouldUseUnsupportedPlaceholderForForwardHistory;
- (BOOL)shouldDeactivateInteractiveViews;
- (id)selectedUsernames;
- (void)setSelectedUsernames:(id)arg1;
- (void).cxx_destruct;
@end
