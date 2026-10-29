@interface WCAdExpressionGestureJumpExtInfo : NSObject
{
    NSString * _candidateTwistCardId; // +0x8
    WCAdRandomPickCardExtInfo * _cardExtInfo; // +0x10
    WCAdRandomPickComponentExtInfo * _componentExtInfo; // +0x18
}
- (BOOL)isValid;
- (id)candidateTwistCardId;
- (void)setCandidateTwistCardId:(id)arg1;
- (id)cardExtInfo;
- (void)setCardExtInfo:(id)arg1;
- (id)componentExtInfo;
- (void)setComponentExtInfo:(id)arg1;
- (void).cxx_destruct;
@end

