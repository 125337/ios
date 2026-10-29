@interface WAJSContextPlugin_NativeViews : WAJSContextPluginBase <WABaseViewDelegate, WATouchBaseViewDelegate, MoveWithTouchAlgorithmDelegate, UIScrollViewDelegate>
{
    BOOL _dragging; // +0x8
}
- (void)insertBaseView:(id)arg1 block:(id /* block */)arg2;
- (void)updateBaseView:(id)arg1 block:(id /* block */)arg2;
- (void)removeBaseView:(id)arg1 block:(id /* block */)arg2;
- (void)insertScrollView:(id)arg1 block:(id /* block */)arg2;
- (void)updateScrollView:(id)arg1 block:(id /* block */)arg2;
- (void)animateCoverViewWithParam:(id)arg1 block:(id /* block */)arg2;
- (id)rootViewsForDic:(id)arg1;
- (id)rootViewsForIndependent;
- (id)rootViewsForDest:(long long)arg1;
- (void)onButtonClick:(id)arg1;
- (void)onDragBegin:(id)arg1 canvas:(id)arg2;
- (void)onDragMove:(id)arg1 canvas:(id)arg2;
- (void)onDragEnd:(id)arg1 canvas:(id)arg2;
- (void)onDragCancel:(id)arg1 canvas:(id)arg2;
- (void)sendDragEventForViewForView:(id)arg1 touches:(id)arg2 stage:(id)arg3;
- (void)onTouchBegin:(id)arg1 canvas:(id)arg2;
- (void)onTouchMove:(id)arg1 canvas:(id)arg2;
- (void)onTouchEnd:(id)arg1 canvas:(id)arg2;
- (void)onTouchCancel:(id)arg1 canvas:(id)arg2;
- (void)sendJSEventWithEventName:(id)arg1 param:(id)arg2 baseView:(id)arg3;
- (void)getFileData:(id)arg1 referrerPolicyType:(unsigned long long)arg2 withCompletionHandler:(id /* block */)arg3;
- (id)getFileData:(id)arg1;
- (id)decodeBase64String:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (BOOL)dragging;
- (void)setDragging:(BOOL)arg1;
@end

