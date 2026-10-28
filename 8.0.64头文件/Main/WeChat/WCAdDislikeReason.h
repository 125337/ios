@interface WCAdDislikeReason : NSObject <NSCoding>
{
    NSString * _reasonId; // +0x8
    WCMultiLanguageItem * _wording; // +0x10
}
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)reasonId;
- (void)setReasonId:(id)arg1;
- (id)wording;
- (void)setWording:(id)arg1;
- (void).cxx_destruct;
@end
