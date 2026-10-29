@interface NoteListFlutterViewController : MMFlutterViewController <VoiceTransViewDelegate, VoiceTransLogicObserver>
{
    NSMutableDictionary * _logicToPlaceholderLocalIdMap; // +0x70
    FavListPlugin * _notePlugin; // +0x78
    MMUIButton * _bottomWriteNoteButton; // +0x80
    VoiceTransView * _voiceTransView; // +0x88
    WeNoteFavoritesListNewEntryGuideLogic * _guideLogic; // +0x90
    NSMutableSet * _processingVoiceTransLogicSet; // +0x98
}
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)onTabDidAppear;
- (void)setBottomWriteNoteButtonHidden:(BOOL)arg1;
- (void)onTabDidDisappear;
- (void)setupBottomWriteNoteButton;
- (void)updateBottomWriteNoteButtonLayout;
- (void)onClickWriteNote;
- (void)handleBottomButtonLongPress:(id)arg1;
- (double)getAdditionalHeight;
- (BOOL)isKeyboardShowing;
- (id)getChatName;
- (id)getContent;
- (void)voiceTransEndWithResult:(id)arg1;
- (void)voiceTransEndWithLogic:(id)arg1;
- (void)onVoiceTransLogic:(id)arg1 didEnd:(int)arg2;
- (id)notePlugin;
- (void)setNotePlugin:(id)arg1;
- (id)bottomWriteNoteButton;
- (void)setBottomWriteNoteButton:(id)arg1;
- (id)voiceTransView;
- (void)setVoiceTransView:(id)arg1;
- (id)guideLogic;
- (void)setGuideLogic:(id)arg1;
- (id)processingVoiceTransLogicSet;
- (void)setProcessingVoiceTransLogicSet:(id)arg1;
- (void).cxx_destruct;
@end
