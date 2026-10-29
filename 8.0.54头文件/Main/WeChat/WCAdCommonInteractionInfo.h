@interface WCAdCommonInteractionInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    NSString * _actionTip; // +0x8
    long long _actionType; // +0x10
    double _actionPosition; // +0x18
    double _actionDelay; // +0x20
    double _triggerGForce; // +0x28
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)actionTip;
- (void)setActionTip:(id)arg1;
- (long long)actionType;
- (void)setActionType:(long long)arg1;
- (double)actionPosition;
- (void)setActionPosition:(double)arg1;
- (double)actionDelay;
- (void)setActionDelay:(double)arg1;
- (double)triggerGForce;
- (void)setTriggerGForce:(double)arg1;
- (void).cxx_destruct;
@end

