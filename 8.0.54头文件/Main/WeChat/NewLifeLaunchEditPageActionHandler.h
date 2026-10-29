@interface NewLifeLaunchEditPageActionHandler : NewLifeActionHandler <NewLifeEditImageLogicControllerDelegate>
{
    NewLifeEditImageLogicController * _editImageLogicController; // +0x8
}
- (void)handleRequest:(id)arg1;
- (void)onNewLifeEditImageLogicControllerDidFinishEdit:(id)arg1;
- (id)editImageLogicController;
- (void)setEditImageLogicController:(id)arg1;
- (void).cxx_destruct;
@end

