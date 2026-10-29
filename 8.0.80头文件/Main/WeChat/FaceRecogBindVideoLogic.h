@interface FaceRecogBindVideoLogic : MMObject <PBMessageObserverDelegate>
{
    id <FaceRecogBindVideoLogicDelegate> _delegate; // +0x8
}
- (BOOL)startBindVideoForSpam:(id)arg1 bioId:(unsigned long long)arg2 videoCdnId:(id)arg3 videoAesKey:(id)arg4 verifyInfo:(id)arg5 userTicket:(id)arg6 isRSA:(BOOL)arg7;
- (BOOL)startBindVideo:(id)arg1 bioId:(unsigned long long)arg2 videoFileId:(id)arg3 videoAesKey:(id)arg4;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleBindVideo:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
