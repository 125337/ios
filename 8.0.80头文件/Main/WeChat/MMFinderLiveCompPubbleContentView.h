@interface MMFinderLiveCompPubbleContentView : MMFinderLivePromotePubbleContentView <MMLiveBubbleComponentEventHandler>
{
    FinderLiveBubbleUiInstanceInfo * _instanceInfo; // +0x8
    MMLiveBubbleBodyComponent * _bodyComponent; // +0x10
    NSMutableDictionary * _mutableSlotContainerViews; // +0x18
    UITapGestureRecognizer * _bodyTapGesture; // +0x20
}
+ (id)stringAttributeForKey:(id)arg1 fromComponent:(id)arg2;
+ (int)intAttributeForKey:(id)arg1 fromComponent:(id)arg2;
+ (id)bytesAttributeForKey:(id)arg1 fromComponent:(id)arg2;
+ (BOOL)isValidSlotId:(long long)arg1;
+ (BOOL)isValidComponentId:(long long)arg1;
+ (id)finderJumpInfoFromBase64:(id)arg1;
+ (id)attributeInfoForKey:(id)arg1 fromComponent:(id)arg2;
- (id)initWithPromoteMsgInfo:(id)arg1 taskId:(id)arg2;
- (void)updatepromoteBuffer:(id)arg1;
- (id)getCurrentPromoteBuffer;
- (void)layoutUI;
- (id)parseInstanceInfoFromBuffer:(id)arg1;
- (void)setupSlotContainers;
- (id)containerViewForSlotId:(id)arg1;
- (void)renderComponentsInSlots;
- (void)setupBodyComponentIfNeeded;
- (void)updateFromSyncPromoteResp:(id)arg1;
- (id)slotInfoForSlotId:(id)arg1;
- (id)createViewForComponentId:(long long)arg1;
- (void)onShowed;
- (void)onClosed;
- (void)handleComponentEvent:(id)arg1;
- (long long)compPromoteActionType;
- (void)populateComponentView:(id)arg1 withComponentId:(long long)arg2 info:(id)arg3;
- (id)rootComponentInfo;
- (id)slotContainerViews;
- (id)mutableSlotContainerViews;
- (id)instanceInfo;
- (void)setInstanceInfo:(id)arg1;
- (id)bodyComponent;
- (void)setBodyComponent:(id)arg1;
- (void)setMutableSlotContainerViews:(id)arg1;
- (id)bodyTapGesture;
- (void)setBodyTapGesture:(id)arg1;
- (void).cxx_destruct;
@end
