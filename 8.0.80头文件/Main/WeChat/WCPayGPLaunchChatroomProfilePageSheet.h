@interface WCPayGPLaunchChatroomProfilePageSheet : NSObject <ChatroomProfileViewLayoutDelegate, MMPageSheetAdapterDelegate>
{
    id <WCPayGPLaunchChatroomProfilePageSheetDelegate> _delegate; // +0x8
    CContact * _contact; // +0x10
    NSString * _title; // +0x18
    double _minHeight; // +0x20
    MMPageSheetAdapter * _pageAdapter; // +0x28
    UIView * _pageSheetDetailView; // +0x30
    ChatroomProfileView * _profileView; // +0x38
}
- (id)initWithDelegate:(id)arg1 chatroomContact:(id)arg2 title:(id)arg3 minHeight:(double)arg4;
- (id)getAdapter;
- (BOOL)shouldSetupDetailViewContent;
- (void)setupDetailViewContent;
- (void)setupAdapter;
- (void)pageSheetWillAppear:(id)arg1;
- (void)pageSheetDidClose:(id)arg1 isManualTrigger:(BOOL)arg2;
- (double)profileViewHeadLength;
- (double)profileViewLeftRightMargin;
- (double)profileViewHeadInnerMargin;
- (double)profileViewRowHeight;
- (double)profileViewNameFontSize;
- (double)profileViewCellLeftMargin;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (double)minHeight;
- (void)setMinHeight:(double)arg1;
- (id)pageAdapter;
- (void)setPageAdapter:(id)arg1;
- (id)pageSheetDetailView;
- (void)setPageSheetDetailView:(id)arg1;
- (id)profileView;
- (void)setProfileView:(id)arg1;
- (void).cxx_destruct;
@end
