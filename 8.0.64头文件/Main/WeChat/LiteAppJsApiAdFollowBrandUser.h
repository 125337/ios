@interface LiteAppJsApiAdFollowBrandUser : LiteAppJsApiAdBase <PBMessageObserverDelegate, IContactMgrExt>
{
    int _brandUIScene; // +0x20
    int _brandUISubScene; // +0x24
    MMTimer * _brandContactSyncTimer; // +0x28
}
- (id)init;
- (void)doAdInvokeJsApi:(id)arg1 param:(id)arg2 isFromView:(BOOL)arg3;
- (void)doBrandFollow:(id)arg1;
- (void)createVerify:(id)arg1 andSubScene:(unsigned int)arg2;
- (void)invalidateBrandContactSyncTimer;
- (void)onTimeoutBrandContactSync;
- (void)onModifyContact:(id)arg1;
- (void)scheduleBrandContactSyncTimer;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onBrandFollowFinish:(BOOL)arg1;
- (id)brandContactSyncTimer;
- (void)setBrandContactSyncTimer:(id)arg1;
- (int)brandUIScene;
- (void)setBrandUIScene:(int)arg1;
- (int)brandUISubScene;
- (void)setBrandUISubScene:(int)arg1;
- (void).cxx_destruct;
@end
