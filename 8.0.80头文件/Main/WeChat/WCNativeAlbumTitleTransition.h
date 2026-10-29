@interface WCNativeAlbumTitleTransition : NSObject
{
    UIView * _titleView; // +0x8
    UIView * _containerView; // +0x10
    UIView * _snapshot; // +0x18
    NSArray * _titleTransitions; // +0x20
    BOOL _began; // +0x28
    BOOL _restored; // +0x29
}
- (id)initWithTitleView:(id)arg1 containerView:(id)arg2;
- (id)initWithTitleViews:(id)arg1 containerView:(id)arg2;
- (void)begin;
- (void)fadeOut;
- (void)restore;
- (void)dealloc;
- (void).cxx_destruct;
@end
