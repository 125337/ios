@interface FavNoteSelectionToolbarProxyPlugin : NSObject <SelectionToolbarProxyHostApi, MMFlutterPlugin>
{
    UIViewController * _parentViewController; // +0x8
    UIView * _flutterView; // +0x10
    SelectionToolbarProxyFlutterApi * _flutterApi; // +0x18
    FavNoteSelectionToolbarView * _selectionToolbarView; // +0x20
}
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)requestShowSelectionToolbarMenuItems:(id)arg1 position:(id)arg2 error:(id *)arg3;
- (void)requestHideSelectionToolbarWithError:(id *)arg1;
- (void)dismissSelectionToolbar;
- (void)onSelectionToolbarItemSelected:(id)arg1;
- (void)onSelectionToolbarDismissed;
- (void)setParentViewController:(id)arg1 flutterView:(id)arg2;
- (id)flutterApi;
- (id)parentViewController;
- (void)setParentViewController:(id)arg1;
- (id)flutterView;
- (void)setFlutterView:(id)arg1;
- (void)setFlutterApi:(id)arg1;
- (id)selectionToolbarView;
- (void)setSelectionToolbarView:(id)arg1;
- (void).cxx_destruct;
@end
