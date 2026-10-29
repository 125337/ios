@interface WCFinderMagicAnimationLogic : NSObject <_TtP6WeChat19IMagicEmojiDelegate_, _TtP6WeChat10IMEHandler_>
{
    UIView * _containerView; // +0x8
    NSMutableDictionary * _magicAnimationMetaDict; // +0x10
    id /* block */ _visibleMetaFilter; // +0x18
}
- (id)initWithContainerView:(id)arg1;
- (void)preloadMagicAnimationBiz;
- (void)setupMagicAnimationBizIfNeed;
- (void)destroyMagicAnimationBiz;
- (void)emitMagicAnimationWithEmojiID:(id)arg1 animStyle:(unsigned long long)arg2 frame:(CGRect)arg3;
- (id)emojiKeyWithAnimStyle:(unsigned long long)arg1;
- (void)dealloc;
- (id)getMagicEmojiViewHolder;
- (id)getMetaByID:(id)arg1 needFrame:(BOOL)arg2;
- (id)getMagicEmojiBackgroudParentView;
- (id)getVisibleMetaDict:(BOOL)arg1;
- (void)shakeAllVisiableViews:(BOOL)arg1;
- (id)onGetMetaWithId:(id)arg1 needFrame:(BOOL)arg2;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)magicAnimationMetaDict;
- (void)setMagicAnimationMetaDict:(id)arg1;
- (id /* block */)visibleMetaFilter;
- (void)setVisibleMetaFilter:(id /* block */)arg1;
- (void).cxx_destruct;
@end

