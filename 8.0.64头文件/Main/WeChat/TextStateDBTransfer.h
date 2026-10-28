@interface TextStateDBTransfer : NSObject
{
    BOOL _affTransferStatusMainDBFlag; // +0x8
    BOOL _affTransferStatusCommentDBFlag; // +0x9
    BOOL _affStatusIsFinish; // +0xa
    BOOL _affMainStatusDBFusing; // +0xb
    BOOL _affMessageDBFusing; // +0xc
    unsigned int _affStatusMainTransferRetryNum; // +0x10
    unsigned int _affStatusMessageTransferRetryNum; // +0x14
    id <TextStateDBTransferDelegate> _delegate; // +0x18
}
+ (id)sharedInstance;
+ (BOOL)useAffDBTransfer;
+ (void)clearCacheForDebug;
+ (void)debugToast:(id)arg1;
- (id)init;
- (BOOL)hasFinishTransferAffMainStatusDB;
- (BOOL)hasFinishTransferAffCommentDB;
- (BOOL)hasFinishAffDBTransfer;
- (void)transferPlatformDataToAffDB;
- (id)getPlatformDBData;
- (void)checkTransferAllFinish;
- (void)dealSelfState;
- (void)dealSelfLike;
- (void)transferCommentDataToAffDB;
- (void)reportDBStateForDaily;
- (void)debugDBStateToast;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)affTransferStatusMainDBFlag;
- (void)setAffTransferStatusMainDBFlag:(BOOL)arg1;
- (BOOL)affTransferStatusCommentDBFlag;
- (void)setAffTransferStatusCommentDBFlag:(BOOL)arg1;
- (BOOL)affStatusIsFinish;
- (void)setAffStatusIsFinish:(BOOL)arg1;
- (BOOL)affMainStatusDBFusing;
- (void)setAffMainStatusDBFusing:(BOOL)arg1;
- (BOOL)affMessageDBFusing;
- (void)setAffMessageDBFusing:(BOOL)arg1;
- (unsigned int)affStatusMainTransferRetryNum;
- (void)setAffStatusMainTransferRetryNum:(unsigned int)arg1;
- (unsigned int)affStatusMessageTransferRetryNum;
- (void)setAffStatusMessageTransferRetryNum:(unsigned int)arg1;
- (void).cxx_destruct;
@end
