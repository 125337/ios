@interface WCAdInteractionInfo : NSObject <NSCoding>
{
    NSArray * _eventInfos; // +0x8
    NSArray * _resourceInfos; // +0x10
    NSArray * _actionInfos; // +0x18
    NSArray * _determinationInfos; // +0x20
}
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)eventInfos;
- (void)setEventInfos:(id)arg1;
- (id)resourceInfos;
- (void)setResourceInfos:(id)arg1;
- (id)actionInfos;
- (void)setActionInfos:(id)arg1;
- (id)determinationInfos;
- (void)setDeterminationInfos:(id)arg1;
- (void).cxx_destruct;
@end
