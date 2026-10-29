@interface WeNoteFavoritesListNewEntryGuideLogic : NSObject
{
    UIView * _associateView; // +0x8
    WeNoteFavoritesListNewEntryGuideView * _guideView; // +0x10
    UIViewPropertyAnimator * _animator; // +0x18
    NSString * _text; // +0x20
}
- (id)initWithAssociateView:(id)arg1 text:(id)arg2;
- (void)setupGuideView;
- (void)showGuideView;
- (void)hideGuideView;
- (void)markUserHasLongPressed;
- (BOOL)hasUserLongPressed;
- (id)mmkvKeyForCurrentUser;
- (id)associateView;
- (void)setAssociateView:(id)arg1;
- (id)guideView;
- (void)setGuideView:(id)arg1;
- (id)animator;
- (void)setAnimator:(id)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (void).cxx_destruct;
@end
