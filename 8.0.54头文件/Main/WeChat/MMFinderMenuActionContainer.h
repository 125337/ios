@interface MMFinderMenuActionContainer : UIView <MMFinderForwardButtonDelegate, MMMenuControllerExt>
{
    id <MMFinderMenuActionDelegate> _delegate; // +0x8
    MMScrollActionSheet * _actionSheet; // +0x10
    NSMutableArray * _contacts; // +0x18
    UIScrollView * _scrollView; // +0x20
    unsigned long long _bizScene; // +0x28
    long long _longpressedIndex; // +0x30
}
- (id)initWithFrame:(CGRect)arg1 contacts:(id)arg2 bizScene:(unsigned long long)arg3;
- (void)initView;
- (id)createNameLabel:(id)arg1;
- (void)layoutSubviews;
- (void)onItemClick:(id)arg1;
- (void)onLongpress:(long long)arg1;
- (void)onMenuControllerWillHide;
- (void)onDelete:(id)arg1;
- (void)resetContacts:(long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)actionSheet;
- (void)setActionSheet:(id)arg1;
- (id)contacts;
- (void)setContacts:(id)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (unsigned long long)bizScene;
- (void)setBizScene:(unsigned long long)arg1;
- (long long)longpressedIndex;
- (void)setLongpressedIndex:(long long)arg1;
- (void).cxx_destruct;
@end

