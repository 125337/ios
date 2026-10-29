@interface WCAdFeedbackItem : NSObject <NSCoding>
{
    NSString * _url; // +0x8
    WCMultiLanguageItem * _wording; // +0x10
}
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)wording;
- (void)setWording:(id)arg1;
- (void).cxx_destruct;
@end

