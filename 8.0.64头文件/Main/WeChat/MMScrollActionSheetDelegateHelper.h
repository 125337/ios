@interface MMScrollActionSheetDelegateHelper : NSObject <MMScrollActionSheetDelegate>
{
    MMScrollActionSheet * _weakActionSheet; // +0x8
    id /* block */ _scrollActionSheetDidSelectItemCallback; // +0x10
}
- (void)setWeakActionSheet:(id)arg1;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)scrollActionSheet:(id)arg1 didSelecteDisableItem:(id)arg2;
- (void)scrollActionSheet:(id)arg1 didClickUrl:(id)arg2;
- (void)scrollActionSheetDidClickTop:(id)arg1;
- (void)scrollActionSheetDidClickTopPrivacy:(id)arg1;
- (void)scrollActionSheetDidAppeared:(id)arg1;
- (void)scrollActionSheetDidCancel:(id)arg1;
- (BOOL)scrollActionSheetShouldCancel:(id)arg1;
- (void)scrollActionSheetDidTapTransparent:(id)arg1;
- (void)scrollActionSheetDidScroll:(id)arg1;
- (void)scrollActionSheetWillDismiss:(id)arg1;
- (void)scrollActionSheet:(id)arg1 clickCustomBtn:(id)arg2;
- (id)weakActionSheet;
- (id /* block */)scrollActionSheetDidSelectItemCallback;
- (void)setScrollActionSheetDidSelectItemCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end
