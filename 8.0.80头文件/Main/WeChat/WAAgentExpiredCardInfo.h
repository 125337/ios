@interface WAAgentExpiredCardInfo : NSObject
{
    unsigned int _containerId; // +0x8
    NSString * _expiredText; // +0x10
}
+ (id)infoWithContainerId:(unsigned int)arg1 expiredText:(id)arg2;
- (id)description;
- (unsigned int)containerId;
- (void)setContainerId:(unsigned int)arg1;
- (id)expiredText;
- (void)setExpiredText:(id)arg1;
- (void).cxx_destruct;
@end
