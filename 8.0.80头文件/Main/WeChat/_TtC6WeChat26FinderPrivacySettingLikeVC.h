@interface _TtC6WeChat26FinderPrivacySettingLikeVC : MMUIViewController <WCFinderFeedBaseViewControllerProtocol>
{
    _TtC6WeChat26FinderPrivacySettingLikeVM * vm; // +0x8
     cancellables; // +0x10
     likeImg; // +0x18
     $__lazy_storage_$_shieldHisLikedView; // +0x28
     $__lazy_storage_$_shieldMyLikedView; // +0x30
     $__lazy_storage_$_tableViewInfo; // +0x38
     $__lazy_storage_$_titleTextView; // +0x40
}
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)vm;
- (void)setVm:(id)arg1;
- (id)initWithVm:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)viewDidLoad;
- (void)switchShieldHisLiked;
- (void)switchShieldMyLiked;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void).cxx_destruct;
@end
