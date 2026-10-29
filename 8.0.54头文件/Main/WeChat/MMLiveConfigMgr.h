@interface MMLiveConfigMgr : MMUserService <IExptServiceExt, MMServiceProtocol>
{
    BOOL _isLiveUIPerfMonitorEnable; // +0x8
    BOOL _isLiveBackgroundDecodeEnable; // +0x9
    NSArray * _iphoneExtendIgnoreVCArray; // +0x10
    NSArray * _ipadExtendIgnoreVCArray; // +0x18
}
- (id)init;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)clearData;
- (void)checkAndUpdateData;
- (void)updateLiveBusinessInfoFromJsonString:(id)arg1;
- (void)customEventConfigForLiveAnchor;
- (void)customEventConfigForLiveAudience;
- (BOOL)getLiveBackgroundDecodeSwitch;
- (void)onExptItemListChange;
- (id)iphoneExtendIgnoreVCArray;
- (void)setIphoneExtendIgnoreVCArray:(id)arg1;
- (id)ipadExtendIgnoreVCArray;
- (void)setIpadExtendIgnoreVCArray:(id)arg1;
- (BOOL)isLiveUIPerfMonitorEnable;
- (void)setIsLiveUIPerfMonitorEnable:(BOOL)arg1;
- (BOOL)isLiveBackgroundDecodeEnable;
- (void)setIsLiveBackgroundDecodeEnable:(BOOL)arg1;
- (void).cxx_destruct;
@end

