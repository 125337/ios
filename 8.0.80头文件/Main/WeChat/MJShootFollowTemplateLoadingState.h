@interface MJShootFollowTemplateLoadingState : NSObject
{
    BOOL _hasShowingLoadingView; // +0x8
    BOOL _hasLoaded; // +0x9
    BOOL _didSwitchedTemplate; // +0xa
    MMCameraTemplateItem * _bindTemplateItem; // +0x10
}
- (id)bindTemplateItem;
- (void)setBindTemplateItem:(id)arg1;
- (BOOL)hasShowingLoadingView;
- (void)setHasShowingLoadingView:(BOOL)arg1;
- (BOOL)hasLoaded;
- (void)setHasLoaded:(BOOL)arg1;
- (BOOL)didSwitchedTemplate;
- (void)setDidSwitchedTemplate:(BOOL)arg1;
- (void).cxx_destruct;
@end
