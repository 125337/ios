@interface EcsMagicCardInstance : NSObject
{
    _TtC25MagicCardStarterProtocols22MagicCardStarterHandle * _starterHandle; // +0x8
    NSString * _frameSetName; // +0x10
}
- (void)showMagicCardInContainerView:(id)arg1 viewController:(id)arg2 bizName:(id)arg3 path:(id)arg4 frameSetName:(id)arg5 frameSetData:(id)arg6;
- (void)stopMagicCard;
- (void)dealloc;
- (void)notifyJsEventWithAction:(id)arg1 data:(id)arg2;
- (id)getJsEventWithAction:(id)arg1 data:(id)arg2;
- (id)starterHandle;
- (void)setStarterHandle:(id)arg1;
- (id)frameSetName;
- (void)setFrameSetName:(id)arg1;
- (void).cxx_destruct;
@end
