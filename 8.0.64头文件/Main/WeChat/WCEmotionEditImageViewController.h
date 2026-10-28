@interface WCEmotionEditImageViewController : WCEditImageViewController
{
    BOOL _multiSelectStyle; // +0x70
    WCEditVideoPushPopTransition * _customTransitionDelegate; // +0x78
    NSString * _finishWording; // +0x80
}
- (void)showEditImageViewOn;
- (void)setupTransitioningDelegate;
- (void)setFinishWording:(id)arg1;
- (void)dealSelectResult:(id)arg1;
- (BOOL)multiSelectStyle;
- (void)setMultiSelectStyle:(BOOL)arg1;
- (id)customTransitionDelegate;
- (void)setCustomTransitionDelegate:(id)arg1;
- (id)finishWording;
- (void).cxx_destruct;
@end
