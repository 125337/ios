@interface NewLifePostEventClickedHandler : NewLifeActionHandler <WCActionSheetDelegate, WCFinderCreateEvenDelegate, WCFinderSearchEventViewControllerDelegate, WCFinderEventPosterViewControllerDelegate>
{
    FinderEventInfo * _selectedEvent; // +0x8
}
- (void)handleRequest:(id)arg1;
- (void)endAction;
- (void)actionSheetCancel:(id)arg1;
- (void)createEventVC:(id)arg1 createEventSuccess:(id)arg2;
- (void)searchEventViewController:(id)arg1 didSelectEvent:(id)arg2;
- (void)eventPosterViewController:(id)arg1 didExitEvent:(id)arg2;
- (void)eventPosterViewController:(id)arg1 didSelectEvent:(id)arg2;
- (id)selectedEvent;
- (void)setSelectedEvent:(id)arg1;
- (void).cxx_destruct;
@end

