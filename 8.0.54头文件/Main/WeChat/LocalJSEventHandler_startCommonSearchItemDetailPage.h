@interface LocalJSEventHandler_startCommonSearchItemDetailPage : LocalJSEventHandler_BaseEvent <ServiceAuthExt>
{
    WCDataItem * _oDataItem; // +0x8
}
- (void)handleJSEvent:(id)arg1;
- (CGRect)getCardFrame;
- (void)jumpNote;
- (void)jumpFinder;
- (void)jumpSightVideo;
- (void)jumpEmotionStore;
- (void)jumpPhoto;
- (void)onOpenService:(unsigned long long)arg1 config:(id)arg2 error:(id)arg3;
- (id)oDataItem;
- (void)setODataItem:(id)arg1;
- (void).cxx_destruct;
@end

