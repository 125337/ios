@interface WCFinderCreateLivePrepareResponseFailModel : NSObject
{
    long long _errCode; // +0x8
    NSString * _errMsg; // +0x10
    FinderJumpInfo * _applyEligibilityJumpInfo; // +0x18
}
- (long long)errCode;
- (void)setErrCode:(long long)arg1;
- (id)errMsg;
- (void)setErrMsg:(id)arg1;
- (id)applyEligibilityJumpInfo;
- (void)setApplyEligibilityJumpInfo:(id)arg1;
- (void).cxx_destruct;
@end
