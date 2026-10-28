@interface WxamImageManager : MMUserService <MMServiceProtocol>
{
    BOOL _exptOnlyStoreWxam; // +0x8
    BOOL _exptTransferWxam; // +0x9
    BOOL _exptWxam2Heif; // +0xa
}
- (void)onServiceInit;
- (id)parseWxamDataToHeif:(id)arg1;
- (id)parseWxamData:(id)arg1;
- (id)parseWxamImg:(id)arg1;
- (id)getJpgPathByWxam:(id)arg1;
- (id)dirPathForWxamDecode;
- (id)tempPathForWxamDecode:(id)arg1;
- (id)tempPathForHeif:(id)arg1;
- (id)getWxamPathForUpload:(id)arg1;
- (id)getPermanentWxamPathByMsg:(id)arg1;
- (BOOL)exptOnlyStoreWxam;
- (void)setExptOnlyStoreWxam:(BOOL)arg1;
- (BOOL)exptTransferWxam;
- (void)setExptTransferWxam:(BOOL)arg1;
- (BOOL)exptWxam2Heif;
- (void)setExptWxam2Heif:(BOOL)arg1;
@end
