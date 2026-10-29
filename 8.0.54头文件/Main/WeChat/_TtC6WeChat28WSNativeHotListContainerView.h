@interface _TtC6WeChat28WSNativeHotListContainerView : UIView <WSHotListTeachView, UIScrollViewDelegate, UITableViewDelegate>
{
     isVisable; // +0x8
     delegate; // +0x10
     vc; // +0x18
     settingVC; // +0x20
     hasAppear; // +0x28
     $__lazy_storage_$_session; // +0x30
     tableView; // +0x38
     $__lazy_storage_$_settingButton; // +0x40
     listAdapter; // +0x48
     $__lazy_storage_$_dataSource; // +0x50
}
- (BOOL)isVisable;
- (void)setIsVisable:(BOOL)arg1;
- (id)initWithVc:(id)arg1 delegate:(id)arg2;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)applicationDidBecomeActive;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)showDynamicViewAnimated:(BOOL)arg1;
- (void)onViewAppear;
- (void)onPopOrDismissed;
- (id)initWithFrame:(CGRect)arg1;
- (void).cxx_destruct;
@end

