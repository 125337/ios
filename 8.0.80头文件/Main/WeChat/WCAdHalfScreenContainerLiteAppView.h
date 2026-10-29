@interface WCAdHalfScreenContainerLiteAppView : WCAdHalfScreenContainerBaseView <MMPageSheetAdapterDelegate>
{
    MMPageSheetAdapter * _sheetAdapter; // +0x8
}
- (id)initWithContainerInfo:(id)arg1;
- (void)initView;
- (id)getHalfScreenLiteAppViewController;
- (double)halfScreenContentWidth;
- (double)calcContentHeight;
- (void)showWithAnimated:(BOOL)arg1;
- (void)dismissWithAnimated:(BOOL)arg1;
- (void)ensureLiteAppHalfScreenDealloc;
- (void)pageSheetDidRotation:(id)arg1;
- (void)pageSheetDidClose:(id)arg1 isManualTrigger:(BOOL)arg2;
- (id)sheetAdapter;
- (void)setSheetAdapter:(id)arg1;
- (void).cxx_destruct;
@end
