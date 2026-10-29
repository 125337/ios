@interface BTCanvasMsgSectionData : BTMsgSectionData <BTCanvasItemCellViewModelDelegate>
{
    NSString * _canvasId; // +0x18
}
+ (BOOL)canCreateSectionDataWithMsgWrap:(id)arg1;
- (id)initWithMsgWrap:(id)arg1 sectionWidth:(double)arg2 displayMode:(unsigned int)arg3 delegate:(id)arg4;
- (void)initItemViewModelArr;
- (unsigned long long)sectionType;
- (long long)numberOfRowsInSection;
- (double)heightForRowInSection:(unsigned long long)arg1;
- (id)getCurrentWebviewViewController;
- (BOOL)isMsgViewControllerInForground;
- (void)onCanvasHeightChange:(id)arg1;
- (void)onCanvasItemClick:(id)arg1;
- (void)onAdCanvasViewTouchEnd:(id)arg1;
- (id)canvasId;
- (void).cxx_destruct;
@end

